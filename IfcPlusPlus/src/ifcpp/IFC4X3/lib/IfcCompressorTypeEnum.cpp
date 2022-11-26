/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcCompressorTypeEnum.h"

// TYPE IfcCompressorTypeEnum = ENUMERATION OF	(BOOSTER	,DYNAMIC	,HERMETIC	,OPENTYPE	,RECIPROCATING	,ROLLINGPISTON	,ROTARY	,ROTARYVANE	,SCROLL	,SEMIHERMETIC	,SINGLESCREW	,SINGLESTAGE	,TROCHOIDAL	,TWINSCREW	,WELDEDSHELLHERMETIC	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IFC4X3::IfcCompressorTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCompressorTypeEnum> copy_self( new IfcCompressorTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IFC4X3::IfcCompressorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCOMPRESSORTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BOOSTER:	stream << ".BOOSTER."; break;
		case ENUM_DYNAMIC:	stream << ".DYNAMIC."; break;
		case ENUM_HERMETIC:	stream << ".HERMETIC."; break;
		case ENUM_OPENTYPE:	stream << ".OPENTYPE."; break;
		case ENUM_RECIPROCATING:	stream << ".RECIPROCATING."; break;
		case ENUM_ROLLINGPISTON:	stream << ".ROLLINGPISTON."; break;
		case ENUM_ROTARY:	stream << ".ROTARY."; break;
		case ENUM_ROTARYVANE:	stream << ".ROTARYVANE."; break;
		case ENUM_SCROLL:	stream << ".SCROLL."; break;
		case ENUM_SEMIHERMETIC:	stream << ".SEMIHERMETIC."; break;
		case ENUM_SINGLESCREW:	stream << ".SINGLESCREW."; break;
		case ENUM_SINGLESTAGE:	stream << ".SINGLESTAGE."; break;
		case ENUM_TROCHOIDAL:	stream << ".TROCHOIDAL."; break;
		case ENUM_TWINSCREW:	stream << ".TWINSCREW."; break;
		case ENUM_WELDEDSHELLHERMETIC:	stream << ".WELDEDSHELLHERMETIC."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcCompressorTypeEnum> IFC4X3::IfcCompressorTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcCompressorTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcCompressorTypeEnum>(); }
	shared_ptr<IfcCompressorTypeEnum> type_object( new IfcCompressorTypeEnum() );
	if( std_iequal( arg, ".BOOSTER." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_BOOSTER;
	}
	else if( std_iequal( arg, ".DYNAMIC." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_DYNAMIC;
	}
	else if( std_iequal( arg, ".HERMETIC." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_HERMETIC;
	}
	else if( std_iequal( arg, ".OPENTYPE." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_OPENTYPE;
	}
	else if( std_iequal( arg, ".RECIPROCATING." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_RECIPROCATING;
	}
	else if( std_iequal( arg, ".ROLLINGPISTON." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_ROLLINGPISTON;
	}
	else if( std_iequal( arg, ".ROTARY." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_ROTARY;
	}
	else if( std_iequal( arg, ".ROTARYVANE." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_ROTARYVANE;
	}
	else if( std_iequal( arg, ".SCROLL." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_SCROLL;
	}
	else if( std_iequal( arg, ".SEMIHERMETIC." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_SEMIHERMETIC;
	}
	else if( std_iequal( arg, ".SINGLESCREW." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_SINGLESCREW;
	}
	else if( std_iequal( arg, ".SINGLESTAGE." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_SINGLESTAGE;
	}
	else if( std_iequal( arg, ".TROCHOIDAL." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_TROCHOIDAL;
	}
	else if( std_iequal( arg, ".TWINSCREW." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_TWINSCREW;
	}
	else if( std_iequal( arg, ".WELDEDSHELLHERMETIC." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_WELDEDSHELLHERMETIC;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCompressorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
