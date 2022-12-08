/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcValveTypeEnum.h"

// TYPE IfcValveTypeEnum = ENUMERATION OF	(AIRRELEASE	,ANTIVACUUM	,CHANGEOVER	,CHECK	,COMMISSIONING	,DIVERTING	,DOUBLECHECK	,DOUBLEREGULATING	,DRAWOFFCOCK	,FAUCET	,FLUSHING	,GASCOCK	,GASTAP	,ISOLATING	,MIXING	,PRESSUREREDUCING	,PRESSURERELIEF	,REGULATING	,SAFETYCUTOFF	,STEAMTRAP	,STOPCOCK	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcValveTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCVALVETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_AIRRELEASE:	stream << ".AIRRELEASE."; break;
		case ENUM_ANTIVACUUM:	stream << ".ANTIVACUUM."; break;
		case ENUM_CHANGEOVER:	stream << ".CHANGEOVER."; break;
		case ENUM_CHECK:	stream << ".CHECK."; break;
		case ENUM_COMMISSIONING:	stream << ".COMMISSIONING."; break;
		case ENUM_DIVERTING:	stream << ".DIVERTING."; break;
		case ENUM_DOUBLECHECK:	stream << ".DOUBLECHECK."; break;
		case ENUM_DOUBLEREGULATING:	stream << ".DOUBLEREGULATING."; break;
		case ENUM_DRAWOFFCOCK:	stream << ".DRAWOFFCOCK."; break;
		case ENUM_FAUCET:	stream << ".FAUCET."; break;
		case ENUM_FLUSHING:	stream << ".FLUSHING."; break;
		case ENUM_GASCOCK:	stream << ".GASCOCK."; break;
		case ENUM_GASTAP:	stream << ".GASTAP."; break;
		case ENUM_ISOLATING:	stream << ".ISOLATING."; break;
		case ENUM_MIXING:	stream << ".MIXING."; break;
		case ENUM_PRESSUREREDUCING:	stream << ".PRESSUREREDUCING."; break;
		case ENUM_PRESSURERELIEF:	stream << ".PRESSURERELIEF."; break;
		case ENUM_REGULATING:	stream << ".REGULATING."; break;
		case ENUM_SAFETYCUTOFF:	stream << ".SAFETYCUTOFF."; break;
		case ENUM_STEAMTRAP:	stream << ".STEAMTRAP."; break;
		case ENUM_STOPCOCK:	stream << ".STOPCOCK."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcValveTypeEnum> IFC4X3::IfcValveTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcValveTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcValveTypeEnum>(); }
	shared_ptr<IfcValveTypeEnum> type_object( new IfcValveTypeEnum() );
	if( std_iequal( arg, ".AIRRELEASE." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_AIRRELEASE;
	}
	else if( std_iequal( arg, ".ANTIVACUUM." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_ANTIVACUUM;
	}
	else if( std_iequal( arg, ".CHANGEOVER." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_CHANGEOVER;
	}
	else if( std_iequal( arg, ".CHECK." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_CHECK;
	}
	else if( std_iequal( arg, ".COMMISSIONING." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_COMMISSIONING;
	}
	else if( std_iequal( arg, ".DIVERTING." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_DIVERTING;
	}
	else if( std_iequal( arg, ".DOUBLECHECK." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_DOUBLECHECK;
	}
	else if( std_iequal( arg, ".DOUBLEREGULATING." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_DOUBLEREGULATING;
	}
	else if( std_iequal( arg, ".DRAWOFFCOCK." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_DRAWOFFCOCK;
	}
	else if( std_iequal( arg, ".FAUCET." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_FAUCET;
	}
	else if( std_iequal( arg, ".FLUSHING." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_FLUSHING;
	}
	else if( std_iequal( arg, ".GASCOCK." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_GASCOCK;
	}
	else if( std_iequal( arg, ".GASTAP." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_GASTAP;
	}
	else if( std_iequal( arg, ".ISOLATING." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_ISOLATING;
	}
	else if( std_iequal( arg, ".MIXING." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_MIXING;
	}
	else if( std_iequal( arg, ".PRESSUREREDUCING." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_PRESSUREREDUCING;
	}
	else if( std_iequal( arg, ".PRESSURERELIEF." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_PRESSURERELIEF;
	}
	else if( std_iequal( arg, ".REGULATING." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_REGULATING;
	}
	else if( std_iequal( arg, ".SAFETYCUTOFF." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_SAFETYCUTOFF;
	}
	else if( std_iequal( arg, ".STEAMTRAP." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_STEAMTRAP;
	}
	else if( std_iequal( arg, ".STOPCOCK." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_STOPCOCK;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcValveTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
