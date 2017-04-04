/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcProjectionElementTypeEnum.h"

// TYPE IfcProjectionElementTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
IfcProjectionElementTypeEnum::IfcProjectionElementTypeEnum() {}
IfcProjectionElementTypeEnum::~IfcProjectionElementTypeEnum() {}
shared_ptr<IfcPPObject> IfcProjectionElementTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcProjectionElementTypeEnum> copy_self( new IfcProjectionElementTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcProjectionElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPROJECTIONELEMENTTYPEENUM("; }
	if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcProjectionElementTypeEnum> IfcProjectionElementTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcProjectionElementTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcProjectionElementTypeEnum>(); }
	shared_ptr<IfcProjectionElementTypeEnum> type_object( new IfcProjectionElementTypeEnum() );
	if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcProjectionElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcProjectionElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
