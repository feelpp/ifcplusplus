/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcTaskDurationEnum.h"

// TYPE IfcTaskDurationEnum = ENUMERATION OF	(ELAPSEDTIME	,WORKTIME	,NOTDEFINED);
void IFC4X3::IfcTaskDurationEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTASKDURATIONENUM("; }
	switch( m_enum )
	{
		case ENUM_ELAPSEDTIME:	stream << ".ELAPSEDTIME."; break;
		case ENUM_WORKTIME:	stream << ".WORKTIME."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcTaskDurationEnum> IFC4X3::IfcTaskDurationEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcTaskDurationEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcTaskDurationEnum>(); }
	shared_ptr<IfcTaskDurationEnum> type_object( new IfcTaskDurationEnum() );
	if( std_iequal( arg, ".ELAPSEDTIME." ) )
	{
		type_object->m_enum = IfcTaskDurationEnum::ENUM_ELAPSEDTIME;
	}
	else if( std_iequal( arg, ".WORKTIME." ) )
	{
		type_object->m_enum = IfcTaskDurationEnum::ENUM_WORKTIME;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcTaskDurationEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
