/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcTopologicalRepresentationItem.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcFaceBound;
	class IFCQUERY_EXPORT IfcTextureMap;
	//ENTITY
	class IFCQUERY_EXPORT IfcFace : public IfcTopologicalRepresentationItem
	{
	public:
		IfcFace() = default;
		IfcFace( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 1; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2556980723; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcTopologicalRepresentationItem -----------------------------------------------------------

		// IfcFace -----------------------------------------------------------
		// attributes:
		std::vector<shared_ptr<IfcFaceBound> >					m_Bounds;
		// inverse attributes:
		std::vector<weak_ptr<IfcTextureMap> >					m_HasTextureMaps_inverse;
	};
}
