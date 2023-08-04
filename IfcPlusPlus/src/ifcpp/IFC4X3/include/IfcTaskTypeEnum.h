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
	// TYPE IfcTaskTypeEnum = ENUMERATION OF	(ADJUSTMENT	,ATTENDANCE	,CALIBRATION	,CONSTRUCTION	,DEMOLITION	,DISMANTLE	,DISPOSAL	,EMERGENCY	,INSPECTION	,INSTALLATION	,LOGISTIC	,MAINTENANCE	,MOVE	,OPERATION	,REMOVAL	,RENOVATION	,SAFETY	,SHUTDOWN	,STARTUP	,TESTING	,TROUBLESHOOTING	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcTaskTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcTaskTypeEnumEnum
		{
			ENUM_ADJUSTMENT,
			ENUM_ATTENDANCE,
			ENUM_CALIBRATION,
			ENUM_CONSTRUCTION,
			ENUM_DEMOLITION,
			ENUM_DISMANTLE,
			ENUM_DISPOSAL,
			ENUM_EMERGENCY,
			ENUM_INSPECTION,
			ENUM_INSTALLATION,
			ENUM_LOGISTIC,
			ENUM_MAINTENANCE,
			ENUM_MOVE,
			ENUM_OPERATION,
			ENUM_REMOVAL,
			ENUM_RENOVATION,
			ENUM_SAFETY,
			ENUM_SHUTDOWN,
			ENUM_STARTUP,
			ENUM_TESTING,
			ENUM_TROUBLESHOOTING,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcTaskTypeEnum() = default;
		IfcTaskTypeEnum( IfcTaskTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 384449397; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcTaskTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcTaskTypeEnumEnum m_enum;
	};
}
