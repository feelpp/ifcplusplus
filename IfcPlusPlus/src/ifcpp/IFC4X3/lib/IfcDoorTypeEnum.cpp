/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDoorTypeEnum.h"

// TYPE IfcDoorTypeEnum = ENUMERATION OF	(BOOM_BARRIER	,DOOR	,GATE	,TRAPDOOR	,TURNSTILE	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcDoorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCDOORTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BOOM_BARRIER:	stream << ".BOOM_BARRIER."; break;
		case ENUM_DOOR:	stream << ".DOOR."; break;
		case ENUM_GATE:	stream << ".GATE."; break;
		case ENUM_TRAPDOOR:	stream << ".TRAPDOOR."; break;
		case ENUM_TURNSTILE:	stream << ".TURNSTILE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcDoorTypeEnum> IFC4X3::IfcDoorTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcDoorTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcDoorTypeEnum>(); }
	shared_ptr<IfcDoorTypeEnum> type_object( new IfcDoorTypeEnum() );
	if( std_iequal( arg, ".BOOM_BARRIER." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_BOOM_BARRIER;
	}
	else if( std_iequal( arg, ".DOOR." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_DOOR;
	}
	else if( std_iequal( arg, ".GATE." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_GATE;
	}
	else if( std_iequal( arg, ".TRAPDOOR." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_TRAPDOOR;
	}
	else if( std_iequal( arg, ".TURNSTILE." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_TURNSTILE;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
