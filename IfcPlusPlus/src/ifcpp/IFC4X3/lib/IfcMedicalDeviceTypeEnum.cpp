/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcMedicalDeviceTypeEnum.h"

// TYPE IfcMedicalDeviceTypeEnum = ENUMERATION OF	(AIRSTATION	,FEEDAIRUNIT	,OXYGENGENERATOR	,OXYGENPLANT	,VACUUMSTATION	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcMedicalDeviceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMEDICALDEVICETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_AIRSTATION:	stream << ".AIRSTATION."; break;
		case ENUM_FEEDAIRUNIT:	stream << ".FEEDAIRUNIT."; break;
		case ENUM_OXYGENGENERATOR:	stream << ".OXYGENGENERATOR."; break;
		case ENUM_OXYGENPLANT:	stream << ".OXYGENPLANT."; break;
		case ENUM_VACUUMSTATION:	stream << ".VACUUMSTATION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcMedicalDeviceTypeEnum> IFC4X3::IfcMedicalDeviceTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcMedicalDeviceTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcMedicalDeviceTypeEnum>(); }
	shared_ptr<IfcMedicalDeviceTypeEnum> type_object( new IfcMedicalDeviceTypeEnum() );
	if( std_iequal( arg, ".AIRSTATION." ) )
	{
		type_object->m_enum = IfcMedicalDeviceTypeEnum::ENUM_AIRSTATION;
	}
	else if( std_iequal( arg, ".FEEDAIRUNIT." ) )
	{
		type_object->m_enum = IfcMedicalDeviceTypeEnum::ENUM_FEEDAIRUNIT;
	}
	else if( std_iequal( arg, ".OXYGENGENERATOR." ) )
	{
		type_object->m_enum = IfcMedicalDeviceTypeEnum::ENUM_OXYGENGENERATOR;
	}
	else if( std_iequal( arg, ".OXYGENPLANT." ) )
	{
		type_object->m_enum = IfcMedicalDeviceTypeEnum::ENUM_OXYGENPLANT;
	}
	else if( std_iequal( arg, ".VACUUMSTATION." ) )
	{
		type_object->m_enum = IfcMedicalDeviceTypeEnum::ENUM_VACUUMSTATION;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcMedicalDeviceTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcMedicalDeviceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
