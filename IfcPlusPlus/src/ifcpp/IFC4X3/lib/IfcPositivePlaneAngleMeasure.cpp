/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcPositivePlaneAngleMeasure.h"

// TYPE IfcPositivePlaneAngleMeasure = IfcPlaneAngleMeasure;
void IFC4X3::IfcPositivePlaneAngleMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPOSITIVEPLANEANGLEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcPositivePlaneAngleMeasure> IFC4X3::IfcPositivePlaneAngleMeasure::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcPositivePlaneAngleMeasure>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcPositivePlaneAngleMeasure>(); }
	shared_ptr<IfcPositivePlaneAngleMeasure> type_object( new IfcPositivePlaneAngleMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
