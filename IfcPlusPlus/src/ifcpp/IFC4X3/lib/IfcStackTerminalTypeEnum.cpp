/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcStackTerminalTypeEnum.h"

// TYPE IfcStackTerminalTypeEnum = ENUMERATION OF	(BIRDCAGE	,COWL	,RAINWATERHOPPER	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IFC4X3::IfcStackTerminalTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStackTerminalTypeEnum> copy_self( new IfcStackTerminalTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IFC4X3::IfcStackTerminalTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSTACKTERMINALTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BIRDCAGE:	stream << ".BIRDCAGE."; break;
		case ENUM_COWL:	stream << ".COWL."; break;
		case ENUM_RAINWATERHOPPER:	stream << ".RAINWATERHOPPER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcStackTerminalTypeEnum> IFC4X3::IfcStackTerminalTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcStackTerminalTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcStackTerminalTypeEnum>(); }
	shared_ptr<IfcStackTerminalTypeEnum> type_object( new IfcStackTerminalTypeEnum() );
	if( std_iequal( arg, ".BIRDCAGE." ) )
	{
		type_object->m_enum = IfcStackTerminalTypeEnum::ENUM_BIRDCAGE;
	}
	else if( std_iequal( arg, ".COWL." ) )
	{
		type_object->m_enum = IfcStackTerminalTypeEnum::ENUM_COWL;
	}
	else if( std_iequal( arg, ".RAINWATERHOPPER." ) )
	{
		type_object->m_enum = IfcStackTerminalTypeEnum::ENUM_RAINWATERHOPPER;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcStackTerminalTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcStackTerminalTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
