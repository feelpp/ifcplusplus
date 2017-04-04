/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcConstructionProductResourceTypeEnum.h"

// TYPE IfcConstructionProductResourceTypeEnum = ENUMERATION OF	(ASSEMBLY	,FORMWORK	,USERDEFINED	,NOTDEFINED);
IfcConstructionProductResourceTypeEnum::IfcConstructionProductResourceTypeEnum() {}
IfcConstructionProductResourceTypeEnum::~IfcConstructionProductResourceTypeEnum() {}
shared_ptr<IfcPPObject> IfcConstructionProductResourceTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcConstructionProductResourceTypeEnum> copy_self( new IfcConstructionProductResourceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcConstructionProductResourceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCONSTRUCTIONPRODUCTRESOURCETYPEENUM("; }
	if( m_enum == ENUM_ASSEMBLY )
	{
		stream << ".ASSEMBLY.";
	}
	else if( m_enum == ENUM_FORMWORK )
	{
		stream << ".FORMWORK.";
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
shared_ptr<IfcConstructionProductResourceTypeEnum> IfcConstructionProductResourceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcConstructionProductResourceTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcConstructionProductResourceTypeEnum>(); }
	shared_ptr<IfcConstructionProductResourceTypeEnum> type_object( new IfcConstructionProductResourceTypeEnum() );
	if( boost::iequals( arg, L".ASSEMBLY." ) )
	{
		type_object->m_enum = IfcConstructionProductResourceTypeEnum::ENUM_ASSEMBLY;
	}
	else if( boost::iequals( arg, L".FORMWORK." ) )
	{
		type_object->m_enum = IfcConstructionProductResourceTypeEnum::ENUM_FORMWORK;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcConstructionProductResourceTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcConstructionProductResourceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
