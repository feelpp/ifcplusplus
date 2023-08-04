/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcRecurrenceTypeEnum.h"

// TYPE IfcRecurrenceTypeEnum = ENUMERATION OF	(BY_DAY_COUNT	,BY_WEEKDAY_COUNT	,DAILY	,MONTHLY_BY_DAY_OF_MONTH	,MONTHLY_BY_POSITION	,WEEKLY	,YEARLY_BY_DAY_OF_MONTH	,YEARLY_BY_POSITION);
void IFC4X3::IfcRecurrenceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCRECURRENCETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BY_DAY_COUNT:	stream << ".BY_DAY_COUNT."; break;
		case ENUM_BY_WEEKDAY_COUNT:	stream << ".BY_WEEKDAY_COUNT."; break;
		case ENUM_DAILY:	stream << ".DAILY."; break;
		case ENUM_MONTHLY_BY_DAY_OF_MONTH:	stream << ".MONTHLY_BY_DAY_OF_MONTH."; break;
		case ENUM_MONTHLY_BY_POSITION:	stream << ".MONTHLY_BY_POSITION."; break;
		case ENUM_WEEKLY:	stream << ".WEEKLY."; break;
		case ENUM_YEARLY_BY_DAY_OF_MONTH:	stream << ".YEARLY_BY_DAY_OF_MONTH."; break;
		case ENUM_YEARLY_BY_POSITION:	stream << ".YEARLY_BY_POSITION."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcRecurrenceTypeEnum> IFC4X3::IfcRecurrenceTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcRecurrenceTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcRecurrenceTypeEnum>(); }
	shared_ptr<IfcRecurrenceTypeEnum> type_object( new IfcRecurrenceTypeEnum() );
	if( std_iequal( arg, ".BY_DAY_COUNT." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_BY_DAY_COUNT;
	}
	else if( std_iequal( arg, ".BY_WEEKDAY_COUNT." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_BY_WEEKDAY_COUNT;
	}
	else if( std_iequal( arg, ".DAILY." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_DAILY;
	}
	else if( std_iequal( arg, ".MONTHLY_BY_DAY_OF_MONTH." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_MONTHLY_BY_DAY_OF_MONTH;
	}
	else if( std_iequal( arg, ".MONTHLY_BY_POSITION." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_MONTHLY_BY_POSITION;
	}
	else if( std_iequal( arg, ".WEEKLY." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_WEEKLY;
	}
	else if( std_iequal( arg, ".YEARLY_BY_DAY_OF_MONTH." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_YEARLY_BY_DAY_OF_MONTH;
	}
	else if( std_iequal( arg, ".YEARLY_BY_POSITION." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_YEARLY_BY_POSITION;
	}
	return type_object;
}
