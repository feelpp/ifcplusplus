/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcWindowTypeEnum.h"

// TYPE IfcWindowTypeEnum = ENUMERATION OF	(LIGHTDOME	,SKYLIGHT	,WINDOW	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcWindowTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCWINDOWTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_LIGHTDOME:	stream << ".LIGHTDOME."; break;
		case ENUM_SKYLIGHT:	stream << ".SKYLIGHT."; break;
		case ENUM_WINDOW:	stream << ".WINDOW."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcWindowTypeEnum> IFC4X3::IfcWindowTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcWindowTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcWindowTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcWindowTypeEnum>(); }
	shared_ptr<IfcWindowTypeEnum> type_object( new IfcWindowTypeEnum() );
	if( std_iequal( arg, ".LIGHTDOME." ) )
	{
		type_object->m_enum = IfcWindowTypeEnum::ENUM_LIGHTDOME;
	}
	else if( std_iequal( arg, ".SKYLIGHT." ) )
	{
		type_object->m_enum = IfcWindowTypeEnum::ENUM_SKYLIGHT;
	}
	else if( std_iequal( arg, ".WINDOW." ) )
	{
		type_object->m_enum = IfcWindowTypeEnum::ENUM_WINDOW;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcWindowTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcWindowTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
