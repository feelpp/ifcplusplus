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
	// TYPE IfcShadingDeviceTypeEnum = ENUMERATION OF	(AWNING	,JALOUSIE	,SHUTTER	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcShadingDeviceTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcShadingDeviceTypeEnumEnum
		{
			ENUM_AWNING,
			ENUM_JALOUSIE,
			ENUM_SHUTTER,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcShadingDeviceTypeEnum() = default;
		IfcShadingDeviceTypeEnum( IfcShadingDeviceTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1823282114; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcShadingDeviceTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcShadingDeviceTypeEnumEnum m_enum;
	};
}
