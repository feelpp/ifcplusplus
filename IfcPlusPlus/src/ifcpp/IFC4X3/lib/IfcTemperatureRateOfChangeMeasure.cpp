/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcTemperatureRateOfChangeMeasure.h"

// TYPE IfcTemperatureRateOfChangeMeasure = REAL;
IFC4X3::IfcTemperatureRateOfChangeMeasure::IfcTemperatureRateOfChangeMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IFC4X3::IfcTemperatureRateOfChangeMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTemperatureRateOfChangeMeasure> copy_self( new IfcTemperatureRateOfChangeMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IFC4X3::IfcTemperatureRateOfChangeMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTEMPERATURERATEOFCHANGEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcTemperatureRateOfChangeMeasure> IFC4X3::IfcTemperatureRateOfChangeMeasure::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcTemperatureRateOfChangeMeasure>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcTemperatureRateOfChangeMeasure>(); }
	shared_ptr<IfcTemperatureRateOfChangeMeasure> type_object( new IfcTemperatureRateOfChangeMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
