/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcLoadGroupTypeEnum.h"

// TYPE IfcLoadGroupTypeEnum = ENUMERATION OF	(LOAD_CASE	,LOAD_COMBINATION	,LOAD_GROUP	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcLoadGroupTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCLOADGROUPTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_LOAD_CASE:	stream << ".LOAD_CASE."; break;
		case ENUM_LOAD_COMBINATION:	stream << ".LOAD_COMBINATION."; break;
		case ENUM_LOAD_GROUP:	stream << ".LOAD_GROUP."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcLoadGroupTypeEnum> IFC4X3::IfcLoadGroupTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcLoadGroupTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcLoadGroupTypeEnum>(); }
	shared_ptr<IfcLoadGroupTypeEnum> type_object( new IfcLoadGroupTypeEnum() );
	if( std_iequal( arg, ".LOAD_CASE." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_LOAD_CASE;
	}
	else if( std_iequal( arg, ".LOAD_COMBINATION." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_LOAD_COMBINATION;
	}
	else if( std_iequal( arg, ".LOAD_GROUP." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_LOAD_GROUP;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
