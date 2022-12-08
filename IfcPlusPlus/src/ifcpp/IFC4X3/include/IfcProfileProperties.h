/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcExtendedProperties.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcProfileDef;
	//ENTITY
	class IFCQUERY_EXPORT IfcProfileProperties : public IfcExtendedProperties
	{ 
	public:
		IfcProfileProperties() = default;
		IfcProfileProperties( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 4; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2802850158; }

		// IfcPropertyAbstraction -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;

		// IfcExtendedProperties -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcIdentifier>									m_Name;						//optional
		//  shared_ptr<IfcText>											m_Description;				//optional
		//  std::vector<shared_ptr<IfcProperty> >						m_Properties;

		// IfcProfileProperties -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcProfileDef>									m_ProfileDefinition;
	};
}

