/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcDirectrixCurveSweptAreaSolid.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcSurface;
	//ENTITY
	class IFCQUERY_EXPORT IfcSurfaceCurveSweptAreaSolid : public IfcDirectrixCurveSweptAreaSolid
	{
	public:
		IfcSurfaceCurveSweptAreaSolid() = default;
		IfcSurfaceCurveSweptAreaSolid( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 6; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2028607225; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcSolidModel -----------------------------------------------------------

		// IfcSweptAreaSolid -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcProfileDef>								m_SweptArea;
		//  shared_ptr<IfcAxis2Placement3D>							m_Position;					//optional

		// IfcDirectrixCurveSweptAreaSolid -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcCurve>									m_Directrix;
		//  shared_ptr<IfcCurveMeasureSelect>						m_StartParam;				//optional
		//  shared_ptr<IfcCurveMeasureSelect>						m_EndParam;					//optional

		// IfcSurfaceCurveSweptAreaSolid -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcSurface>									m_ReferenceSurface;
	};
}
