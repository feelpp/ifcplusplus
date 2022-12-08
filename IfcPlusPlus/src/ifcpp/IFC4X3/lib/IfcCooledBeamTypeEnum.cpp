/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcCooledBeamTypeEnum.h"

// TYPE IfcCooledBeamTypeEnum = ENUMERATION OF	(ACTIVE	,PASSIVE	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcCooledBeamTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCOOLEDBEAMTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ACTIVE:	stream << ".ACTIVE."; break;
		case ENUM_PASSIVE:	stream << ".PASSIVE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcCooledBeamTypeEnum> IFC4X3::IfcCooledBeamTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcCooledBeamTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcCooledBeamTypeEnum>(); }
	shared_ptr<IfcCooledBeamTypeEnum> type_object( new IfcCooledBeamTypeEnum() );
	if( std_iequal( arg, ".ACTIVE." ) )
	{
		type_object->m_enum = IfcCooledBeamTypeEnum::ENUM_ACTIVE;
	}
	else if( std_iequal( arg, ".PASSIVE." ) )
	{
		type_object->m_enum = IfcCooledBeamTypeEnum::ENUM_PASSIVE;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCooledBeamTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCooledBeamTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
