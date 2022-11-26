/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcDoorStyleConstructionEnum = ENUMERATION OF	(ALUMINIUM	,ALUMINIUM_PLASTIC	,ALUMINIUM_WOOD	,HIGH_GRADE_STEEL	,PLASTIC	,STEEL	,WOOD	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcDoorStyleConstructionEnum : virtual public BuildingObject
	{
	public:
		enum IfcDoorStyleConstructionEnumEnum
		{
			ENUM_ALUMINIUM,
			ENUM_ALUMINIUM_PLASTIC,
			ENUM_ALUMINIUM_WOOD,
			ENUM_HIGH_GRADE_STEEL,
			ENUM_PLASTIC,
			ENUM_STEEL,
			ENUM_WOOD,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcDoorStyleConstructionEnum() = default;
		IfcDoorStyleConstructionEnum( IfcDoorStyleConstructionEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2721224556; }
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcDoorStyleConstructionEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcDoorStyleConstructionEnumEnum m_enum;
	};
}

