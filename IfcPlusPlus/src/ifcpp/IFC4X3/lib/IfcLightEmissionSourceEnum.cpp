/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcLightEmissionSourceEnum.h"

// TYPE IfcLightEmissionSourceEnum = ENUMERATION OF	(COMPACTFLUORESCENT	,FLUORESCENT	,HIGHPRESSUREMERCURY	,HIGHPRESSURESODIUM	,LIGHTEMITTINGDIODE	,LOWPRESSURESODIUM	,LOWVOLTAGEHALOGEN	,MAINVOLTAGEHALOGEN	,METALHALIDE	,TUNGSTENFILAMENT	,NOTDEFINED);
shared_ptr<BuildingObject> IFC4X3::IfcLightEmissionSourceEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLightEmissionSourceEnum> copy_self( new IfcLightEmissionSourceEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IFC4X3::IfcLightEmissionSourceEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLIGHTEMISSIONSOURCEENUM("; }
	switch( m_enum )
	{
		case ENUM_COMPACTFLUORESCENT:	stream << ".COMPACTFLUORESCENT."; break;
		case ENUM_FLUORESCENT:	stream << ".FLUORESCENT."; break;
		case ENUM_HIGHPRESSUREMERCURY:	stream << ".HIGHPRESSUREMERCURY."; break;
		case ENUM_HIGHPRESSURESODIUM:	stream << ".HIGHPRESSURESODIUM."; break;
		case ENUM_LIGHTEMITTINGDIODE:	stream << ".LIGHTEMITTINGDIODE."; break;
		case ENUM_LOWPRESSURESODIUM:	stream << ".LOWPRESSURESODIUM."; break;
		case ENUM_LOWVOLTAGEHALOGEN:	stream << ".LOWVOLTAGEHALOGEN."; break;
		case ENUM_MAINVOLTAGEHALOGEN:	stream << ".MAINVOLTAGEHALOGEN."; break;
		case ENUM_METALHALIDE:	stream << ".METALHALIDE."; break;
		case ENUM_TUNGSTENFILAMENT:	stream << ".TUNGSTENFILAMENT."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcLightEmissionSourceEnum> IFC4X3::IfcLightEmissionSourceEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcLightEmissionSourceEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcLightEmissionSourceEnum>(); }
	shared_ptr<IfcLightEmissionSourceEnum> type_object( new IfcLightEmissionSourceEnum() );
	if( std_iequal( arg, ".COMPACTFLUORESCENT." ) )
	{
		type_object->m_enum = IfcLightEmissionSourceEnum::ENUM_COMPACTFLUORESCENT;
	}
	else if( std_iequal( arg, ".FLUORESCENT." ) )
	{
		type_object->m_enum = IfcLightEmissionSourceEnum::ENUM_FLUORESCENT;
	}
	else if( std_iequal( arg, ".HIGHPRESSUREMERCURY." ) )
	{
		type_object->m_enum = IfcLightEmissionSourceEnum::ENUM_HIGHPRESSUREMERCURY;
	}
	else if( std_iequal( arg, ".HIGHPRESSURESODIUM." ) )
	{
		type_object->m_enum = IfcLightEmissionSourceEnum::ENUM_HIGHPRESSURESODIUM;
	}
	else if( std_iequal( arg, ".LIGHTEMITTINGDIODE." ) )
	{
		type_object->m_enum = IfcLightEmissionSourceEnum::ENUM_LIGHTEMITTINGDIODE;
	}
	else if( std_iequal( arg, ".LOWPRESSURESODIUM." ) )
	{
		type_object->m_enum = IfcLightEmissionSourceEnum::ENUM_LOWPRESSURESODIUM;
	}
	else if( std_iequal( arg, ".LOWVOLTAGEHALOGEN." ) )
	{
		type_object->m_enum = IfcLightEmissionSourceEnum::ENUM_LOWVOLTAGEHALOGEN;
	}
	else if( std_iequal( arg, ".MAINVOLTAGEHALOGEN." ) )
	{
		type_object->m_enum = IfcLightEmissionSourceEnum::ENUM_MAINVOLTAGEHALOGEN;
	}
	else if( std_iequal( arg, ".METALHALIDE." ) )
	{
		type_object->m_enum = IfcLightEmissionSourceEnum::ENUM_METALHALIDE;
	}
	else if( std_iequal( arg, ".TUNGSTENFILAMENT." ) )
	{
		type_object->m_enum = IfcLightEmissionSourceEnum::ENUM_TUNGSTENFILAMENT;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcLightEmissionSourceEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
