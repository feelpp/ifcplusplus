/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcThermodynamicTemperatureMeasure.h"

// TYPE IfcThermodynamicTemperatureMeasure = REAL;
IfcThermodynamicTemperatureMeasure::IfcThermodynamicTemperatureMeasure() {}
IfcThermodynamicTemperatureMeasure::IfcThermodynamicTemperatureMeasure( double value ) { m_value = value; }
IfcThermodynamicTemperatureMeasure::~IfcThermodynamicTemperatureMeasure() {}
shared_ptr<IfcPPObject> IfcThermodynamicTemperatureMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcThermodynamicTemperatureMeasure> copy_self( new IfcThermodynamicTemperatureMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcThermodynamicTemperatureMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTHERMODYNAMICTEMPERATUREMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcThermodynamicTemperatureMeasure> IfcThermodynamicTemperatureMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcThermodynamicTemperatureMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcThermodynamicTemperatureMeasure>(); }
	shared_ptr<IfcThermodynamicTemperatureMeasure> type_object( new IfcThermodynamicTemperatureMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
