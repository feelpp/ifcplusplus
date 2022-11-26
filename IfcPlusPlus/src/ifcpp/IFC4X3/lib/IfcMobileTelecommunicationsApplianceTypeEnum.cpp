/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcMobileTelecommunicationsApplianceTypeEnum.h"

// TYPE IfcMobileTelecommunicationsApplianceTypeEnum = ENUMERATION OF	(ACCESSPOINT	,BASEBANDUNIT	,BASETRANSCEIVERSTATION	,E_UTRAN_NODE_B	,GATEWAY_GPRS_SUPPORT_NODE	,MASTERUNIT	,MOBILESWITCHINGCENTER	,MSCSERVER	,PACKETCONTROLUNIT	,REMOTERADIOUNIT	,REMOTEUNIT	,SERVICE_GPRS_SUPPORT_NODE	,SUBSCRIBERSERVER	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IFC4X3::IfcMobileTelecommunicationsApplianceTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMobileTelecommunicationsApplianceTypeEnum> copy_self( new IfcMobileTelecommunicationsApplianceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IFC4X3::IfcMobileTelecommunicationsApplianceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMOBILETELECOMMUNICATIONSAPPLIANCETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ACCESSPOINT:	stream << ".ACCESSPOINT."; break;
		case ENUM_BASEBANDUNIT:	stream << ".BASEBANDUNIT."; break;
		case ENUM_BASETRANSCEIVERSTATION:	stream << ".BASETRANSCEIVERSTATION."; break;
		case ENUM_E_UTRAN_NODE_B:	stream << ".E_UTRAN_NODE_B."; break;
		case ENUM_GATEWAY_GPRS_SUPPORT_NODE:	stream << ".GATEWAY_GPRS_SUPPORT_NODE."; break;
		case ENUM_MASTERUNIT:	stream << ".MASTERUNIT."; break;
		case ENUM_MOBILESWITCHINGCENTER:	stream << ".MOBILESWITCHINGCENTER."; break;
		case ENUM_MSCSERVER:	stream << ".MSCSERVER."; break;
		case ENUM_PACKETCONTROLUNIT:	stream << ".PACKETCONTROLUNIT."; break;
		case ENUM_REMOTERADIOUNIT:	stream << ".REMOTERADIOUNIT."; break;
		case ENUM_REMOTEUNIT:	stream << ".REMOTEUNIT."; break;
		case ENUM_SERVICE_GPRS_SUPPORT_NODE:	stream << ".SERVICE_GPRS_SUPPORT_NODE."; break;
		case ENUM_SUBSCRIBERSERVER:	stream << ".SUBSCRIBERSERVER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcMobileTelecommunicationsApplianceTypeEnum> IFC4X3::IfcMobileTelecommunicationsApplianceTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcMobileTelecommunicationsApplianceTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcMobileTelecommunicationsApplianceTypeEnum>(); }
	shared_ptr<IfcMobileTelecommunicationsApplianceTypeEnum> type_object( new IfcMobileTelecommunicationsApplianceTypeEnum() );
	if( std_iequal( arg, ".ACCESSPOINT." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_ACCESSPOINT;
	}
	else if( std_iequal( arg, ".BASEBANDUNIT." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_BASEBANDUNIT;
	}
	else if( std_iequal( arg, ".BASETRANSCEIVERSTATION." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_BASETRANSCEIVERSTATION;
	}
	else if( std_iequal( arg, ".E_UTRAN_NODE_B." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_E_UTRAN_NODE_B;
	}
	else if( std_iequal( arg, ".GATEWAY_GPRS_SUPPORT_NODE." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_GATEWAY_GPRS_SUPPORT_NODE;
	}
	else if( std_iequal( arg, ".MASTERUNIT." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_MASTERUNIT;
	}
	else if( std_iequal( arg, ".MOBILESWITCHINGCENTER." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_MOBILESWITCHINGCENTER;
	}
	else if( std_iequal( arg, ".MSCSERVER." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_MSCSERVER;
	}
	else if( std_iequal( arg, ".PACKETCONTROLUNIT." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_PACKETCONTROLUNIT;
	}
	else if( std_iequal( arg, ".REMOTERADIOUNIT." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_REMOTERADIOUNIT;
	}
	else if( std_iequal( arg, ".REMOTEUNIT." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_REMOTEUNIT;
	}
	else if( std_iequal( arg, ".SERVICE_GPRS_SUPPORT_NODE." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_SERVICE_GPRS_SUPPORT_NODE;
	}
	else if( std_iequal( arg, ".SUBSCRIBERSERVER." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_SUBSCRIBERSERVER;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
