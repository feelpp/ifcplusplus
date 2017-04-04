/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcProjectionElementTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcProjectionElementTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcProjectionElementTypeEnumEnum
	{
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcProjectionElementTypeEnum();
	IfcProjectionElementTypeEnum( IfcProjectionElementTypeEnumEnum e ) { m_enum = e; }
	~IfcProjectionElementTypeEnum();
	virtual const char* className() const { return "IfcProjectionElementTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcProjectionElementTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcProjectionElementTypeEnumEnum m_enum;
};

