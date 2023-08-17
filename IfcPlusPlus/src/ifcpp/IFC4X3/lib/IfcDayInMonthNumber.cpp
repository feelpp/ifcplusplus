/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDayInMonthNumber.h"

// TYPE IfcDayInMonthNumber = INTEGER;
IFC4X3::IfcDayInMonthNumber::IfcDayInMonthNumber( int value ) { m_value = value; }
void IFC4X3::IfcDayInMonthNumber::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCDAYINMONTHNUMBER("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcDayInMonthNumber> IFC4X3::IfcDayInMonthNumber::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcDayInMonthNumber>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcDayInMonthNumber>(); }
	shared_ptr<IfcDayInMonthNumber> type_object( new IfcDayInMonthNumber() );
	readInteger( arg, type_object->m_value );
	return type_object;
}
