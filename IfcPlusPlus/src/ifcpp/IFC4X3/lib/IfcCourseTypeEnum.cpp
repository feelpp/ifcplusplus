/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcCourseTypeEnum.h"

// TYPE IfcCourseTypeEnum = ENUMERATION OF	(ARMOUR	,BALLASTBED	,CORE	,FILTER	,PAVEMENT	,PROTECTION	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcCourseTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCOURSETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ARMOUR:	stream << ".ARMOUR."; break;
		case ENUM_BALLASTBED:	stream << ".BALLASTBED."; break;
		case ENUM_CORE:	stream << ".CORE."; break;
		case ENUM_FILTER:	stream << ".FILTER."; break;
		case ENUM_PAVEMENT:	stream << ".PAVEMENT."; break;
		case ENUM_PROTECTION:	stream << ".PROTECTION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcCourseTypeEnum> IFC4X3::IfcCourseTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcCourseTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcCourseTypeEnum>(); }
	shared_ptr<IfcCourseTypeEnum> type_object( new IfcCourseTypeEnum() );
	if( std_iequal( arg, ".ARMOUR." ) )
	{
		type_object->m_enum = IfcCourseTypeEnum::ENUM_ARMOUR;
	}
	else if( std_iequal( arg, ".BALLASTBED." ) )
	{
		type_object->m_enum = IfcCourseTypeEnum::ENUM_BALLASTBED;
	}
	else if( std_iequal( arg, ".CORE." ) )
	{
		type_object->m_enum = IfcCourseTypeEnum::ENUM_CORE;
	}
	else if( std_iequal( arg, ".FILTER." ) )
	{
		type_object->m_enum = IfcCourseTypeEnum::ENUM_FILTER;
	}
	else if( std_iequal( arg, ".PAVEMENT." ) )
	{
		type_object->m_enum = IfcCourseTypeEnum::ENUM_PAVEMENT;
	}
	else if( std_iequal( arg, ".PROTECTION." ) )
	{
		type_object->m_enum = IfcCourseTypeEnum::ENUM_PROTECTION;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCourseTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCourseTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
