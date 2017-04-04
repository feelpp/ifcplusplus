/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDoorStyleConstructionEnum.h"

// TYPE IfcDoorStyleConstructionEnum = ENUMERATION OF	(ALUMINIUM	,HIGH_GRADE_STEEL	,STEEL	,WOOD	,ALUMINIUM_WOOD	,ALUMINIUM_PLASTIC	,PLASTIC	,USERDEFINED	,NOTDEFINED);
IfcDoorStyleConstructionEnum::IfcDoorStyleConstructionEnum() {}
IfcDoorStyleConstructionEnum::~IfcDoorStyleConstructionEnum() {}
shared_ptr<IfcPPObject> IfcDoorStyleConstructionEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcDoorStyleConstructionEnum> copy_self( new IfcDoorStyleConstructionEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDoorStyleConstructionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDOORSTYLECONSTRUCTIONENUM("; }
	if( m_enum == ENUM_ALUMINIUM )
	{
		stream << ".ALUMINIUM.";
	}
	else if( m_enum == ENUM_HIGH_GRADE_STEEL )
	{
		stream << ".HIGH_GRADE_STEEL.";
	}
	else if( m_enum == ENUM_STEEL )
	{
		stream << ".STEEL.";
	}
	else if( m_enum == ENUM_WOOD )
	{
		stream << ".WOOD.";
	}
	else if( m_enum == ENUM_ALUMINIUM_WOOD )
	{
		stream << ".ALUMINIUM_WOOD.";
	}
	else if( m_enum == ENUM_ALUMINIUM_PLASTIC )
	{
		stream << ".ALUMINIUM_PLASTIC.";
	}
	else if( m_enum == ENUM_PLASTIC )
	{
		stream << ".PLASTIC.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcDoorStyleConstructionEnum> IfcDoorStyleConstructionEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDoorStyleConstructionEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDoorStyleConstructionEnum>(); }
	shared_ptr<IfcDoorStyleConstructionEnum> type_object( new IfcDoorStyleConstructionEnum() );
	if( boost::iequals( arg, L".ALUMINIUM." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_ALUMINIUM;
	}
	else if( boost::iequals( arg, L".HIGH_GRADE_STEEL." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_HIGH_GRADE_STEEL;
	}
	else if( boost::iequals( arg, L".STEEL." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_STEEL;
	}
	else if( boost::iequals( arg, L".WOOD." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_WOOD;
	}
	else if( boost::iequals( arg, L".ALUMINIUM_WOOD." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_ALUMINIUM_WOOD;
	}
	else if( boost::iequals( arg, L".ALUMINIUM_PLASTIC." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_ALUMINIUM_PLASTIC;
	}
	else if( boost::iequals( arg, L".PLASTIC." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_PLASTIC;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
