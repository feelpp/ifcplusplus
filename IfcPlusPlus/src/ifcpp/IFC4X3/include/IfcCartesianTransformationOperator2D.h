/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcCartesianTransformationOperator.h"
namespace IFC4X3
{
	//ENTITY
	class IFCQUERY_EXPORT IfcCartesianTransformationOperator2D : public IfcCartesianTransformationOperator
	{ 
	public:
		IfcCartesianTransformationOperator2D() = default;
		IfcCartesianTransformationOperator2D( int id );
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 4; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3749851601; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcCartesianTransformationOperator -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcDirection>								m_Axis1;					//optional
		//  shared_ptr<IfcDirection>								m_Axis2;					//optional
		//  shared_ptr<IfcCartesianPoint>							m_LocalOrigin;
		//  shared_ptr<IfcReal>										m_Scale;					//optional

		// IfcCartesianTransformationOperator2D -----------------------------------------------------------
	};
}

