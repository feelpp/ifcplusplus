/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcShearModulusMeasure.h"

// TYPE IfcShearModulusMeasure = REAL;
IFC4X3::IfcShearModulusMeasure::IfcShearModulusMeasure( double value ) { m_value = value; }
void IFC4X3::IfcShearModulusMeasure::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCSHEARMODULUSMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value, precision );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcShearModulusMeasure> IFC4X3::IfcShearModulusMeasure::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcShearModulusMeasure>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcShearModulusMeasure>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcShearModulusMeasure>(); }
	shared_ptr<IfcShearModulusMeasure> type_object( new IfcShearModulusMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
