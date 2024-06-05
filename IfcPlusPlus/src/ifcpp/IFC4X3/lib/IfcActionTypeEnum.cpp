/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcActionTypeEnum.h"

// TYPE IfcActionTypeEnum = ENUMERATION OF	(EXTRAORDINARY_A	,PERMANENT_G	,VARIABLE_Q	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcActionTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCACTIONTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_EXTRAORDINARY_A:	stream << ".EXTRAORDINARY_A."; break;
		case ENUM_PERMANENT_G:	stream << ".PERMANENT_G."; break;
		case ENUM_VARIABLE_Q:	stream << ".VARIABLE_Q."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcActionTypeEnum> IFC4X3::IfcActionTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcActionTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcActionTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcActionTypeEnum>(); }
	shared_ptr<IfcActionTypeEnum> type_object( new IfcActionTypeEnum() );
	if( std_iequal( arg, ".EXTRAORDINARY_A." ) )
	{
		type_object->m_enum = IfcActionTypeEnum::ENUM_EXTRAORDINARY_A;
	}
	else if( std_iequal( arg, ".PERMANENT_G." ) )
	{
		type_object->m_enum = IfcActionTypeEnum::ENUM_PERMANENT_G;
	}
	else if( std_iequal( arg, ".VARIABLE_Q." ) )
	{
		type_object->m_enum = IfcActionTypeEnum::ENUM_VARIABLE_Q;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcActionTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcActionTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
