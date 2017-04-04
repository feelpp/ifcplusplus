/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcConnectionTypeEnum.h"

// TYPE IfcConnectionTypeEnum = ENUMERATION OF	(ATPATH	,ATSTART	,ATEND	,NOTDEFINED);
IfcConnectionTypeEnum::IfcConnectionTypeEnum() {}
IfcConnectionTypeEnum::~IfcConnectionTypeEnum() {}
shared_ptr<IfcPPObject> IfcConnectionTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcConnectionTypeEnum> copy_self( new IfcConnectionTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcConnectionTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCONNECTIONTYPEENUM("; }
	if( m_enum == ENUM_ATPATH )
	{
		stream << ".ATPATH.";
	}
	else if( m_enum == ENUM_ATSTART )
	{
		stream << ".ATSTART.";
	}
	else if( m_enum == ENUM_ATEND )
	{
		stream << ".ATEND.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcConnectionTypeEnum> IfcConnectionTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcConnectionTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcConnectionTypeEnum>(); }
	shared_ptr<IfcConnectionTypeEnum> type_object( new IfcConnectionTypeEnum() );
	if( boost::iequals( arg, L".ATPATH." ) )
	{
		type_object->m_enum = IfcConnectionTypeEnum::ENUM_ATPATH;
	}
	else if( boost::iequals( arg, L".ATSTART." ) )
	{
		type_object->m_enum = IfcConnectionTypeEnum::ENUM_ATSTART;
	}
	else if( boost::iequals( arg, L".ATEND." ) )
	{
		type_object->m_enum = IfcConnectionTypeEnum::ENUM_ATEND;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcConnectionTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
