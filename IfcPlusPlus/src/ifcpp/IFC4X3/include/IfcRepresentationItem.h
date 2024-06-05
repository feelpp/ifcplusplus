/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcLayeredItem.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcPresentationLayerAssignment;
	class IFCQUERY_EXPORT IfcStyledItem;
	//ENTITY
	class IFCQUERY_EXPORT IfcRepresentationItem : virtual public IfcLayeredItem, public BuildingEntity
	{
	public:
		IfcRepresentationItem() = default;
		IfcRepresentationItem( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 0; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3008791417; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;
	};
}
