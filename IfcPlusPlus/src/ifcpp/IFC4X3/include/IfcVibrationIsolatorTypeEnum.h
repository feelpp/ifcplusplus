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
	// TYPE IfcVibrationIsolatorTypeEnum = ENUMERATION OF	(BASE	,COMPRESSION	,SPRING	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcVibrationIsolatorTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcVibrationIsolatorTypeEnumEnum
		{
			ENUM_BASE,
			ENUM_COMPRESSION,
			ENUM_SPRING,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcVibrationIsolatorTypeEnum() = default;
		IfcVibrationIsolatorTypeEnum( IfcVibrationIsolatorTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1282226622; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcVibrationIsolatorTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcVibrationIsolatorTypeEnumEnum m_enum;
	};
}
