/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcConveyorSegmentTypeEnum.h"

// TYPE IfcConveyorSegmentTypeEnum = ENUMERATION OF	(BELTCONVEYOR	,BUCKETCONVEYOR	,CHUTECONVEYOR	,SCREWCONVEYOR	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcConveyorSegmentTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCCONVEYORSEGMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BELTCONVEYOR:	stream << ".BELTCONVEYOR."; break;
		case ENUM_BUCKETCONVEYOR:	stream << ".BUCKETCONVEYOR."; break;
		case ENUM_CHUTECONVEYOR:	stream << ".CHUTECONVEYOR."; break;
		case ENUM_SCREWCONVEYOR:	stream << ".SCREWCONVEYOR."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcConveyorSegmentTypeEnum> IFC4X3::IfcConveyorSegmentTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcConveyorSegmentTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcConveyorSegmentTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcConveyorSegmentTypeEnum>(); }
	shared_ptr<IfcConveyorSegmentTypeEnum> type_object( new IfcConveyorSegmentTypeEnum() );
	if( std_iequal( arg, ".BELTCONVEYOR." ) )
	{
		type_object->m_enum = IfcConveyorSegmentTypeEnum::ENUM_BELTCONVEYOR;
	}
	else if( std_iequal( arg, ".BUCKETCONVEYOR." ) )
	{
		type_object->m_enum = IfcConveyorSegmentTypeEnum::ENUM_BUCKETCONVEYOR;
	}
	else if( std_iequal( arg, ".CHUTECONVEYOR." ) )
	{
		type_object->m_enum = IfcConveyorSegmentTypeEnum::ENUM_CHUTECONVEYOR;
	}
	else if( std_iequal( arg, ".SCREWCONVEYOR." ) )
	{
		type_object->m_enum = IfcConveyorSegmentTypeEnum::ENUM_SCREWCONVEYOR;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcConveyorSegmentTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcConveyorSegmentTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
