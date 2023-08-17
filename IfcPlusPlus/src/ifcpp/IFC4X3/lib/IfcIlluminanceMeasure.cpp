/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcIlluminanceMeasure.h"

// TYPE IfcIlluminanceMeasure = REAL;
IFC4X3::IfcIlluminanceMeasure::IfcIlluminanceMeasure( double value ) { m_value = value; }
void IFC4X3::IfcIlluminanceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCILLUMINANCEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value, precision );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcIlluminanceMeasure> IFC4X3::IfcIlluminanceMeasure::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcIlluminanceMeasure>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcIlluminanceMeasure>(); }
	shared_ptr<IfcIlluminanceMeasure> type_object( new IfcIlluminanceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
