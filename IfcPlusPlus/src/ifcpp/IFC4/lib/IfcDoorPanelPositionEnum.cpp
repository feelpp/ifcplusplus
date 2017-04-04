/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDoorPanelPositionEnum.h"

// TYPE IfcDoorPanelPositionEnum = ENUMERATION OF	(LEFT	,MIDDLE	,RIGHT	,NOTDEFINED);
IfcDoorPanelPositionEnum::IfcDoorPanelPositionEnum() {}
IfcDoorPanelPositionEnum::~IfcDoorPanelPositionEnum() {}
shared_ptr<IfcPPObject> IfcDoorPanelPositionEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcDoorPanelPositionEnum> copy_self( new IfcDoorPanelPositionEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDoorPanelPositionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDOORPANELPOSITIONENUM("; }
	if( m_enum == ENUM_LEFT )
	{
		stream << ".LEFT.";
	}
	else if( m_enum == ENUM_MIDDLE )
	{
		stream << ".MIDDLE.";
	}
	else if( m_enum == ENUM_RIGHT )
	{
		stream << ".RIGHT.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcDoorPanelPositionEnum> IfcDoorPanelPositionEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDoorPanelPositionEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDoorPanelPositionEnum>(); }
	shared_ptr<IfcDoorPanelPositionEnum> type_object( new IfcDoorPanelPositionEnum() );
	if( boost::iequals( arg, L".LEFT." ) )
	{
		type_object->m_enum = IfcDoorPanelPositionEnum::ENUM_LEFT;
	}
	else if( boost::iequals( arg, L".MIDDLE." ) )
	{
		type_object->m_enum = IfcDoorPanelPositionEnum::ENUM_MIDDLE;
	}
	else if( boost::iequals( arg, L".RIGHT." ) )
	{
		type_object->m_enum = IfcDoorPanelPositionEnum::ENUM_RIGHT;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDoorPanelPositionEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
