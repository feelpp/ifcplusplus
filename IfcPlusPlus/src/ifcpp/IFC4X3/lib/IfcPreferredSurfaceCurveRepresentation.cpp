/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcPreferredSurfaceCurveRepresentation.h"

// TYPE IfcPreferredSurfaceCurveRepresentation = ENUMERATION OF	(CURVE3D	,PCURVE_S1	,PCURVE_S2);
void IFC4X3::IfcPreferredSurfaceCurveRepresentation::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPREFERREDSURFACECURVEREPRESENTATION("; }
	switch( m_enum )
	{
		case ENUM_CURVE3D:	stream << ".CURVE3D."; break;
		case ENUM_PCURVE_S1:	stream << ".PCURVE_S1."; break;
		case ENUM_PCURVE_S2:	stream << ".PCURVE_S2."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcPreferredSurfaceCurveRepresentation> IFC4X3::IfcPreferredSurfaceCurveRepresentation::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcPreferredSurfaceCurveRepresentation>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcPreferredSurfaceCurveRepresentation>(); }
	shared_ptr<IfcPreferredSurfaceCurveRepresentation> type_object( new IfcPreferredSurfaceCurveRepresentation() );
	if( std_iequal( arg, ".CURVE3D." ) )
	{
		type_object->m_enum = IfcPreferredSurfaceCurveRepresentation::ENUM_CURVE3D;
	}
	else if( std_iequal( arg, ".PCURVE_S1." ) )
	{
		type_object->m_enum = IfcPreferredSurfaceCurveRepresentation::ENUM_PCURVE_S1;
	}
	else if( std_iequal( arg, ".PCURVE_S2." ) )
	{
		type_object->m_enum = IfcPreferredSurfaceCurveRepresentation::ENUM_PCURVE_S2;
	}
	return type_object;
}
