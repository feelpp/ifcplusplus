/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcStairTypeEnum.h"

// TYPE IfcStairTypeEnum = ENUMERATION OF	(CURVED_RUN_STAIR	,DOUBLE_RETURN_STAIR	,HALF_TURN_STAIR	,HALF_WINDING_STAIR	,LADDER	,QUARTER_TURN_STAIR	,QUARTER_WINDING_STAIR	,SPIRAL_STAIR	,STRAIGHT_RUN_STAIR	,THREE_QUARTER_TURN_STAIR	,THREE_QUARTER_WINDING_STAIR	,TWO_CURVED_RUN_STAIR	,TWO_QUARTER_TURN_STAIR	,TWO_QUARTER_WINDING_STAIR	,TWO_STRAIGHT_RUN_STAIR	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcStairTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCSTAIRTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CURVED_RUN_STAIR:	stream << ".CURVED_RUN_STAIR."; break;
		case ENUM_DOUBLE_RETURN_STAIR:	stream << ".DOUBLE_RETURN_STAIR."; break;
		case ENUM_HALF_TURN_STAIR:	stream << ".HALF_TURN_STAIR."; break;
		case ENUM_HALF_WINDING_STAIR:	stream << ".HALF_WINDING_STAIR."; break;
		case ENUM_LADDER:	stream << ".LADDER."; break;
		case ENUM_QUARTER_TURN_STAIR:	stream << ".QUARTER_TURN_STAIR."; break;
		case ENUM_QUARTER_WINDING_STAIR:	stream << ".QUARTER_WINDING_STAIR."; break;
		case ENUM_SPIRAL_STAIR:	stream << ".SPIRAL_STAIR."; break;
		case ENUM_STRAIGHT_RUN_STAIR:	stream << ".STRAIGHT_RUN_STAIR."; break;
		case ENUM_THREE_QUARTER_TURN_STAIR:	stream << ".THREE_QUARTER_TURN_STAIR."; break;
		case ENUM_THREE_QUARTER_WINDING_STAIR:	stream << ".THREE_QUARTER_WINDING_STAIR."; break;
		case ENUM_TWO_CURVED_RUN_STAIR:	stream << ".TWO_CURVED_RUN_STAIR."; break;
		case ENUM_TWO_QUARTER_TURN_STAIR:	stream << ".TWO_QUARTER_TURN_STAIR."; break;
		case ENUM_TWO_QUARTER_WINDING_STAIR:	stream << ".TWO_QUARTER_WINDING_STAIR."; break;
		case ENUM_TWO_STRAIGHT_RUN_STAIR:	stream << ".TWO_STRAIGHT_RUN_STAIR."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcStairTypeEnum> IFC4X3::IfcStairTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcStairTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcStairTypeEnum>(); }
	shared_ptr<IfcStairTypeEnum> type_object( new IfcStairTypeEnum() );
	if( std_iequal( arg, ".CURVED_RUN_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_CURVED_RUN_STAIR;
	}
	else if( std_iequal( arg, ".DOUBLE_RETURN_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_DOUBLE_RETURN_STAIR;
	}
	else if( std_iequal( arg, ".HALF_TURN_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_HALF_TURN_STAIR;
	}
	else if( std_iequal( arg, ".HALF_WINDING_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_HALF_WINDING_STAIR;
	}
	else if( std_iequal( arg, ".LADDER." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_LADDER;
	}
	else if( std_iequal( arg, ".QUARTER_TURN_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_QUARTER_TURN_STAIR;
	}
	else if( std_iequal( arg, ".QUARTER_WINDING_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_QUARTER_WINDING_STAIR;
	}
	else if( std_iequal( arg, ".SPIRAL_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_SPIRAL_STAIR;
	}
	else if( std_iequal( arg, ".STRAIGHT_RUN_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_STRAIGHT_RUN_STAIR;
	}
	else if( std_iequal( arg, ".THREE_QUARTER_TURN_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_THREE_QUARTER_TURN_STAIR;
	}
	else if( std_iequal( arg, ".THREE_QUARTER_WINDING_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_THREE_QUARTER_WINDING_STAIR;
	}
	else if( std_iequal( arg, ".TWO_CURVED_RUN_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_TWO_CURVED_RUN_STAIR;
	}
	else if( std_iequal( arg, ".TWO_QUARTER_TURN_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_TWO_QUARTER_TURN_STAIR;
	}
	else if( std_iequal( arg, ".TWO_QUARTER_WINDING_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_TWO_QUARTER_WINDING_STAIR;
	}
	else if( std_iequal( arg, ".TWO_STRAIGHT_RUN_STAIR." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_TWO_STRAIGHT_RUN_STAIR;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcStairTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
