/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcProtectiveDeviceTypeEnum = ENUMERATION OF	(CIRCUITBREAKER	,EARTHLEAKAGECIRCUITBREAKER	,EARTHINGSWITCH	,FUSEDISCONNECTOR	,RESIDUALCURRENTCIRCUITBREAKER	,RESIDUALCURRENTSWITCH	,VARISTOR	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcProtectiveDeviceTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcProtectiveDeviceTypeEnumEnum
	{
		ENUM_CIRCUITBREAKER,
		ENUM_EARTHLEAKAGECIRCUITBREAKER,
		ENUM_EARTHINGSWITCH,
		ENUM_FUSEDISCONNECTOR,
		ENUM_RESIDUALCURRENTCIRCUITBREAKER,
		ENUM_RESIDUALCURRENTSWITCH,
		ENUM_VARISTOR,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcProtectiveDeviceTypeEnum();
	IfcProtectiveDeviceTypeEnum( IfcProtectiveDeviceTypeEnumEnum e ) { m_enum = e; }
	~IfcProtectiveDeviceTypeEnum();
	virtual const char* className() const { return "IfcProtectiveDeviceTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcProtectiveDeviceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcProtectiveDeviceTypeEnumEnum m_enum;
};

