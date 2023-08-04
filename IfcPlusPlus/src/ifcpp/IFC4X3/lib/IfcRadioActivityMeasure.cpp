/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcRadioActivityMeasure.h"

// TYPE IfcRadioActivityMeasure = REAL;
IFC4X3::IfcRadioActivityMeasure::IfcRadioActivityMeasure( double value ) { m_value = value; }
void IFC4X3::IfcRadioActivityMeasure::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCRADIOACTIVITYMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value, precision );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcRadioActivityMeasure> IFC4X3::IfcRadioActivityMeasure::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcRadioActivityMeasure>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcRadioActivityMeasure>(); }
	shared_ptr<IfcRadioActivityMeasure> type_object( new IfcRadioActivityMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
