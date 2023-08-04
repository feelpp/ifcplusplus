/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcAxis2Placement.h"
#include "IfcPlacement.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcDirection;
	//ENTITY
	class IFCQUERY_EXPORT IfcAxis2Placement2D : virtual public IfcAxis2Placement, public IfcPlacement
	{
	public:
		IfcAxis2Placement2D() = default;
		IfcAxis2Placement2D( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 2; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3125803723; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcPlacement -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcPoint>									m_Location;

		// IfcAxis2Placement2D -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcDirection>								m_RefDirection;				//optional
	};
}
