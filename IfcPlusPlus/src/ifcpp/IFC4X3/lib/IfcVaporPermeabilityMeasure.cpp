/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcVaporPermeabilityMeasure.h"

// TYPE IfcVaporPermeabilityMeasure = REAL;
IFC4X3::IfcVaporPermeabilityMeasure::IfcVaporPermeabilityMeasure( double value ) { m_value = value; }
void IFC4X3::IfcVaporPermeabilityMeasure::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCVAPORPERMEABILITYMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value, precision );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcVaporPermeabilityMeasure> IFC4X3::IfcVaporPermeabilityMeasure::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcVaporPermeabilityMeasure>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcVaporPermeabilityMeasure>(); }
	shared_ptr<IfcVaporPermeabilityMeasure> type_object( new IfcVaporPermeabilityMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
