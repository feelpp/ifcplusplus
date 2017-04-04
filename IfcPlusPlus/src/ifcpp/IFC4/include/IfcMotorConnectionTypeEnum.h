/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcMotorConnectionTypeEnum = ENUMERATION OF	(BELTDRIVE	,COUPLING	,DIRECTDRIVE	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcMotorConnectionTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcMotorConnectionTypeEnumEnum
	{
		ENUM_BELTDRIVE,
		ENUM_COUPLING,
		ENUM_DIRECTDRIVE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcMotorConnectionTypeEnum();
	IfcMotorConnectionTypeEnum( IfcMotorConnectionTypeEnumEnum e ) { m_enum = e; }
	~IfcMotorConnectionTypeEnum();
	virtual const char* className() const { return "IfcMotorConnectionTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcMotorConnectionTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcMotorConnectionTypeEnumEnum m_enum;
};

