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
	// TYPE IfcUnitaryEquipmentTypeEnum = ENUMERATION OF	(AIRCONDITIONINGUNIT	,AIRHANDLER	,DEHUMIDIFIER	,ROOFTOPUNIT	,SPLITSYSTEM	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcUnitaryEquipmentTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcUnitaryEquipmentTypeEnumEnum
		{
			ENUM_AIRCONDITIONINGUNIT,
			ENUM_AIRHANDLER,
			ENUM_DEHUMIDIFIER,
			ENUM_ROOFTOPUNIT,
			ENUM_SPLITSYSTEM,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcUnitaryEquipmentTypeEnum() = default;
		IfcUnitaryEquipmentTypeEnum( IfcUnitaryEquipmentTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 935604799; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcUnitaryEquipmentTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcUnitaryEquipmentTypeEnumEnum m_enum;
	};
}

