/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcPowerMeasure.h"

// TYPE IfcPowerMeasure = REAL;
IfcPowerMeasure::IfcPowerMeasure() {}
IfcPowerMeasure::IfcPowerMeasure( double value ) { m_value = value; }
IfcPowerMeasure::~IfcPowerMeasure() {}
shared_ptr<IfcPPObject> IfcPowerMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPowerMeasure> copy_self( new IfcPowerMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcPowerMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPOWERMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcPowerMeasure> IfcPowerMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPowerMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPowerMeasure>(); }
	shared_ptr<IfcPowerMeasure> type_object( new IfcPowerMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
