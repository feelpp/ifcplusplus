/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcRelAssigns.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcActor;
	class IFCQUERY_EXPORT IfcActorRole;
	//ENTITY
	class IFCQUERY_EXPORT IfcRelAssignsToActor : public IfcRelAssigns
	{ 
	public:
		IfcRelAssignsToActor() = default;
		IfcRelAssignsToActor( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 8; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1683148259; }

		// IfcRoot -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcGloballyUniqueId>					m_GlobalId;
		//  shared_ptr<IfcOwnerHistory>						m_OwnerHistory;				//optional
		//  shared_ptr<IfcLabel>							m_Name;						//optional
		//  shared_ptr<IfcText>								m_Description;				//optional

		// IfcRelationship -----------------------------------------------------------

		// IfcRelAssigns -----------------------------------------------------------
		// attributes:
		//  std::vector<shared_ptr<IfcObjectDefinition> >	m_RelatedObjects;
		//  shared_ptr<IfcObjectTypeEnum>					m_RelatedObjectsType;		//optional

		// IfcRelAssignsToActor -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcActor>							m_RelatingActor;
		shared_ptr<IfcActorRole>						m_ActingRole;				//optional
	};
}

