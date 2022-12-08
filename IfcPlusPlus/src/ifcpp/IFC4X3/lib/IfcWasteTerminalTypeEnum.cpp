/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcWasteTerminalTypeEnum.h"

// TYPE IfcWasteTerminalTypeEnum = ENUMERATION OF	(FLOORTRAP	,FLOORWASTE	,GULLYSUMP	,GULLYTRAP	,ROOFDRAIN	,WASTEDISPOSALUNIT	,WASTETRAP	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcWasteTerminalTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCWASTETERMINALTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_FLOORTRAP:	stream << ".FLOORTRAP."; break;
		case ENUM_FLOORWASTE:	stream << ".FLOORWASTE."; break;
		case ENUM_GULLYSUMP:	stream << ".GULLYSUMP."; break;
		case ENUM_GULLYTRAP:	stream << ".GULLYTRAP."; break;
		case ENUM_ROOFDRAIN:	stream << ".ROOFDRAIN."; break;
		case ENUM_WASTEDISPOSALUNIT:	stream << ".WASTEDISPOSALUNIT."; break;
		case ENUM_WASTETRAP:	stream << ".WASTETRAP."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcWasteTerminalTypeEnum> IFC4X3::IfcWasteTerminalTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcWasteTerminalTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcWasteTerminalTypeEnum>(); }
	shared_ptr<IfcWasteTerminalTypeEnum> type_object( new IfcWasteTerminalTypeEnum() );
	if( std_iequal( arg, ".FLOORTRAP." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_FLOORTRAP;
	}
	else if( std_iequal( arg, ".FLOORWASTE." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_FLOORWASTE;
	}
	else if( std_iequal( arg, ".GULLYSUMP." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_GULLYSUMP;
	}
	else if( std_iequal( arg, ".GULLYTRAP." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_GULLYTRAP;
	}
	else if( std_iequal( arg, ".ROOFDRAIN." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_ROOFDRAIN;
	}
	else if( std_iequal( arg, ".WASTEDISPOSALUNIT." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_WASTEDISPOSALUNIT;
	}
	else if( std_iequal( arg, ".WASTETRAP." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_WASTETRAP;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
