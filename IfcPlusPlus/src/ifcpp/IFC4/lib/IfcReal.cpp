/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcSimpleValue.h"
#include "ifcpp/IFC4/include/IfcReal.h"

// TYPE IfcReal = REAL;
IfcReal::IfcReal() {}
IfcReal::IfcReal( double value ) { m_value = value; }
IfcReal::~IfcReal() {}
shared_ptr<IfcPPObject> IfcReal::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcReal> copy_self( new IfcReal() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcReal::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCREAL("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcReal> IfcReal::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcReal>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcReal>(); }
	shared_ptr<IfcReal> type_object( new IfcReal() );
	readReal( arg, type_object->m_value );
	return type_object;
}
