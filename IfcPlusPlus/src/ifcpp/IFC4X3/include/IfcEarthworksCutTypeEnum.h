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
	// TYPE IfcEarthworksCutTypeEnum = ENUMERATION OF	(BASE_EXCAVATION	,CUT	,DREDGING	,EXCAVATION	,OVEREXCAVATION	,PAVEMENTMILLING	,STEPEXCAVATION	,TOPSOILREMOVAL	,TRENCH	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcEarthworksCutTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcEarthworksCutTypeEnumEnum
		{
			ENUM_BASE_EXCAVATION,
			ENUM_CUT,
			ENUM_DREDGING,
			ENUM_EXCAVATION,
			ENUM_OVEREXCAVATION,
			ENUM_PAVEMENTMILLING,
			ENUM_STEPEXCAVATION,
			ENUM_TOPSOILREMOVAL,
			ENUM_TRENCH,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcEarthworksCutTypeEnum() = default;
		IfcEarthworksCutTypeEnum( IfcEarthworksCutTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1268632640; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcEarthworksCutTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcEarthworksCutTypeEnumEnum m_enum;
	};
}

