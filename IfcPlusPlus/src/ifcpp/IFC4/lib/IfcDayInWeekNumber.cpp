/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDayInWeekNumber.h"

// TYPE IfcDayInWeekNumber = INTEGER;
IfcDayInWeekNumber::IfcDayInWeekNumber() {}
IfcDayInWeekNumber::IfcDayInWeekNumber( int value ) { m_value = value; }
IfcDayInWeekNumber::~IfcDayInWeekNumber() {}
shared_ptr<IfcPPObject> IfcDayInWeekNumber::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcDayInWeekNumber> copy_self( new IfcDayInWeekNumber() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcDayInWeekNumber::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDAYINWEEKNUMBER("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcDayInWeekNumber> IfcDayInWeekNumber::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDayInWeekNumber>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDayInWeekNumber>(); }
	shared_ptr<IfcDayInWeekNumber> type_object( new IfcDayInWeekNumber() );
	readInt( arg, type_object->m_value );
	return type_object;
}
