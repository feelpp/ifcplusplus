/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcPressureMeasure.h"

// TYPE IfcPressureMeasure = REAL;
IfcPressureMeasure::IfcPressureMeasure() {}
IfcPressureMeasure::IfcPressureMeasure( double value ) { m_value = value; }
IfcPressureMeasure::~IfcPressureMeasure() {}
shared_ptr<IfcPPObject> IfcPressureMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPressureMeasure> copy_self( new IfcPressureMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcPressureMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPRESSUREMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcPressureMeasure> IfcPressureMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPressureMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPressureMeasure>(); }
	shared_ptr<IfcPressureMeasure> type_object( new IfcPressureMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
