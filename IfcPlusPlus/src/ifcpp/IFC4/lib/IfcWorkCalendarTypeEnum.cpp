/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcWorkCalendarTypeEnum.h"

// TYPE IfcWorkCalendarTypeEnum = ENUMERATION OF	(FIRSTSHIFT	,SECONDSHIFT	,THIRDSHIFT	,USERDEFINED	,NOTDEFINED);
IfcWorkCalendarTypeEnum::IfcWorkCalendarTypeEnum() {}
IfcWorkCalendarTypeEnum::~IfcWorkCalendarTypeEnum() {}
shared_ptr<IfcPPObject> IfcWorkCalendarTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcWorkCalendarTypeEnum> copy_self( new IfcWorkCalendarTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcWorkCalendarTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCWORKCALENDARTYPEENUM("; }
	if( m_enum == ENUM_FIRSTSHIFT )
	{
		stream << ".FIRSTSHIFT.";
	}
	else if( m_enum == ENUM_SECONDSHIFT )
	{
		stream << ".SECONDSHIFT.";
	}
	else if( m_enum == ENUM_THIRDSHIFT )
	{
		stream << ".THIRDSHIFT.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcWorkCalendarTypeEnum> IfcWorkCalendarTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcWorkCalendarTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcWorkCalendarTypeEnum>(); }
	shared_ptr<IfcWorkCalendarTypeEnum> type_object( new IfcWorkCalendarTypeEnum() );
	if( boost::iequals( arg, L".FIRSTSHIFT." ) )
	{
		type_object->m_enum = IfcWorkCalendarTypeEnum::ENUM_FIRSTSHIFT;
	}
	else if( boost::iequals( arg, L".SECONDSHIFT." ) )
	{
		type_object->m_enum = IfcWorkCalendarTypeEnum::ENUM_SECONDSHIFT;
	}
	else if( boost::iequals( arg, L".THIRDSHIFT." ) )
	{
		type_object->m_enum = IfcWorkCalendarTypeEnum::ENUM_THIRDSHIFT;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcWorkCalendarTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcWorkCalendarTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
