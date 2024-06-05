/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcBoundedCurve.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcInteger;
	class IFCQUERY_EXPORT IfcCartesianPoint;
	class IFCQUERY_EXPORT IfcBSplineCurveForm;
	class IFCQUERY_EXPORT IfcLogical;
	//ENTITY
	class IFCQUERY_EXPORT IfcBSplineCurve : public IfcBoundedCurve
	{
	public:
		IfcBSplineCurve() = default;
		IfcBSplineCurve( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 5; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1967976161; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcCurve -----------------------------------------------------------

		// IfcBoundedCurve -----------------------------------------------------------

		// IfcBSplineCurve -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcInteger>									m_Degree;
		std::vector<shared_ptr<IfcCartesianPoint> >				m_ControlPointsList;
		shared_ptr<IfcBSplineCurveForm>							m_CurveForm;
		shared_ptr<IfcLogical>									m_ClosedCurve;
		shared_ptr<IfcLogical>									m_SelfIntersect;
	};
}
