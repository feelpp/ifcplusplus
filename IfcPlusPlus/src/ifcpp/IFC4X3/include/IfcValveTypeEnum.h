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
	// TYPE IfcValveTypeEnum = ENUMERATION OF	(AIRRELEASE	,ANTIVACUUM	,CHANGEOVER	,CHECK	,COMMISSIONING	,DIVERTING	,DOUBLECHECK	,DOUBLEREGULATING	,DRAWOFFCOCK	,FAUCET	,FLUSHING	,GASCOCK	,GASTAP	,ISOLATING	,MIXING	,PRESSUREREDUCING	,PRESSURERELIEF	,REGULATING	,SAFETYCUTOFF	,STEAMTRAP	,STOPCOCK	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcValveTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcValveTypeEnumEnum
		{
			ENUM_AIRRELEASE,
			ENUM_ANTIVACUUM,
			ENUM_CHANGEOVER,
			ENUM_CHECK,
			ENUM_COMMISSIONING,
			ENUM_DIVERTING,
			ENUM_DOUBLECHECK,
			ENUM_DOUBLEREGULATING,
			ENUM_DRAWOFFCOCK,
			ENUM_FAUCET,
			ENUM_FLUSHING,
			ENUM_GASCOCK,
			ENUM_GASTAP,
			ENUM_ISOLATING,
			ENUM_MIXING,
			ENUM_PRESSUREREDUCING,
			ENUM_PRESSURERELIEF,
			ENUM_REGULATING,
			ENUM_SAFETYCUTOFF,
			ENUM_STEAMTRAP,
			ENUM_STOPCOCK,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcValveTypeEnum() = default;
		IfcValveTypeEnum( IfcValveTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 3594581223; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcValveTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcValveTypeEnumEnum m_enum;
	};
}
