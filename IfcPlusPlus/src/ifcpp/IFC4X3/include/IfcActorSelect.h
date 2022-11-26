/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <iostream>
#include <sstream>
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcActorSelect = SELECT	(IfcOrganization	,IfcPerson	,IfcPersonAndOrganization);
	class IFCQUERY_EXPORT IfcActorSelect : virtual public BuildingObject
	{
	public:
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options ) = 0;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const = 0;
		static shared_ptr<IfcActorSelect> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
	};
}

