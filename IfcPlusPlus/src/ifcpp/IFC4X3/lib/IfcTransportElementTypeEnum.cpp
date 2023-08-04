/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcTransportElementTypeEnum.h"

// TYPE IfcTransportElementTypeEnum = ENUMERATION OF	(CRANEWAY	,ELEVATOR	,ESCALATOR	,HAULINGGEAR	,LIFTINGGEAR	,MOVINGWALKWAY	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcTransportElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCTRANSPORTELEMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CRANEWAY:	stream << ".CRANEWAY."; break;
		case ENUM_ELEVATOR:	stream << ".ELEVATOR."; break;
		case ENUM_ESCALATOR:	stream << ".ESCALATOR."; break;
		case ENUM_HAULINGGEAR:	stream << ".HAULINGGEAR."; break;
		case ENUM_LIFTINGGEAR:	stream << ".LIFTINGGEAR."; break;
		case ENUM_MOVINGWALKWAY:	stream << ".MOVINGWALKWAY."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcTransportElementTypeEnum> IFC4X3::IfcTransportElementTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcTransportElementTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcTransportElementTypeEnum>(); }
	shared_ptr<IfcTransportElementTypeEnum> type_object( new IfcTransportElementTypeEnum() );
	if( std_iequal( arg, ".CRANEWAY." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_CRANEWAY;
	}
	else if( std_iequal( arg, ".ELEVATOR." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_ELEVATOR;
	}
	else if( std_iequal( arg, ".ESCALATOR." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_ESCALATOR;
	}
	else if( std_iequal( arg, ".HAULINGGEAR." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_HAULINGGEAR;
	}
	else if( std_iequal( arg, ".LIFTINGGEAR." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_LIFTINGGEAR;
	}
	else if( std_iequal( arg, ".MOVINGWALKWAY." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_MOVINGWALKWAY;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
