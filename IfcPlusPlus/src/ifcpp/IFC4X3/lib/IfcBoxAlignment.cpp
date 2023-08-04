/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcBoxAlignment.h"

// TYPE IfcBoxAlignment = IfcLabel;
void IFC4X3::IfcBoxAlignment::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCBOXALIGNMENT("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcBoxAlignment> IFC4X3::IfcBoxAlignment::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcBoxAlignment>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcBoxAlignment>(); }
	shared_ptr<IfcBoxAlignment> type_object( new IfcBoxAlignment() );
	readString( arg, type_object->m_value );
	return type_object;
}
