/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPresentationLayerAssignment.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcLogical;
	class IFCQUERY_EXPORT IfcPresentationStyle;
	//ENTITY
	class IFCQUERY_EXPORT IfcPresentationLayerWithStyle : public IfcPresentationLayerAssignment
	{ 
	public:
		IfcPresentationLayerWithStyle() = default;
		IfcPresentationLayerWithStyle( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 8; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1304840413; }

		// IfcPresentationLayerAssignment -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>							m_Name;
		//  shared_ptr<IfcText>								m_Description;				//optional
		//  std::vector<shared_ptr<IfcLayeredItem> >		m_AssignedItems;
		//  shared_ptr<IfcIdentifier>						m_Identifier;				//optional

		// IfcPresentationLayerWithStyle -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcLogical>							m_LayerOn;
		shared_ptr<IfcLogical>							m_LayerFrozen;
		shared_ptr<IfcLogical>							m_LayerBlocked;
		std::vector<shared_ptr<IfcPresentationStyle> >	m_LayerStyles;
	};
}

