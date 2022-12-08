/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcSimpleValue.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"

// TYPE IfcIdentifier = STRING(255);
IFC4X3::IfcIdentifier::IfcIdentifier( std::string value ) { m_value = value; }
void IFC4X3::IfcIdentifier::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCIDENTIFIER("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcIdentifier> IFC4X3::IfcIdentifier::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcIdentifier>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcIdentifier>(); }
	shared_ptr<IfcIdentifier> type_object( new IfcIdentifier() );
	readString( arg, type_object->m_value );
	return type_object;
}
