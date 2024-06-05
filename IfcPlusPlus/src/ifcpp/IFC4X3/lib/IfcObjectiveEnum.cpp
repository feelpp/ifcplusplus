/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcObjectiveEnum.h"

// TYPE IfcObjectiveEnum = ENUMERATION OF	(CODECOMPLIANCE	,CODEWAIVER	,DESIGNINTENT	,EXTERNAL	,HEALTHANDSAFETY	,MERGECONFLICT	,MODELVIEW	,PARAMETER	,REQUIREMENT	,SPECIFICATION	,TRIGGERCONDITION	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcObjectiveEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCOBJECTIVEENUM("; }
	switch( m_enum )
	{
		case ENUM_CODECOMPLIANCE:	stream << ".CODECOMPLIANCE."; break;
		case ENUM_CODEWAIVER:	stream << ".CODEWAIVER."; break;
		case ENUM_DESIGNINTENT:	stream << ".DESIGNINTENT."; break;
		case ENUM_EXTERNAL:	stream << ".EXTERNAL."; break;
		case ENUM_HEALTHANDSAFETY:	stream << ".HEALTHANDSAFETY."; break;
		case ENUM_MERGECONFLICT:	stream << ".MERGECONFLICT."; break;
		case ENUM_MODELVIEW:	stream << ".MODELVIEW."; break;
		case ENUM_PARAMETER:	stream << ".PARAMETER."; break;
		case ENUM_REQUIREMENT:	stream << ".REQUIREMENT."; break;
		case ENUM_SPECIFICATION:	stream << ".SPECIFICATION."; break;
		case ENUM_TRIGGERCONDITION:	stream << ".TRIGGERCONDITION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcObjectiveEnum> IFC4X3::IfcObjectiveEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcObjectiveEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcObjectiveEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcObjectiveEnum>(); }
	shared_ptr<IfcObjectiveEnum> type_object( new IfcObjectiveEnum() );
	if( std_iequal( arg, ".CODECOMPLIANCE." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_CODECOMPLIANCE;
	}
	else if( std_iequal( arg, ".CODEWAIVER." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_CODEWAIVER;
	}
	else if( std_iequal( arg, ".DESIGNINTENT." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_DESIGNINTENT;
	}
	else if( std_iequal( arg, ".EXTERNAL." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_EXTERNAL;
	}
	else if( std_iequal( arg, ".HEALTHANDSAFETY." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_HEALTHANDSAFETY;
	}
	else if( std_iequal( arg, ".MERGECONFLICT." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_MERGECONFLICT;
	}
	else if( std_iequal( arg, ".MODELVIEW." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_MODELVIEW;
	}
	else if( std_iequal( arg, ".PARAMETER." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_PARAMETER;
	}
	else if( std_iequal( arg, ".REQUIREMENT." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_REQUIREMENT;
	}
	else if( std_iequal( arg, ".SPECIFICATION." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_SPECIFICATION;
	}
	else if( std_iequal( arg, ".TRIGGERCONDITION." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_TRIGGERCONDITION;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
