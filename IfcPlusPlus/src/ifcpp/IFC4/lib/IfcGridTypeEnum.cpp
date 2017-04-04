/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcGridTypeEnum.h"

// TYPE IfcGridTypeEnum = ENUMERATION OF	(RECTANGULAR	,RADIAL	,TRIANGULAR	,IRREGULAR	,USERDEFINED	,NOTDEFINED);
IfcGridTypeEnum::IfcGridTypeEnum() {}
IfcGridTypeEnum::~IfcGridTypeEnum() {}
shared_ptr<IfcPPObject> IfcGridTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcGridTypeEnum> copy_self( new IfcGridTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcGridTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCGRIDTYPEENUM("; }
	if( m_enum == ENUM_RECTANGULAR )
	{
		stream << ".RECTANGULAR.";
	}
	else if( m_enum == ENUM_RADIAL )
	{
		stream << ".RADIAL.";
	}
	else if( m_enum == ENUM_TRIANGULAR )
	{
		stream << ".TRIANGULAR.";
	}
	else if( m_enum == ENUM_IRREGULAR )
	{
		stream << ".IRREGULAR.";
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
shared_ptr<IfcGridTypeEnum> IfcGridTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcGridTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcGridTypeEnum>(); }
	shared_ptr<IfcGridTypeEnum> type_object( new IfcGridTypeEnum() );
	if( boost::iequals( arg, L".RECTANGULAR." ) )
	{
		type_object->m_enum = IfcGridTypeEnum::ENUM_RECTANGULAR;
	}
	else if( boost::iequals( arg, L".RADIAL." ) )
	{
		type_object->m_enum = IfcGridTypeEnum::ENUM_RADIAL;
	}
	else if( boost::iequals( arg, L".TRIANGULAR." ) )
	{
		type_object->m_enum = IfcGridTypeEnum::ENUM_TRIANGULAR;
	}
	else if( boost::iequals( arg, L".IRREGULAR." ) )
	{
		type_object->m_enum = IfcGridTypeEnum::ENUM_IRREGULAR;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcGridTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcGridTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
