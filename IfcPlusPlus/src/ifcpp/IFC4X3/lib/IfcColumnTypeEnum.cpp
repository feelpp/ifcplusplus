/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcColumnTypeEnum.h"

// TYPE IfcColumnTypeEnum = ENUMERATION OF	(COLUMN	,PIERSTEM	,PIERSTEM_SEGMENT	,PILASTER	,STANDCOLUMN	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcColumnTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCCOLUMNTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_COLUMN:	stream << ".COLUMN."; break;
		case ENUM_PIERSTEM:	stream << ".PIERSTEM."; break;
		case ENUM_PIERSTEM_SEGMENT:	stream << ".PIERSTEM_SEGMENT."; break;
		case ENUM_PILASTER:	stream << ".PILASTER."; break;
		case ENUM_STANDCOLUMN:	stream << ".STANDCOLUMN."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcColumnTypeEnum> IFC4X3::IfcColumnTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcColumnTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcColumnTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcColumnTypeEnum>(); }
	shared_ptr<IfcColumnTypeEnum> type_object( new IfcColumnTypeEnum() );
	if( std_iequal( arg, ".COLUMN." ) )
	{
		type_object->m_enum = IfcColumnTypeEnum::ENUM_COLUMN;
	}
	else if( std_iequal( arg, ".PIERSTEM." ) )
	{
		type_object->m_enum = IfcColumnTypeEnum::ENUM_PIERSTEM;
	}
	else if( std_iequal( arg, ".PIERSTEM_SEGMENT." ) )
	{
		type_object->m_enum = IfcColumnTypeEnum::ENUM_PIERSTEM_SEGMENT;
	}
	else if( std_iequal( arg, ".PILASTER." ) )
	{
		type_object->m_enum = IfcColumnTypeEnum::ENUM_PILASTER;
	}
	else if( std_iequal( arg, ".STANDCOLUMN." ) )
	{
		type_object->m_enum = IfcColumnTypeEnum::ENUM_STANDCOLUMN;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcColumnTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcColumnTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
