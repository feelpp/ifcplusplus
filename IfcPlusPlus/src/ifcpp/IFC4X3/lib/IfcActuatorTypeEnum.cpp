/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcActuatorTypeEnum.h"

// TYPE IfcActuatorTypeEnum = ENUMERATION OF	(ELECTRICACTUATOR	,HANDOPERATEDACTUATOR	,HYDRAULICACTUATOR	,PNEUMATICACTUATOR	,THERMOSTATICACTUATOR	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcActuatorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCACTUATORTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ELECTRICACTUATOR:	stream << ".ELECTRICACTUATOR."; break;
		case ENUM_HANDOPERATEDACTUATOR:	stream << ".HANDOPERATEDACTUATOR."; break;
		case ENUM_HYDRAULICACTUATOR:	stream << ".HYDRAULICACTUATOR."; break;
		case ENUM_PNEUMATICACTUATOR:	stream << ".PNEUMATICACTUATOR."; break;
		case ENUM_THERMOSTATICACTUATOR:	stream << ".THERMOSTATICACTUATOR."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcActuatorTypeEnum> IFC4X3::IfcActuatorTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcActuatorTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcActuatorTypeEnum>(); }
	shared_ptr<IfcActuatorTypeEnum> type_object( new IfcActuatorTypeEnum() );
	if( std_iequal( arg, ".ELECTRICACTUATOR." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_ELECTRICACTUATOR;
	}
	else if( std_iequal( arg, ".HANDOPERATEDACTUATOR." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_HANDOPERATEDACTUATOR;
	}
	else if( std_iequal( arg, ".HYDRAULICACTUATOR." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_HYDRAULICACTUATOR;
	}
	else if( std_iequal( arg, ".PNEUMATICACTUATOR." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_PNEUMATICACTUATOR;
	}
	else if( std_iequal( arg, ".THERMOSTATICACTUATOR." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_THERMOSTATICACTUATOR;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
