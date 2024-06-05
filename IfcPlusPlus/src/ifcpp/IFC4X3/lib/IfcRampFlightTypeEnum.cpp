/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcRampFlightTypeEnum.h"

// TYPE IfcRampFlightTypeEnum = ENUMERATION OF	(SPIRAL	,STRAIGHT	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcRampFlightTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCRAMPFLIGHTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_SPIRAL:	stream << ".SPIRAL."; break;
		case ENUM_STRAIGHT:	stream << ".STRAIGHT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcRampFlightTypeEnum> IFC4X3::IfcRampFlightTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcRampFlightTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcRampFlightTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcRampFlightTypeEnum>(); }
	shared_ptr<IfcRampFlightTypeEnum> type_object( new IfcRampFlightTypeEnum() );
	if( std_iequal( arg, ".SPIRAL." ) )
	{
		type_object->m_enum = IfcRampFlightTypeEnum::ENUM_SPIRAL;
	}
	else if( std_iequal( arg, ".STRAIGHT." ) )
	{
		type_object->m_enum = IfcRampFlightTypeEnum::ENUM_STRAIGHT;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcRampFlightTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcRampFlightTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
