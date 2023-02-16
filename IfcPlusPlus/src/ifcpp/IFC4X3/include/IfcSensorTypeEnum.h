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
	// TYPE IfcSensorTypeEnum = ENUMERATION OF	(CO2SENSOR	,CONDUCTANCESENSOR	,CONTACTSENSOR	,COSENSOR	,EARTHQUAKESENSOR	,FIRESENSOR	,FLOWSENSOR	,FOREIGNOBJECTDETECTIONSENSOR	,FROSTSENSOR	,GASSENSOR	,HEATSENSOR	,HUMIDITYSENSOR	,IDENTIFIERSENSOR	,IONCONCENTRATIONSENSOR	,LEVELSENSOR	,LIGHTSENSOR	,MOISTURESENSOR	,MOVEMENTSENSOR	,OBSTACLESENSOR	,PHSENSOR	,PRESSURESENSOR	,RADIATIONSENSOR	,RADIOACTIVITYSENSOR	,RAINSENSOR	,SMOKESENSOR	,SNOWDEPTHSENSOR	,SOUNDSENSOR	,TEMPERATURESENSOR	,TRAINSENSOR	,TURNOUTCLOSURESENSOR	,WHEELSENSOR	,WINDSENSOR	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcSensorTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcSensorTypeEnumEnum
		{
			ENUM_CO2SENSOR,
			ENUM_CONDUCTANCESENSOR,
			ENUM_CONTACTSENSOR,
			ENUM_COSENSOR,
			ENUM_EARTHQUAKESENSOR,
			ENUM_FIRESENSOR,
			ENUM_FLOWSENSOR,
			ENUM_FOREIGNOBJECTDETECTIONSENSOR,
			ENUM_FROSTSENSOR,
			ENUM_GASSENSOR,
			ENUM_HEATSENSOR,
			ENUM_HUMIDITYSENSOR,
			ENUM_IDENTIFIERSENSOR,
			ENUM_IONCONCENTRATIONSENSOR,
			ENUM_LEVELSENSOR,
			ENUM_LIGHTSENSOR,
			ENUM_MOISTURESENSOR,
			ENUM_MOVEMENTSENSOR,
			ENUM_OBSTACLESENSOR,
			ENUM_PHSENSOR,
			ENUM_PRESSURESENSOR,
			ENUM_RADIATIONSENSOR,
			ENUM_RADIOACTIVITYSENSOR,
			ENUM_RAINSENSOR,
			ENUM_SMOKESENSOR,
			ENUM_SNOWDEPTHSENSOR,
			ENUM_SOUNDSENSOR,
			ENUM_TEMPERATURESENSOR,
			ENUM_TRAINSENSOR,
			ENUM_TURNOUTCLOSURESENSOR,
			ENUM_WHEELSENSOR,
			ENUM_WINDSENSOR,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcSensorTypeEnum() = default;
		IfcSensorTypeEnum( IfcSensorTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1098295817; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcSensorTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcSensorTypeEnumEnum m_enum;
	};
}
