/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcOccupantTypeEnum.h"

// TYPE IfcOccupantTypeEnum = ENUMERATION OF	(ASSIGNEE	,ASSIGNOR	,LESSEE	,LESSOR	,LETTINGAGENT	,OWNER	,TENANT	,USERDEFINED	,NOTDEFINED);
IfcOccupantTypeEnum::IfcOccupantTypeEnum() {}
IfcOccupantTypeEnum::~IfcOccupantTypeEnum() {}
shared_ptr<IfcPPObject> IfcOccupantTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcOccupantTypeEnum> copy_self( new IfcOccupantTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcOccupantTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCOCCUPANTTYPEENUM("; }
	if( m_enum == ENUM_ASSIGNEE )
	{
		stream << ".ASSIGNEE.";
	}
	else if( m_enum == ENUM_ASSIGNOR )
	{
		stream << ".ASSIGNOR.";
	}
	else if( m_enum == ENUM_LESSEE )
	{
		stream << ".LESSEE.";
	}
	else if( m_enum == ENUM_LESSOR )
	{
		stream << ".LESSOR.";
	}
	else if( m_enum == ENUM_LETTINGAGENT )
	{
		stream << ".LETTINGAGENT.";
	}
	else if( m_enum == ENUM_OWNER )
	{
		stream << ".OWNER.";
	}
	else if( m_enum == ENUM_TENANT )
	{
		stream << ".TENANT.";
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
shared_ptr<IfcOccupantTypeEnum> IfcOccupantTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcOccupantTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcOccupantTypeEnum>(); }
	shared_ptr<IfcOccupantTypeEnum> type_object( new IfcOccupantTypeEnum() );
	if( boost::iequals( arg, L".ASSIGNEE." ) )
	{
		type_object->m_enum = IfcOccupantTypeEnum::ENUM_ASSIGNEE;
	}
	else if( boost::iequals( arg, L".ASSIGNOR." ) )
	{
		type_object->m_enum = IfcOccupantTypeEnum::ENUM_ASSIGNOR;
	}
	else if( boost::iequals( arg, L".LESSEE." ) )
	{
		type_object->m_enum = IfcOccupantTypeEnum::ENUM_LESSEE;
	}
	else if( boost::iequals( arg, L".LESSOR." ) )
	{
		type_object->m_enum = IfcOccupantTypeEnum::ENUM_LESSOR;
	}
	else if( boost::iequals( arg, L".LETTINGAGENT." ) )
	{
		type_object->m_enum = IfcOccupantTypeEnum::ENUM_LETTINGAGENT;
	}
	else if( boost::iequals( arg, L".OWNER." ) )
	{
		type_object->m_enum = IfcOccupantTypeEnum::ENUM_OWNER;
	}
	else if( boost::iequals( arg, L".TENANT." ) )
	{
		type_object->m_enum = IfcOccupantTypeEnum::ENUM_TENANT;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcOccupantTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcOccupantTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
