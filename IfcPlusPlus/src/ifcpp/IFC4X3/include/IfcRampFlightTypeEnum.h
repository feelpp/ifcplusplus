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
	// TYPE IfcRampFlightTypeEnum = ENUMERATION OF	(SPIRAL	,STRAIGHT	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcRampFlightTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcRampFlightTypeEnumEnum
		{
			ENUM_SPIRAL,
			ENUM_STRAIGHT,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcRampFlightTypeEnum() = default;
		IfcRampFlightTypeEnum( IfcRampFlightTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1040890966; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcRampFlightTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcRampFlightTypeEnumEnum m_enum;
	};
}

