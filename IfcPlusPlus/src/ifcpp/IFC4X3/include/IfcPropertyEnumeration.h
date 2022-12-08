/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPropertyAbstraction.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcLabel;
	class IFCQUERY_EXPORT IfcValue;
	class IFCQUERY_EXPORT IfcUnit;
	//ENTITY
	class IFCQUERY_EXPORT IfcPropertyEnumeration : public IfcPropertyAbstraction
	{ 
	public:
		IfcPropertyEnumeration() = default;
		IfcPropertyEnumeration( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 3; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3710013099; }

		// IfcPropertyAbstraction -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;

		// IfcPropertyEnumeration -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcLabel>										m_Name;
		std::vector<shared_ptr<IfcValue> >							m_EnumerationValues;
		shared_ptr<IfcUnit>											m_Unit;						//optional
	};
}

