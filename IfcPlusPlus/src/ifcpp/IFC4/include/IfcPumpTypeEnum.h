/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcPumpTypeEnum = ENUMERATION OF	(CIRCULATOR	,ENDSUCTION	,SPLITCASE	,SUBMERSIBLEPUMP	,SUMPPUMP	,VERTICALINLINE	,VERTICALTURBINE	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcPumpTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcPumpTypeEnumEnum
	{
		ENUM_CIRCULATOR,
		ENUM_ENDSUCTION,
		ENUM_SPLITCASE,
		ENUM_SUBMERSIBLEPUMP,
		ENUM_SUMPPUMP,
		ENUM_VERTICALINLINE,
		ENUM_VERTICALTURBINE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcPumpTypeEnum();
	IfcPumpTypeEnum( IfcPumpTypeEnumEnum e ) { m_enum = e; }
	~IfcPumpTypeEnum();
	virtual const char* className() const { return "IfcPumpTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcPumpTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcPumpTypeEnumEnum m_enum;
};

