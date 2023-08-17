/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcElectricMotorTypeEnum.h"

// TYPE IfcElectricMotorTypeEnum = ENUMERATION OF	(DC	,INDUCTION	,POLYPHASE	,RELUCTANCESYNCHRONOUS	,SYNCHRONOUS	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcElectricMotorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCELECTRICMOTORTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_DC:	stream << ".DC."; break;
		case ENUM_INDUCTION:	stream << ".INDUCTION."; break;
		case ENUM_POLYPHASE:	stream << ".POLYPHASE."; break;
		case ENUM_RELUCTANCESYNCHRONOUS:	stream << ".RELUCTANCESYNCHRONOUS."; break;
		case ENUM_SYNCHRONOUS:	stream << ".SYNCHRONOUS."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcElectricMotorTypeEnum> IFC4X3::IfcElectricMotorTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcElectricMotorTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcElectricMotorTypeEnum>(); }
	shared_ptr<IfcElectricMotorTypeEnum> type_object( new IfcElectricMotorTypeEnum() );
	if( std_iequal( arg, ".DC." ) )
	{
		type_object->m_enum = IfcElectricMotorTypeEnum::ENUM_DC;
	}
	else if( std_iequal( arg, ".INDUCTION." ) )
	{
		type_object->m_enum = IfcElectricMotorTypeEnum::ENUM_INDUCTION;
	}
	else if( std_iequal( arg, ".POLYPHASE." ) )
	{
		type_object->m_enum = IfcElectricMotorTypeEnum::ENUM_POLYPHASE;
	}
	else if( std_iequal( arg, ".RELUCTANCESYNCHRONOUS." ) )
	{
		type_object->m_enum = IfcElectricMotorTypeEnum::ENUM_RELUCTANCESYNCHRONOUS;
	}
	else if( std_iequal( arg, ".SYNCHRONOUS." ) )
	{
		type_object->m_enum = IfcElectricMotorTypeEnum::ENUM_SYNCHRONOUS;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcElectricMotorTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcElectricMotorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
