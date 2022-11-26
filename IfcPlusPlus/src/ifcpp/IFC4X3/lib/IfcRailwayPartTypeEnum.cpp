/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcRailwayPartTypeEnum.h"

// TYPE IfcRailwayPartTypeEnum = ENUMERATION OF	(DILATATIONSUPERSTRUCTURE	,LINESIDESTRUCTURE	,LINESIDESTRUCTUREPART	,PLAINTRACKSUPERSTRUCTURE	,SUPERSTRUCTURE	,TRACKSTRUCTURE	,TRACKSTRUCTUREPART	,TURNOUTSUPERSTRUCTURE	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IFC4X3::IfcRailwayPartTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRailwayPartTypeEnum> copy_self( new IfcRailwayPartTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IFC4X3::IfcRailwayPartTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCRAILWAYPARTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_DILATATIONSUPERSTRUCTURE:	stream << ".DILATATIONSUPERSTRUCTURE."; break;
		case ENUM_LINESIDESTRUCTURE:	stream << ".LINESIDESTRUCTURE."; break;
		case ENUM_LINESIDESTRUCTUREPART:	stream << ".LINESIDESTRUCTUREPART."; break;
		case ENUM_PLAINTRACKSUPERSTRUCTURE:	stream << ".PLAINTRACKSUPERSTRUCTURE."; break;
		case ENUM_SUPERSTRUCTURE:	stream << ".SUPERSTRUCTURE."; break;
		case ENUM_TRACKSTRUCTURE:	stream << ".TRACKSTRUCTURE."; break;
		case ENUM_TRACKSTRUCTUREPART:	stream << ".TRACKSTRUCTUREPART."; break;
		case ENUM_TURNOUTSUPERSTRUCTURE:	stream << ".TURNOUTSUPERSTRUCTURE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcRailwayPartTypeEnum> IFC4X3::IfcRailwayPartTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcRailwayPartTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcRailwayPartTypeEnum>(); }
	shared_ptr<IfcRailwayPartTypeEnum> type_object( new IfcRailwayPartTypeEnum() );
	if( std_iequal( arg, ".DILATATIONSUPERSTRUCTURE." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_DILATATIONSUPERSTRUCTURE;
	}
	else if( std_iequal( arg, ".LINESIDESTRUCTURE." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_LINESIDESTRUCTURE;
	}
	else if( std_iequal( arg, ".LINESIDESTRUCTUREPART." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_LINESIDESTRUCTUREPART;
	}
	else if( std_iequal( arg, ".PLAINTRACKSUPERSTRUCTURE." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_PLAINTRACKSUPERSTRUCTURE;
	}
	else if( std_iequal( arg, ".SUPERSTRUCTURE." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_SUPERSTRUCTURE;
	}
	else if( std_iequal( arg, ".TRACKSTRUCTURE." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_TRACKSTRUCTURE;
	}
	else if( std_iequal( arg, ".TRACKSTRUCTUREPART." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_TRACKSTRUCTUREPART;
	}
	else if( std_iequal( arg, ".TURNOUTSUPERSTRUCTURE." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_TURNOUTSUPERSTRUCTURE;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
