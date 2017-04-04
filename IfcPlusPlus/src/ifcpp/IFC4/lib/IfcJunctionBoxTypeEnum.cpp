/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcJunctionBoxTypeEnum.h"

// TYPE IfcJunctionBoxTypeEnum = ENUMERATION OF	(DATA	,POWER	,USERDEFINED	,NOTDEFINED);
IfcJunctionBoxTypeEnum::IfcJunctionBoxTypeEnum() {}
IfcJunctionBoxTypeEnum::~IfcJunctionBoxTypeEnum() {}
shared_ptr<IfcPPObject> IfcJunctionBoxTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcJunctionBoxTypeEnum> copy_self( new IfcJunctionBoxTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcJunctionBoxTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCJUNCTIONBOXTYPEENUM("; }
	if( m_enum == ENUM_DATA )
	{
		stream << ".DATA.";
	}
	else if( m_enum == ENUM_POWER )
	{
		stream << ".POWER.";
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
shared_ptr<IfcJunctionBoxTypeEnum> IfcJunctionBoxTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcJunctionBoxTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcJunctionBoxTypeEnum>(); }
	shared_ptr<IfcJunctionBoxTypeEnum> type_object( new IfcJunctionBoxTypeEnum() );
	if( boost::iequals( arg, L".DATA." ) )
	{
		type_object->m_enum = IfcJunctionBoxTypeEnum::ENUM_DATA;
	}
	else if( boost::iequals( arg, L".POWER." ) )
	{
		type_object->m_enum = IfcJunctionBoxTypeEnum::ENUM_POWER;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcJunctionBoxTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcJunctionBoxTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
