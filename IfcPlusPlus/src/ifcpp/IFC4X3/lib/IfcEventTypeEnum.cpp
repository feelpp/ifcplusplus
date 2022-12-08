/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcEventTypeEnum.h"

// TYPE IfcEventTypeEnum = ENUMERATION OF	(ENDEVENT	,INTERMEDIATEEVENT	,STARTEVENT	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcEventTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCEVENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ENDEVENT:	stream << ".ENDEVENT."; break;
		case ENUM_INTERMEDIATEEVENT:	stream << ".INTERMEDIATEEVENT."; break;
		case ENUM_STARTEVENT:	stream << ".STARTEVENT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcEventTypeEnum> IFC4X3::IfcEventTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcEventTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcEventTypeEnum>(); }
	shared_ptr<IfcEventTypeEnum> type_object( new IfcEventTypeEnum() );
	if( std_iequal( arg, ".ENDEVENT." ) )
	{
		type_object->m_enum = IfcEventTypeEnum::ENUM_ENDEVENT;
	}
	else if( std_iequal( arg, ".INTERMEDIATEEVENT." ) )
	{
		type_object->m_enum = IfcEventTypeEnum::ENUM_INTERMEDIATEEVENT;
	}
	else if( std_iequal( arg, ".STARTEVENT." ) )
	{
		type_object->m_enum = IfcEventTypeEnum::ENUM_STARTEVENT;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcEventTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcEventTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
