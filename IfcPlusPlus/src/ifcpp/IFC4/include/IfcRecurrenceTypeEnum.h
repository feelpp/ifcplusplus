/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcRecurrenceTypeEnum = ENUMERATION OF	(DAILY	,WEEKLY	,MONTHLY_BY_DAY_OF_MONTH	,MONTHLY_BY_POSITION	,BY_DAY_COUNT	,BY_WEEKDAY_COUNT	,YEARLY_BY_DAY_OF_MONTH	,YEARLY_BY_POSITION);
class IFCPP_EXPORT IfcRecurrenceTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcRecurrenceTypeEnumEnum
	{
		ENUM_DAILY,
		ENUM_WEEKLY,
		ENUM_MONTHLY_BY_DAY_OF_MONTH,
		ENUM_MONTHLY_BY_POSITION,
		ENUM_BY_DAY_COUNT,
		ENUM_BY_WEEKDAY_COUNT,
		ENUM_YEARLY_BY_DAY_OF_MONTH,
		ENUM_YEARLY_BY_POSITION
	};

	IfcRecurrenceTypeEnum();
	IfcRecurrenceTypeEnum( IfcRecurrenceTypeEnumEnum e ) { m_enum = e; }
	~IfcRecurrenceTypeEnum();
	virtual const char* className() const { return "IfcRecurrenceTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcRecurrenceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcRecurrenceTypeEnumEnum m_enum;
};

