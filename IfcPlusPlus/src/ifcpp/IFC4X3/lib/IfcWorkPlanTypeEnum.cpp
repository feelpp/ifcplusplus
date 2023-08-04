/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcWorkPlanTypeEnum.h"

// TYPE IfcWorkPlanTypeEnum = ENUMERATION OF	(ACTUAL	,BASELINE	,PLANNED	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcWorkPlanTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCWORKPLANTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ACTUAL:	stream << ".ACTUAL."; break;
		case ENUM_BASELINE:	stream << ".BASELINE."; break;
		case ENUM_PLANNED:	stream << ".PLANNED."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcWorkPlanTypeEnum> IFC4X3::IfcWorkPlanTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcWorkPlanTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcWorkPlanTypeEnum>(); }
	shared_ptr<IfcWorkPlanTypeEnum> type_object( new IfcWorkPlanTypeEnum() );
	if( std_iequal( arg, ".ACTUAL." ) )
	{
		type_object->m_enum = IfcWorkPlanTypeEnum::ENUM_ACTUAL;
	}
	else if( std_iequal( arg, ".BASELINE." ) )
	{
		type_object->m_enum = IfcWorkPlanTypeEnum::ENUM_BASELINE;
	}
	else if( std_iequal( arg, ".PLANNED." ) )
	{
		type_object->m_enum = IfcWorkPlanTypeEnum::ENUM_PLANNED;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcWorkPlanTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcWorkPlanTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
