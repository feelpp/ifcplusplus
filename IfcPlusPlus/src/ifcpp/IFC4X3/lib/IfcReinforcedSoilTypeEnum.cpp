/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcReinforcedSoilTypeEnum.h"

// TYPE IfcReinforcedSoilTypeEnum = ENUMERATION OF	(DYNAMICALLYCOMPACTED	,GROUTED	,REPLACED	,ROLLERCOMPACTED	,SURCHARGEPRELOADED	,VERTICALLYDRAINED	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcReinforcedSoilTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCREINFORCEDSOILTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_DYNAMICALLYCOMPACTED:	stream << ".DYNAMICALLYCOMPACTED."; break;
		case ENUM_GROUTED:	stream << ".GROUTED."; break;
		case ENUM_REPLACED:	stream << ".REPLACED."; break;
		case ENUM_ROLLERCOMPACTED:	stream << ".ROLLERCOMPACTED."; break;
		case ENUM_SURCHARGEPRELOADED:	stream << ".SURCHARGEPRELOADED."; break;
		case ENUM_VERTICALLYDRAINED:	stream << ".VERTICALLYDRAINED."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcReinforcedSoilTypeEnum> IFC4X3::IfcReinforcedSoilTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcReinforcedSoilTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcReinforcedSoilTypeEnum>(); }
	shared_ptr<IfcReinforcedSoilTypeEnum> type_object( new IfcReinforcedSoilTypeEnum() );
	if( std_iequal( arg, ".DYNAMICALLYCOMPACTED." ) )
	{
		type_object->m_enum = IfcReinforcedSoilTypeEnum::ENUM_DYNAMICALLYCOMPACTED;
	}
	else if( std_iequal( arg, ".GROUTED." ) )
	{
		type_object->m_enum = IfcReinforcedSoilTypeEnum::ENUM_GROUTED;
	}
	else if( std_iequal( arg, ".REPLACED." ) )
	{
		type_object->m_enum = IfcReinforcedSoilTypeEnum::ENUM_REPLACED;
	}
	else if( std_iequal( arg, ".ROLLERCOMPACTED." ) )
	{
		type_object->m_enum = IfcReinforcedSoilTypeEnum::ENUM_ROLLERCOMPACTED;
	}
	else if( std_iequal( arg, ".SURCHARGEPRELOADED." ) )
	{
		type_object->m_enum = IfcReinforcedSoilTypeEnum::ENUM_SURCHARGEPRELOADED;
	}
	else if( std_iequal( arg, ".VERTICALLYDRAINED." ) )
	{
		type_object->m_enum = IfcReinforcedSoilTypeEnum::ENUM_VERTICALLYDRAINED;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcReinforcedSoilTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcReinforcedSoilTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
