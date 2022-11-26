/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcTransitionCode.h"

// TYPE IfcTransitionCode = ENUMERATION OF	(CONTINUOUS	,CONTSAMEGRADIENT	,CONTSAMEGRADIENTSAMECURVATURE	,DISCONTINUOUS);
shared_ptr<BuildingObject> IFC4X3::IfcTransitionCode::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTransitionCode> copy_self( new IfcTransitionCode() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IFC4X3::IfcTransitionCode::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTRANSITIONCODE("; }
	switch( m_enum )
	{
		case ENUM_CONTINUOUS:	stream << ".CONTINUOUS."; break;
		case ENUM_CONTSAMEGRADIENT:	stream << ".CONTSAMEGRADIENT."; break;
		case ENUM_CONTSAMEGRADIENTSAMECURVATURE:	stream << ".CONTSAMEGRADIENTSAMECURVATURE."; break;
		case ENUM_DISCONTINUOUS:	stream << ".DISCONTINUOUS."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcTransitionCode> IFC4X3::IfcTransitionCode::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcTransitionCode>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcTransitionCode>(); }
	shared_ptr<IfcTransitionCode> type_object( new IfcTransitionCode() );
	if( std_iequal( arg, ".CONTINUOUS." ) )
	{
		type_object->m_enum = IfcTransitionCode::ENUM_CONTINUOUS;
	}
	else if( std_iequal( arg, ".CONTSAMEGRADIENT." ) )
	{
		type_object->m_enum = IfcTransitionCode::ENUM_CONTSAMEGRADIENT;
	}
	else if( std_iequal( arg, ".CONTSAMEGRADIENTSAMECURVATURE." ) )
	{
		type_object->m_enum = IfcTransitionCode::ENUM_CONTSAMEGRADIENTSAMECURVATURE;
	}
	else if( std_iequal( arg, ".DISCONTINUOUS." ) )
	{
		type_object->m_enum = IfcTransitionCode::ENUM_DISCONTINUOUS;
	}
	return type_object;
}
