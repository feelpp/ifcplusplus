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
	// TYPE IfcRailwayTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcRailwayTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcRailwayTypeEnumEnum
		{
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcRailwayTypeEnum() = default;
		IfcRailwayTypeEnum( IfcRailwayTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 827741273; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcRailwayTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcRailwayTypeEnumEnum m_enum;
	};
}
