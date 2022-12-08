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
	// TYPE IfcSolarDeviceTypeEnum = ENUMERATION OF	(SOLARCOLLECTOR	,SOLARPANEL	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcSolarDeviceTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcSolarDeviceTypeEnumEnum
		{
			ENUM_SOLARCOLLECTOR,
			ENUM_SOLARPANEL,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcSolarDeviceTypeEnum() = default;
		IfcSolarDeviceTypeEnum( IfcSolarDeviceTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 244819378; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcSolarDeviceTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcSolarDeviceTypeEnumEnum m_enum;
	};
}

