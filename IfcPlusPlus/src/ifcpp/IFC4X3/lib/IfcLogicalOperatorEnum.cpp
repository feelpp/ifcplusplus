/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcLogicalOperatorEnum.h"

// TYPE IfcLogicalOperatorEnum = ENUMERATION OF	(LOGICALAND	,LOGICALNOTAND	,LOGICALNOTOR	,LOGICALOR	,LOGICALXOR);
shared_ptr<BuildingObject> IFC4X3::IfcLogicalOperatorEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLogicalOperatorEnum> copy_self( new IfcLogicalOperatorEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IFC4X3::IfcLogicalOperatorEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLOGICALOPERATORENUM("; }
	switch( m_enum )
	{
		case ENUM_LOGICALAND:	stream << ".LOGICALAND."; break;
		case ENUM_LOGICALNOTAND:	stream << ".LOGICALNOTAND."; break;
		case ENUM_LOGICALNOTOR:	stream << ".LOGICALNOTOR."; break;
		case ENUM_LOGICALOR:	stream << ".LOGICALOR."; break;
		case ENUM_LOGICALXOR:	stream << ".LOGICALXOR."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcLogicalOperatorEnum> IFC4X3::IfcLogicalOperatorEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcLogicalOperatorEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcLogicalOperatorEnum>(); }
	shared_ptr<IfcLogicalOperatorEnum> type_object( new IfcLogicalOperatorEnum() );
	if( std_iequal( arg, ".LOGICALAND." ) )
	{
		type_object->m_enum = IfcLogicalOperatorEnum::ENUM_LOGICALAND;
	}
	else if( std_iequal( arg, ".LOGICALNOTAND." ) )
	{
		type_object->m_enum = IfcLogicalOperatorEnum::ENUM_LOGICALNOTAND;
	}
	else if( std_iequal( arg, ".LOGICALNOTOR." ) )
	{
		type_object->m_enum = IfcLogicalOperatorEnum::ENUM_LOGICALNOTOR;
	}
	else if( std_iequal( arg, ".LOGICALOR." ) )
	{
		type_object->m_enum = IfcLogicalOperatorEnum::ENUM_LOGICALOR;
	}
	else if( std_iequal( arg, ".LOGICALXOR." ) )
	{
		type_object->m_enum = IfcLogicalOperatorEnum::ENUM_LOGICALXOR;
	}
	return type_object;
}
