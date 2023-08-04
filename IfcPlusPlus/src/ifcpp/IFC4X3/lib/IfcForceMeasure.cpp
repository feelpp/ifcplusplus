/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcForceMeasure.h"

// TYPE IfcForceMeasure = REAL;
IFC4X3::IfcForceMeasure::IfcForceMeasure( double value ) { m_value = value; }
void IFC4X3::IfcForceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCFORCEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value, precision );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcForceMeasure> IFC4X3::IfcForceMeasure::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcForceMeasure>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcForceMeasure>(); }
	shared_ptr<IfcForceMeasure> type_object( new IfcForceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
