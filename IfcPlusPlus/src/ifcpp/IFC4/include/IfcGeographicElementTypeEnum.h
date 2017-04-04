/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcGeographicElementTypeEnum = ENUMERATION OF	(TERRAIN	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcGeographicElementTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcGeographicElementTypeEnumEnum
	{
		ENUM_TERRAIN,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcGeographicElementTypeEnum();
	IfcGeographicElementTypeEnum( IfcGeographicElementTypeEnumEnum e ) { m_enum = e; }
	~IfcGeographicElementTypeEnum();
	virtual const char* className() const { return "IfcGeographicElementTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcGeographicElementTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcGeographicElementTypeEnumEnum m_enum;
};

