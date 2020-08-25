/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcMarineFacilityTypeEnum = ENUMERATION OF	(CANAL	,WATERWAYSHIPLIFT	,EMBANKMENT	,LAUNCHRECOVERY	,MARINEDEFENCE	,HYDROLIFT	,SHIPYARD	,SHIPLIFT	,PORT	,QUAY	,FLOATINGDOCK	,NAVIGATIONALCHANNEL	,BREAKWATER	,DRYDOCK	,JETTY	,SHIPLOCK	,BARRIERBEACH	,SLIPWAY	,WATERWAY	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcMarineFacilityTypeEnum : virtual public BuildingObject
{
public:
	enum IfcMarineFacilityTypeEnumEnum
	{
		ENUM_CANAL,
		ENUM_WATERWAYSHIPLIFT,
		ENUM_EMBANKMENT,
		ENUM_LAUNCHRECOVERY,
		ENUM_MARINEDEFENCE,
		ENUM_HYDROLIFT,
		ENUM_SHIPYARD,
		ENUM_SHIPLIFT,
		ENUM_PORT,
		ENUM_QUAY,
		ENUM_FLOATINGDOCK,
		ENUM_NAVIGATIONALCHANNEL,
		ENUM_BREAKWATER,
		ENUM_DRYDOCK,
		ENUM_JETTY,
		ENUM_SHIPLOCK,
		ENUM_BARRIERBEACH,
		ENUM_SLIPWAY,
		ENUM_WATERWAY,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcMarineFacilityTypeEnum() = default;
	IfcMarineFacilityTypeEnum( IfcMarineFacilityTypeEnumEnum e ) { m_enum = e; }
	~IfcMarineFacilityTypeEnum() = default;
	virtual const char* className() const { return "IfcMarineFacilityTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcMarineFacilityTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcMarineFacilityTypeEnumEnum m_enum;
};
