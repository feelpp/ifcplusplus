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
	// TYPE IfcElectricMotorTypeEnum = ENUMERATION OF	(DC	,INDUCTION	,POLYPHASE	,RELUCTANCESYNCHRONOUS	,SYNCHRONOUS	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcElectricMotorTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcElectricMotorTypeEnumEnum
		{
			ENUM_DC,
			ENUM_INDUCTION,
			ENUM_POLYPHASE,
			ENUM_RELUCTANCESYNCHRONOUS,
			ENUM_SYNCHRONOUS,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcElectricMotorTypeEnum() = default;
		IfcElectricMotorTypeEnum( IfcElectricMotorTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 667340609; }
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcElectricMotorTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcElectricMotorTypeEnumEnum m_enum;
	};
}

