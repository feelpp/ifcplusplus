/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDoorTypeOperationEnum.h"

// TYPE IfcDoorTypeOperationEnum = ENUMERATION OF	(DOUBLE_DOOR_DOUBLE_SWING	,DOUBLE_DOOR_FOLDING	,DOUBLE_DOOR_LIFTING_VERTICAL	,DOUBLE_DOOR_SINGLE_SWING	,DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT	,DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT	,DOUBLE_DOOR_SLIDING	,DOUBLE_SWING_LEFT	,DOUBLE_SWING_RIGHT	,FOLDING_TO_LEFT	,FOLDING_TO_RIGHT	,LIFTING_HORIZONTAL	,LIFTING_VERTICAL_LEFT	,LIFTING_VERTICAL_RIGHT	,REVOLVING	,REVOLVING_VERTICAL	,ROLLINGUP	,SINGLE_SWING_LEFT	,SINGLE_SWING_RIGHT	,SLIDING_TO_LEFT	,SLIDING_TO_RIGHT	,SWING_FIXED_LEFT	,SWING_FIXED_RIGHT	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcDoorTypeOperationEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCDOORTYPEOPERATIONENUM("; }
	switch( m_enum )
	{
		case ENUM_DOUBLE_DOOR_DOUBLE_SWING:	stream << ".DOUBLE_DOOR_DOUBLE_SWING."; break;
		case ENUM_DOUBLE_DOOR_FOLDING:	stream << ".DOUBLE_DOOR_FOLDING."; break;
		case ENUM_DOUBLE_DOOR_LIFTING_VERTICAL:	stream << ".DOUBLE_DOOR_LIFTING_VERTICAL."; break;
		case ENUM_DOUBLE_DOOR_SINGLE_SWING:	stream << ".DOUBLE_DOOR_SINGLE_SWING."; break;
		case ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT:	stream << ".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT."; break;
		case ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT:	stream << ".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT."; break;
		case ENUM_DOUBLE_DOOR_SLIDING:	stream << ".DOUBLE_DOOR_SLIDING."; break;
		case ENUM_DOUBLE_SWING_LEFT:	stream << ".DOUBLE_SWING_LEFT."; break;
		case ENUM_DOUBLE_SWING_RIGHT:	stream << ".DOUBLE_SWING_RIGHT."; break;
		case ENUM_FOLDING_TO_LEFT:	stream << ".FOLDING_TO_LEFT."; break;
		case ENUM_FOLDING_TO_RIGHT:	stream << ".FOLDING_TO_RIGHT."; break;
		case ENUM_LIFTING_HORIZONTAL:	stream << ".LIFTING_HORIZONTAL."; break;
		case ENUM_LIFTING_VERTICAL_LEFT:	stream << ".LIFTING_VERTICAL_LEFT."; break;
		case ENUM_LIFTING_VERTICAL_RIGHT:	stream << ".LIFTING_VERTICAL_RIGHT."; break;
		case ENUM_REVOLVING:	stream << ".REVOLVING."; break;
		case ENUM_REVOLVING_VERTICAL:	stream << ".REVOLVING_VERTICAL."; break;
		case ENUM_ROLLINGUP:	stream << ".ROLLINGUP."; break;
		case ENUM_SINGLE_SWING_LEFT:	stream << ".SINGLE_SWING_LEFT."; break;
		case ENUM_SINGLE_SWING_RIGHT:	stream << ".SINGLE_SWING_RIGHT."; break;
		case ENUM_SLIDING_TO_LEFT:	stream << ".SLIDING_TO_LEFT."; break;
		case ENUM_SLIDING_TO_RIGHT:	stream << ".SLIDING_TO_RIGHT."; break;
		case ENUM_SWING_FIXED_LEFT:	stream << ".SWING_FIXED_LEFT."; break;
		case ENUM_SWING_FIXED_RIGHT:	stream << ".SWING_FIXED_RIGHT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcDoorTypeOperationEnum> IFC4X3::IfcDoorTypeOperationEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcDoorTypeOperationEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcDoorTypeOperationEnum>(); }
	shared_ptr<IfcDoorTypeOperationEnum> type_object( new IfcDoorTypeOperationEnum() );
	if( std_iequal( arg, ".DOUBLE_DOOR_DOUBLE_SWING." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_DOUBLE_DOOR_DOUBLE_SWING;
	}
	else if( std_iequal( arg, ".DOUBLE_DOOR_FOLDING." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_DOUBLE_DOOR_FOLDING;
	}
	else if( std_iequal( arg, ".DOUBLE_DOOR_LIFTING_VERTICAL." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_DOUBLE_DOOR_LIFTING_VERTICAL;
	}
	else if( std_iequal( arg, ".DOUBLE_DOOR_SINGLE_SWING." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_DOUBLE_DOOR_SINGLE_SWING;
	}
	else if( std_iequal( arg, ".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT;
	}
	else if( std_iequal( arg, ".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT;
	}
	else if( std_iequal( arg, ".DOUBLE_DOOR_SLIDING." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_DOUBLE_DOOR_SLIDING;
	}
	else if( std_iequal( arg, ".DOUBLE_SWING_LEFT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_DOUBLE_SWING_LEFT;
	}
	else if( std_iequal( arg, ".DOUBLE_SWING_RIGHT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_DOUBLE_SWING_RIGHT;
	}
	else if( std_iequal( arg, ".FOLDING_TO_LEFT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_FOLDING_TO_LEFT;
	}
	else if( std_iequal( arg, ".FOLDING_TO_RIGHT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_FOLDING_TO_RIGHT;
	}
	else if( std_iequal( arg, ".LIFTING_HORIZONTAL." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_LIFTING_HORIZONTAL;
	}
	else if( std_iequal( arg, ".LIFTING_VERTICAL_LEFT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_LIFTING_VERTICAL_LEFT;
	}
	else if( std_iequal( arg, ".LIFTING_VERTICAL_RIGHT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_LIFTING_VERTICAL_RIGHT;
	}
	else if( std_iequal( arg, ".REVOLVING." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_REVOLVING;
	}
	else if( std_iequal( arg, ".REVOLVING_VERTICAL." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_REVOLVING_VERTICAL;
	}
	else if( std_iequal( arg, ".ROLLINGUP." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_ROLLINGUP;
	}
	else if( std_iequal( arg, ".SINGLE_SWING_LEFT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_SINGLE_SWING_LEFT;
	}
	else if( std_iequal( arg, ".SINGLE_SWING_RIGHT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_SINGLE_SWING_RIGHT;
	}
	else if( std_iequal( arg, ".SLIDING_TO_LEFT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_SLIDING_TO_LEFT;
	}
	else if( std_iequal( arg, ".SLIDING_TO_RIGHT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_SLIDING_TO_RIGHT;
	}
	else if( std_iequal( arg, ".SWING_FIXED_LEFT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_SWING_FIXED_LEFT;
	}
	else if( std_iequal( arg, ".SWING_FIXED_RIGHT." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_SWING_FIXED_RIGHT;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDoorTypeOperationEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
