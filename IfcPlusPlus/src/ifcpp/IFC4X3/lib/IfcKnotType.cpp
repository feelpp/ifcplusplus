/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcKnotType.h"

// TYPE IfcKnotType = ENUMERATION OF	(PIECEWISE_BEZIER_KNOTS	,QUASI_UNIFORM_KNOTS	,UNIFORM_KNOTS	,UNSPECIFIED);
void IFC4X3::IfcKnotType::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCKNOTTYPE("; }
	switch( m_enum )
	{
		case ENUM_PIECEWISE_BEZIER_KNOTS:	stream << ".PIECEWISE_BEZIER_KNOTS."; break;
		case ENUM_QUASI_UNIFORM_KNOTS:	stream << ".QUASI_UNIFORM_KNOTS."; break;
		case ENUM_UNIFORM_KNOTS:	stream << ".UNIFORM_KNOTS."; break;
		case ENUM_UNSPECIFIED:	stream << ".UNSPECIFIED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcKnotType> IFC4X3::IfcKnotType::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcKnotType>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcKnotType>(); }
	shared_ptr<IfcKnotType> type_object( new IfcKnotType() );
	if( std_iequal( arg, ".PIECEWISE_BEZIER_KNOTS." ) )
	{
		type_object->m_enum = IfcKnotType::ENUM_PIECEWISE_BEZIER_KNOTS;
	}
	else if( std_iequal( arg, ".QUASI_UNIFORM_KNOTS." ) )
	{
		type_object->m_enum = IfcKnotType::ENUM_QUASI_UNIFORM_KNOTS;
	}
	else if( std_iequal( arg, ".UNIFORM_KNOTS." ) )
	{
		type_object->m_enum = IfcKnotType::ENUM_UNIFORM_KNOTS;
	}
	else if( std_iequal( arg, ".UNSPECIFIED." ) )
	{
		type_object->m_enum = IfcKnotType::ENUM_UNSPECIFIED;
	}
	return type_object;
}
