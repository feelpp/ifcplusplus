/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcBooleanOperator.h"

// TYPE IfcBooleanOperator = ENUMERATION OF	(DIFFERENCE	,INTERSECTION	,UNION);
void IFC4X3::IfcBooleanOperator::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCBOOLEANOPERATOR("; }
	switch( m_enum )
	{
		case ENUM_DIFFERENCE:	stream << ".DIFFERENCE."; break;
		case ENUM_INTERSECTION:	stream << ".INTERSECTION."; break;
		case ENUM_UNION:	stream << ".UNION."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcBooleanOperator> IFC4X3::IfcBooleanOperator::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcBooleanOperator>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcBooleanOperator>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcBooleanOperator>(); }
	shared_ptr<IfcBooleanOperator> type_object( new IfcBooleanOperator() );
	if( std_iequal( arg, ".DIFFERENCE." ) )
	{
		type_object->m_enum = IfcBooleanOperator::ENUM_DIFFERENCE;
	}
	else if( std_iequal( arg, ".INTERSECTION." ) )
	{
		type_object->m_enum = IfcBooleanOperator::ENUM_INTERSECTION;
	}
	else if( std_iequal( arg, ".UNION." ) )
	{
		type_object->m_enum = IfcBooleanOperator::ENUM_UNION;
	}
	return type_object;
}
