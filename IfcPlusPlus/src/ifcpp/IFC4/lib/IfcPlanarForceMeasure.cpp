/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcPlanarForceMeasure.h"

// TYPE IfcPlanarForceMeasure = REAL;
IfcPlanarForceMeasure::IfcPlanarForceMeasure() {}
IfcPlanarForceMeasure::IfcPlanarForceMeasure( double value ) { m_value = value; }
IfcPlanarForceMeasure::~IfcPlanarForceMeasure() {}
shared_ptr<IfcPPObject> IfcPlanarForceMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPlanarForceMeasure> copy_self( new IfcPlanarForceMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcPlanarForceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPLANARFORCEMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcPlanarForceMeasure> IfcPlanarForceMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPlanarForceMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPlanarForceMeasure>(); }
	shared_ptr<IfcPlanarForceMeasure> type_object( new IfcPlanarForceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
