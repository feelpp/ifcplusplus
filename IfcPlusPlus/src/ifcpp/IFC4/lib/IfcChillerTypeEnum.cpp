/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcChillerTypeEnum.h"

// TYPE IfcChillerTypeEnum = ENUMERATION OF	(AIRCOOLED	,WATERCOOLED	,HEATRECOVERY	,USERDEFINED	,NOTDEFINED);
IfcChillerTypeEnum::IfcChillerTypeEnum() {}
IfcChillerTypeEnum::~IfcChillerTypeEnum() {}
shared_ptr<IfcPPObject> IfcChillerTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcChillerTypeEnum> copy_self( new IfcChillerTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcChillerTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCHILLERTYPEENUM("; }
	if( m_enum == ENUM_AIRCOOLED )
	{
		stream << ".AIRCOOLED.";
	}
	else if( m_enum == ENUM_WATERCOOLED )
	{
		stream << ".WATERCOOLED.";
	}
	else if( m_enum == ENUM_HEATRECOVERY )
	{
		stream << ".HEATRECOVERY.";
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
shared_ptr<IfcChillerTypeEnum> IfcChillerTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcChillerTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcChillerTypeEnum>(); }
	shared_ptr<IfcChillerTypeEnum> type_object( new IfcChillerTypeEnum() );
	if( boost::iequals( arg, L".AIRCOOLED." ) )
	{
		type_object->m_enum = IfcChillerTypeEnum::ENUM_AIRCOOLED;
	}
	else if( boost::iequals( arg, L".WATERCOOLED." ) )
	{
		type_object->m_enum = IfcChillerTypeEnum::ENUM_WATERCOOLED;
	}
	else if( boost::iequals( arg, L".HEATRECOVERY." ) )
	{
		type_object->m_enum = IfcChillerTypeEnum::ENUM_HEATRECOVERY;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcChillerTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcChillerTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
