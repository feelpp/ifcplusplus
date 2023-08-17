/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcVehicleTypeEnum.h"

// TYPE IfcVehicleTypeEnum = ENUMERATION OF	(CARGO	,ROLLINGSTOCK	,VEHICLE	,VEHICLEAIR	,VEHICLEMARINE	,VEHICLETRACKED	,VEHICLEWHEELED	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcVehicleTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCVEHICLETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CARGO:	stream << ".CARGO."; break;
		case ENUM_ROLLINGSTOCK:	stream << ".ROLLINGSTOCK."; break;
		case ENUM_VEHICLE:	stream << ".VEHICLE."; break;
		case ENUM_VEHICLEAIR:	stream << ".VEHICLEAIR."; break;
		case ENUM_VEHICLEMARINE:	stream << ".VEHICLEMARINE."; break;
		case ENUM_VEHICLETRACKED:	stream << ".VEHICLETRACKED."; break;
		case ENUM_VEHICLEWHEELED:	stream << ".VEHICLEWHEELED."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcVehicleTypeEnum> IFC4X3::IfcVehicleTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcVehicleTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcVehicleTypeEnum>(); }
	shared_ptr<IfcVehicleTypeEnum> type_object( new IfcVehicleTypeEnum() );
	if( std_iequal( arg, ".CARGO." ) )
	{
		type_object->m_enum = IfcVehicleTypeEnum::ENUM_CARGO;
	}
	else if( std_iequal( arg, ".ROLLINGSTOCK." ) )
	{
		type_object->m_enum = IfcVehicleTypeEnum::ENUM_ROLLINGSTOCK;
	}
	else if( std_iequal( arg, ".VEHICLE." ) )
	{
		type_object->m_enum = IfcVehicleTypeEnum::ENUM_VEHICLE;
	}
	else if( std_iequal( arg, ".VEHICLEAIR." ) )
	{
		type_object->m_enum = IfcVehicleTypeEnum::ENUM_VEHICLEAIR;
	}
	else if( std_iequal( arg, ".VEHICLEMARINE." ) )
	{
		type_object->m_enum = IfcVehicleTypeEnum::ENUM_VEHICLEMARINE;
	}
	else if( std_iequal( arg, ".VEHICLETRACKED." ) )
	{
		type_object->m_enum = IfcVehicleTypeEnum::ENUM_VEHICLETRACKED;
	}
	else if( std_iequal( arg, ".VEHICLEWHEELED." ) )
	{
		type_object->m_enum = IfcVehicleTypeEnum::ENUM_VEHICLEWHEELED;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcVehicleTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcVehicleTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
