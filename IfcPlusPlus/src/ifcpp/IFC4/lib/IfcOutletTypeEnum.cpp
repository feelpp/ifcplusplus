/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcOutletTypeEnum.h"

// TYPE IfcOutletTypeEnum = ENUMERATION OF	(AUDIOVISUALOUTLET	,COMMUNICATIONSOUTLET	,POWEROUTLET	,DATAOUTLET	,TELEPHONEOUTLET	,USERDEFINED	,NOTDEFINED);
IfcOutletTypeEnum::IfcOutletTypeEnum() {}
IfcOutletTypeEnum::~IfcOutletTypeEnum() {}
shared_ptr<IfcPPObject> IfcOutletTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcOutletTypeEnum> copy_self( new IfcOutletTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcOutletTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCOUTLETTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_AUDIOVISUALOUTLET:	stream << ".AUDIOVISUALOUTLET."; break;
		case ENUM_COMMUNICATIONSOUTLET:	stream << ".COMMUNICATIONSOUTLET."; break;
		case ENUM_POWEROUTLET:	stream << ".POWEROUTLET."; break;
		case ENUM_DATAOUTLET:	stream << ".DATAOUTLET."; break;
		case ENUM_TELEPHONEOUTLET:	stream << ".TELEPHONEOUTLET."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcOutletTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_AUDIOVISUALOUTLET:	return L"AUDIOVISUALOUTLET";
		case ENUM_COMMUNICATIONSOUTLET:	return L"COMMUNICATIONSOUTLET";
		case ENUM_POWEROUTLET:	return L"POWEROUTLET";
		case ENUM_DATAOUTLET:	return L"DATAOUTLET";
		case ENUM_TELEPHONEOUTLET:	return L"TELEPHONEOUTLET";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcOutletTypeEnum> IfcOutletTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcOutletTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcOutletTypeEnum>(); }
	shared_ptr<IfcOutletTypeEnum> type_object( new IfcOutletTypeEnum() );
	if( boost::iequals( arg, L".AUDIOVISUALOUTLET." ) )
	{
		type_object->m_enum = IfcOutletTypeEnum::ENUM_AUDIOVISUALOUTLET;
	}
	else if( boost::iequals( arg, L".COMMUNICATIONSOUTLET." ) )
	{
		type_object->m_enum = IfcOutletTypeEnum::ENUM_COMMUNICATIONSOUTLET;
	}
	else if( boost::iequals( arg, L".POWEROUTLET." ) )
	{
		type_object->m_enum = IfcOutletTypeEnum::ENUM_POWEROUTLET;
	}
	else if( boost::iequals( arg, L".DATAOUTLET." ) )
	{
		type_object->m_enum = IfcOutletTypeEnum::ENUM_DATAOUTLET;
	}
	else if( boost::iequals( arg, L".TELEPHONEOUTLET." ) )
	{
		type_object->m_enum = IfcOutletTypeEnum::ENUM_TELEPHONEOUTLET;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcOutletTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcOutletTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}