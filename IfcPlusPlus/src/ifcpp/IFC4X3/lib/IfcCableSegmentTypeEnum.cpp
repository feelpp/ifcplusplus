/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcCableSegmentTypeEnum.h"

// TYPE IfcCableSegmentTypeEnum = ENUMERATION OF	(BUSBARSEGMENT	,CABLESEGMENT	,CONDUCTORSEGMENT	,CONTACTWIRESEGMENT	,CORESEGMENT	,FIBERSEGMENT	,FIBERTUBE	,OPTICALCABLESEGMENT	,STITCHWIRE	,WIREPAIRSEGMENT	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcCableSegmentTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCABLESEGMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BUSBARSEGMENT:	stream << ".BUSBARSEGMENT."; break;
		case ENUM_CABLESEGMENT:	stream << ".CABLESEGMENT."; break;
		case ENUM_CONDUCTORSEGMENT:	stream << ".CONDUCTORSEGMENT."; break;
		case ENUM_CONTACTWIRESEGMENT:	stream << ".CONTACTWIRESEGMENT."; break;
		case ENUM_CORESEGMENT:	stream << ".CORESEGMENT."; break;
		case ENUM_FIBERSEGMENT:	stream << ".FIBERSEGMENT."; break;
		case ENUM_FIBERTUBE:	stream << ".FIBERTUBE."; break;
		case ENUM_OPTICALCABLESEGMENT:	stream << ".OPTICALCABLESEGMENT."; break;
		case ENUM_STITCHWIRE:	stream << ".STITCHWIRE."; break;
		case ENUM_WIREPAIRSEGMENT:	stream << ".WIREPAIRSEGMENT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcCableSegmentTypeEnum> IFC4X3::IfcCableSegmentTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcCableSegmentTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcCableSegmentTypeEnum>(); }
	shared_ptr<IfcCableSegmentTypeEnum> type_object( new IfcCableSegmentTypeEnum() );
	if( std_iequal( arg, ".BUSBARSEGMENT." ) )
	{
		type_object->m_enum = IfcCableSegmentTypeEnum::ENUM_BUSBARSEGMENT;
	}
	else if( std_iequal( arg, ".CABLESEGMENT." ) )
	{
		type_object->m_enum = IfcCableSegmentTypeEnum::ENUM_CABLESEGMENT;
	}
	else if( std_iequal( arg, ".CONDUCTORSEGMENT." ) )
	{
		type_object->m_enum = IfcCableSegmentTypeEnum::ENUM_CONDUCTORSEGMENT;
	}
	else if( std_iequal( arg, ".CONTACTWIRESEGMENT." ) )
	{
		type_object->m_enum = IfcCableSegmentTypeEnum::ENUM_CONTACTWIRESEGMENT;
	}
	else if( std_iequal( arg, ".CORESEGMENT." ) )
	{
		type_object->m_enum = IfcCableSegmentTypeEnum::ENUM_CORESEGMENT;
	}
	else if( std_iequal( arg, ".FIBERSEGMENT." ) )
	{
		type_object->m_enum = IfcCableSegmentTypeEnum::ENUM_FIBERSEGMENT;
	}
	else if( std_iequal( arg, ".FIBERTUBE." ) )
	{
		type_object->m_enum = IfcCableSegmentTypeEnum::ENUM_FIBERTUBE;
	}
	else if( std_iequal( arg, ".OPTICALCABLESEGMENT." ) )
	{
		type_object->m_enum = IfcCableSegmentTypeEnum::ENUM_OPTICALCABLESEGMENT;
	}
	else if( std_iequal( arg, ".STITCHWIRE." ) )
	{
		type_object->m_enum = IfcCableSegmentTypeEnum::ENUM_STITCHWIRE;
	}
	else if( std_iequal( arg, ".WIREPAIRSEGMENT." ) )
	{
		type_object->m_enum = IfcCableSegmentTypeEnum::ENUM_WIREPAIRSEGMENT;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCableSegmentTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCableSegmentTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
