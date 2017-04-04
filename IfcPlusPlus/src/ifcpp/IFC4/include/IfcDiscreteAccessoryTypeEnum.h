/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcDiscreteAccessoryTypeEnum = ENUMERATION OF	(ANCHORPLATE	,BRACKET	,SHOE	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcDiscreteAccessoryTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcDiscreteAccessoryTypeEnumEnum
	{
		ENUM_ANCHORPLATE,
		ENUM_BRACKET,
		ENUM_SHOE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcDiscreteAccessoryTypeEnum();
	IfcDiscreteAccessoryTypeEnum( IfcDiscreteAccessoryTypeEnumEnum e ) { m_enum = e; }
	~IfcDiscreteAccessoryTypeEnum();
	virtual const char* className() const { return "IfcDiscreteAccessoryTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcDiscreteAccessoryTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcDiscreteAccessoryTypeEnumEnum m_enum;
};

