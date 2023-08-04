/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcTendonTypeEnum.h"

// TYPE IfcTendonTypeEnum = ENUMERATION OF	(BAR	,COATED	,STRAND	,WIRE	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcTendonTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCTENDONTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BAR:	stream << ".BAR."; break;
		case ENUM_COATED:	stream << ".COATED."; break;
		case ENUM_STRAND:	stream << ".STRAND."; break;
		case ENUM_WIRE:	stream << ".WIRE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcTendonTypeEnum> IFC4X3::IfcTendonTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcTendonTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcTendonTypeEnum>(); }
	shared_ptr<IfcTendonTypeEnum> type_object( new IfcTendonTypeEnum() );
	if( std_iequal( arg, ".BAR." ) )
	{
		type_object->m_enum = IfcTendonTypeEnum::ENUM_BAR;
	}
	else if( std_iequal( arg, ".COATED." ) )
	{
		type_object->m_enum = IfcTendonTypeEnum::ENUM_COATED;
	}
	else if( std_iequal( arg, ".STRAND." ) )
	{
		type_object->m_enum = IfcTendonTypeEnum::ENUM_STRAND;
	}
	else if( std_iequal( arg, ".WIRE." ) )
	{
		type_object->m_enum = IfcTendonTypeEnum::ENUM_WIRE;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcTendonTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcTendonTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
