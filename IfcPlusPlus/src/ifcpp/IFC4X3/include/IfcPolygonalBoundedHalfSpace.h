/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcHalfSpaceSolid.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcAxis2Placement3D;
	class IFCQUERY_EXPORT IfcBoundedCurve;
	//ENTITY
	class IFCQUERY_EXPORT IfcPolygonalBoundedHalfSpace : public IfcHalfSpaceSolid
	{
	public:
		IfcPolygonalBoundedHalfSpace() = default;
		IfcPolygonalBoundedHalfSpace( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 4; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2775532180; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcHalfSpaceSolid -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcSurface>									m_BaseSurface;
		//  shared_ptr<IfcBoolean>									m_AgreementFlag;

		// IfcPolygonalBoundedHalfSpace -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcAxis2Placement3D>							m_Position;
		shared_ptr<IfcBoundedCurve>								m_PolygonalBoundary;
	};
}
