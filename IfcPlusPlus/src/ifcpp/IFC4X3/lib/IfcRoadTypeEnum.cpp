/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcRoadTypeEnum.h"

// TYPE IfcRoadTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcRoadTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCROADTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcRoadTypeEnum> IFC4X3::IfcRoadTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcRoadTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcRoadTypeEnum>(); }
	shared_ptr<IfcRoadTypeEnum> type_object( new IfcRoadTypeEnum() );
	if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcRoadTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcRoadTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
