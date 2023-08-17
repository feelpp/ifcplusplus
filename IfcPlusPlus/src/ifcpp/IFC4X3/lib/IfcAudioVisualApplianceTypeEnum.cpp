/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcAudioVisualApplianceTypeEnum.h"

// TYPE IfcAudioVisualApplianceTypeEnum = ENUMERATION OF	(AMPLIFIER	,CAMERA	,COMMUNICATIONTERMINAL	,DISPLAY	,MICROPHONE	,PLAYER	,PROJECTOR	,RECEIVER	,RECORDINGEQUIPMENT	,SPEAKER	,SWITCHER	,TELEPHONE	,TUNER	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcAudioVisualApplianceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCAUDIOVISUALAPPLIANCETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_AMPLIFIER:	stream << ".AMPLIFIER."; break;
		case ENUM_CAMERA:	stream << ".CAMERA."; break;
		case ENUM_COMMUNICATIONTERMINAL:	stream << ".COMMUNICATIONTERMINAL."; break;
		case ENUM_DISPLAY:	stream << ".DISPLAY."; break;
		case ENUM_MICROPHONE:	stream << ".MICROPHONE."; break;
		case ENUM_PLAYER:	stream << ".PLAYER."; break;
		case ENUM_PROJECTOR:	stream << ".PROJECTOR."; break;
		case ENUM_RECEIVER:	stream << ".RECEIVER."; break;
		case ENUM_RECORDINGEQUIPMENT:	stream << ".RECORDINGEQUIPMENT."; break;
		case ENUM_SPEAKER:	stream << ".SPEAKER."; break;
		case ENUM_SWITCHER:	stream << ".SWITCHER."; break;
		case ENUM_TELEPHONE:	stream << ".TELEPHONE."; break;
		case ENUM_TUNER:	stream << ".TUNER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcAudioVisualApplianceTypeEnum> IFC4X3::IfcAudioVisualApplianceTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcAudioVisualApplianceTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcAudioVisualApplianceTypeEnum>(); }
	shared_ptr<IfcAudioVisualApplianceTypeEnum> type_object( new IfcAudioVisualApplianceTypeEnum() );
	if( std_iequal( arg, ".AMPLIFIER." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_AMPLIFIER;
	}
	else if( std_iequal( arg, ".CAMERA." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_CAMERA;
	}
	else if( std_iequal( arg, ".COMMUNICATIONTERMINAL." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_COMMUNICATIONTERMINAL;
	}
	else if( std_iequal( arg, ".DISPLAY." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_DISPLAY;
	}
	else if( std_iequal( arg, ".MICROPHONE." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_MICROPHONE;
	}
	else if( std_iequal( arg, ".PLAYER." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_PLAYER;
	}
	else if( std_iequal( arg, ".PROJECTOR." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_PROJECTOR;
	}
	else if( std_iequal( arg, ".RECEIVER." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_RECEIVER;
	}
	else if( std_iequal( arg, ".RECORDINGEQUIPMENT." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_RECORDINGEQUIPMENT;
	}
	else if( std_iequal( arg, ".SPEAKER." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_SPEAKER;
	}
	else if( std_iequal( arg, ".SWITCHER." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_SWITCHER;
	}
	else if( std_iequal( arg, ".TELEPHONE." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_TELEPHONE;
	}
	else if( std_iequal( arg, ".TUNER." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_TUNER;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
