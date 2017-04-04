/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcMolecularWeightMeasure.h"

// TYPE IfcMolecularWeightMeasure = REAL;
IfcMolecularWeightMeasure::IfcMolecularWeightMeasure() {}
IfcMolecularWeightMeasure::IfcMolecularWeightMeasure( double value ) { m_value = value; }
IfcMolecularWeightMeasure::~IfcMolecularWeightMeasure() {}
shared_ptr<IfcPPObject> IfcMolecularWeightMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcMolecularWeightMeasure> copy_self( new IfcMolecularWeightMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcMolecularWeightMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMOLECULARWEIGHTMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcMolecularWeightMeasure> IfcMolecularWeightMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcMolecularWeightMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcMolecularWeightMeasure>(); }
	shared_ptr<IfcMolecularWeightMeasure> type_object( new IfcMolecularWeightMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
