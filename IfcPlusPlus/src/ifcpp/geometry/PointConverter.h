/* -*-c++-*- IfcQuery www.ifcquery.com
*
MIT License

Copyright (c) 2017 Fabian Gerold

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#pragma once

#define _USE_MATH_DEFINES
#include <math.h>
#include <ifcpp/geometry/GeometrySettings.h>
#include <ifcpp/model/BasicTypes.h>
#include <ifcpp/model/StatusCallback.h>
#include <ifcpp/model/UnitConverter.h>
#include <ifcpp/IFC4X3/EntityFactory.h>
#include <IfcCartesianPoint.h>
#include <IfcCurve.h>
#include <IfcLengthMeasure.h>
#include <IfcLoop.h>
#include <IfcPolyline.h>
#include <IfcTrimmingSelect.h>
#include <IfcVertex.h>
#include <IfcVertexPoint.h>
#include "GeomUtils.h"
#include "IncludeCarveHeaders.h"

using namespace IFC4X3;

//\brief class to convert IFC point representations into carve input geometry
class PointConverter : public StatusCallback
{
protected:
	shared_ptr<UnitConverter>		m_unit_converter;

public:
	PointConverter(shared_ptr<UnitConverter>& uc) : m_unit_converter(uc)
	{
	}

	virtual ~PointConverter() {}

	const shared_ptr<UnitConverter>& getUnitConverter() { return m_unit_converter; }
	void setUnitConverter(shared_ptr<UnitConverter>& unit_converter)
	{
		m_unit_converter = unit_converter;
	}

	static bool convertIfcCartesianPoint(const shared_ptr<IfcCartesianPoint>& ifc_point, vec3& point, double length_factor)
	{
		if (!ifc_point)
		{
			return false;
		}
		if (!std::isnan(ifc_point->m_Coordinates[2]))
		{
			double x = ifc_point->m_Coordinates[0] * length_factor;
			double y = ifc_point->m_Coordinates[1] * length_factor;
			double z = ifc_point->m_Coordinates[2] * length_factor;
			point = carve::geom::VECTOR(x, y, z);
			return true;
		}
		else
		{
			double x = ifc_point->m_Coordinates[0] * length_factor;
			double y = ifc_point->m_Coordinates[1] * length_factor;
			point = carve::geom::VECTOR(x, y, 0.0);
			return true;
		}
	}

	void convertIfcCartesianPointVector(const std::vector<shared_ptr<IfcCartesianPoint> >& points, std::vector<vec3>& loop) const
	{
		const double length_factor = m_unit_converter->getLengthInMeterFactor();
		const size_t num_points = points.size();
		for (size_t i_point = 0; i_point < num_points; ++i_point)
		{
			const shared_ptr<IfcCartesianPoint>& cartesian_point = points[i_point];
			if (!cartesian_point)
			{
				continue;
			}

			if (!std::isnan(cartesian_point->m_Coordinates[2]))
			{
				double x = cartesian_point->m_Coordinates[0] * length_factor;
				double y = cartesian_point->m_Coordinates[1] * length_factor;
				double z = cartesian_point->m_Coordinates[2] * length_factor;
				loop.push_back(carve::geom::VECTOR(x, y, z));
			}
			else
			{
				double x = cartesian_point->m_Coordinates[0] * length_factor;
				double y = cartesian_point->m_Coordinates[1] * length_factor;
				loop.push_back(carve::geom::VECTOR(x, y, 0.0));
			}
		}
	}
	void convertIfcCartesianPointVector2D(const std::vector<std::vector<shared_ptr<IfcCartesianPoint> > >& vec_points_in, std::vector<vec3>& vertices)
	{
		const double length_factor = m_unit_converter->getLengthInMeterFactor();
		for (size_t ii = 0; ii < vec_points_in.size(); ++ii)
		{
			const std::vector<shared_ptr<IfcCartesianPoint> >& points_inner = vec_points_in[ii];
			for (size_t jj = 0; jj < points_inner.size(); ++jj)
			{
				const shared_ptr<IfcCartesianPoint>& cartesian_point = points_inner[jj];

				if (!cartesian_point)
				{
					continue;
				}

				if (!std::isnan(cartesian_point->m_Coordinates[2]))
				{
					vertices.push_back(carve::geom::VECTOR(cartesian_point->m_Coordinates[0] * length_factor, cartesian_point->m_Coordinates[1] * length_factor, cartesian_point->m_Coordinates[2] * length_factor));
				}
				else
				{
					vertices.push_back(carve::geom::VECTOR(cartesian_point->m_Coordinates[0] * length_factor, cartesian_point->m_Coordinates[1] * length_factor, 0.0));
				}
			}
		}
	}
	void convertIfcCartesianPointVectorSkipDuplicates(const std::vector<shared_ptr<IfcCartesianPoint> >& vec_ifc_points, std::vector<vec3>& loop) const
	{
		const double length_factor = m_unit_converter->getLengthInMeterFactor();
		vec3  vertex_previous;
		for (size_t ii = 0; ii < vec_ifc_points.size(); ++ii)
		{
			const shared_ptr<IfcCartesianPoint>& cartesian_point = vec_ifc_points[ii];
			double x = 0.0, y = 0.0, z = 0.0;
			if (cartesian_point)
			{
				if (!std::isnan(cartesian_point->m_Coordinates[2]))
				{
					x = cartesian_point->m_Coordinates[0] * length_factor;
					y = cartesian_point->m_Coordinates[1] * length_factor;
					z = cartesian_point->m_Coordinates[2] * length_factor;
				}
				else
				{
					x = cartesian_point->m_Coordinates[0] * length_factor;
					y = cartesian_point->m_Coordinates[1] * length_factor;
				}
			}

			// skip duplicate vertices
			if (ii > 0)
			{
				if (std::abs(x - vertex_previous.x) < 0.00000001)
				{
					if (std::abs(y - vertex_previous.y) < 0.00000001)
					{
						if (std::abs(z - vertex_previous.z) < 0.00000001)
						{
							continue;
						}
					}
				}
			}
			loop.push_back(carve::geom::VECTOR(x, y, z));
			vertex_previous.x = x;
			vertex_previous.y = y;
			vertex_previous.z = z;
		}
	}

	void convertPointList(const std::vector<std::vector<shared_ptr<IfcLengthMeasure> > >& pointList, std::vector<vec3>& loop)
	{
		const double length_factor = m_unit_converter->getLengthInMeterFactor();
		for (size_t ii = 0; ii < pointList.size(); ++ii)
		{

			const std::vector<shared_ptr<IfcLengthMeasure> >& coords1 = pointList[ii];
			if (coords1.size() > 2)
			{
				double x = coords1[0]->m_value * length_factor;
				double y = coords1[1]->m_value * length_factor;
				double z = coords1[2]->m_value * length_factor;
				loop.push_back(carve::geom::VECTOR(x, y, z));
			}
			else if (coords1.size() > 1)
			{
				double x = coords1[0]->m_value * length_factor;
				double y = coords1[1]->m_value * length_factor;
				loop.push_back(carve::geom::VECTOR(x, y, 0.0));
			}
		}
	}

	static bool convertIfcVertex(const shared_ptr<IfcVertex>& vertex, vec3& point_result, const double length_factor)
	{
		if (vertex)
		{
			shared_ptr<IfcVertexPoint> vertex_point = dynamic_pointer_cast<IfcVertexPoint>(vertex);
			if (vertex_point)
			{
				if (vertex_point->m_VertexGeometry)
				{
					const shared_ptr<IfcPoint>& vertex_point_geometry = vertex_point->m_VertexGeometry;
					// ENTITY IfcPoint ABSTRACT SUPERTYPE OF(ONEOF(IfcCartesianPoint, IfcPointOnCurve, IfcPointOnSurface))
					shared_ptr<IfcCartesianPoint> cartesian_point = dynamic_pointer_cast<IfcCartesianPoint>(vertex_point_geometry);
					if (cartesian_point)
					{
						if (!std::isnan(cartesian_point->m_Coordinates[2]))
						{
							point_result = carve::geom::VECTOR(cartesian_point->m_Coordinates[0] * length_factor, cartesian_point->m_Coordinates[1] * length_factor, cartesian_point->m_Coordinates[2] * length_factor);
							return true;
						}
						else
						{
							point_result = carve::geom::VECTOR(cartesian_point->m_Coordinates[0] * length_factor, cartesian_point->m_Coordinates[1] * length_factor, 0.0);
							return true;
						}
					}
					else
					{
						std::cout << "IfcVertexPoint.VertexGeometry type = " << EntityFactory::getStringForClassID(vertex_point_geometry->classID()) << std::endl;
					}
				}
			}
			else
			{
				std::cout << "IfcVertex type = " << EntityFactory::getStringForClassID(vertex->classID()) << std::endl;
			}
		}
		return false;
	}

	static void convertIfcVertex(const shared_ptr<IfcVertex>& vertex, shared_ptr<IfcCartesianPoint>& point_result, const double length_factor)
	{
		if (vertex)
		{
			shared_ptr<IfcVertexPoint> vertex_point = dynamic_pointer_cast<IfcVertexPoint>(vertex);
			if (vertex_point)
			{
				if (vertex_point->m_VertexGeometry)
				{
					const shared_ptr<IfcPoint>& vertex_point_geometry = vertex_point->m_VertexGeometry;
					// ENTITY IfcPoint ABSTRACT SUPERTYPE OF(ONEOF(IfcCartesianPoint, IfcPointOnCurve, IfcPointOnSurface))
					shared_ptr<IfcCartesianPoint> cartesian_point = dynamic_pointer_cast<IfcCartesianPoint>(vertex_point_geometry);
					if (cartesian_point)
					{
						point_result = cartesian_point;
					}
					else
					{
						std::cout << "IfcVertexPoint.VertexGeometry type = " << EntityFactory::getStringForClassID(vertex_point_geometry->classID()) << std::endl;
					}
				}
			}
			else
			{
				std::cout << "IfcVertex type = " << EntityFactory::getStringForClassID(vertex->classID()) << std::endl;
			}
		}
	}

	

	static void convertPointToTrimmingSelect(const shared_ptr<IfcVertex> &vertex, double length_factor, std::vector<shared_ptr<IfcTrimmingSelect> >& trim_vec)
	{
		std::vector<shared_ptr<IfcTrimmingSelect> > curve_trim2_vec;
		shared_ptr<IfcCartesianPoint> trimPoint1;
		PointConverter::convertIfcVertex(vertex, trimPoint1, length_factor);
		if (trimPoint1)
		{
			trim_vec.push_back(trimPoint1);
		}
	}

	static double trimPointCircleDistance(double angle, double radius, const carve::math::Matrix& circlePosition, const vec3& trimPoint)
	{
		vec3 circlePoint = carve::geom::VECTOR(radius * cos(angle), radius * sin(angle), 0);
		circlePoint = circlePosition * circlePoint;
		double distance2 = (trimPoint - circlePoint).length2();
		return distance2;
	}

	//\brief: returns the corresponding angle in radian. angle 0 is on the positive x-axis.
	static double getAngleOnCircle(const vec3& circleCenter, double radius, vec3& trimPoint, const carve::math::Matrix& circlePosition, const carve::math::Matrix& circlePositionInverse, double eps)
	{
		double resultAngle1 = -1.0;
		vec3 center2trimPoint = trimPoint - circleCenter;
		vec3 center2trimPointDirection = center2trimPoint;
		center2trimPointDirection.normalize();

		bool checkDistanceToCircleCenter = false;
		if (checkDistanceToCircleCenter)
		{
			if (std::abs(center2trimPoint.length() - radius) > eps)
			{
				trimPoint = circleCenter + center2trimPointDirection * radius;
			}
		}

		double distance1FromTrimPoint = DBL_MAX;
		vec3 circleCenter2D = circlePositionInverse * circleCenter;
		vec3 trimPoint2D = circlePositionInverse * trimPoint;
		vec3 trimPointRelative2D = trimPoint2D - circleCenter2D;
		trimPointRelative2D.normalize();
		resultAngle1 = atan2(trimPointRelative2D.y, trimPointRelative2D.x);
		if (resultAngle1 < 0)
		{
			resultAngle1 += 2.0 * M_PI;
		}

		vec3 circleCenter3DCheck = circlePosition * carve::geom::VECTOR(0, 0, 0);
		vec3 circlePoint2D = carve::geom::VECTOR(radius * cos(resultAngle1), radius * sin(resultAngle1), 0);

		vec3 check = circlePoint2D - trimPoint2D;
		distance1FromTrimPoint = check.length();

#ifdef _DEBUG
		double maxAllowedTolerance = EPS_M4 * 5.0;
		if (distance1FromTrimPoint > maxAllowedTolerance)
		{
			std::cout << "getAngleOnCircle: point not on cicle. distance: " << distance1FromTrimPoint << std::endl;
		}
#endif
		return resultAngle1;
	}
};
