/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcPileConstructionEnum.h"

// TYPE IfcPileConstructionEnum = ENUMERATION OF	(CAST_IN_PLACE	,COMPOSITE	,PRECAST_CONCRETE	,PREFAB_STEEL	,USERDEFINED	,NOTDEFINED);
IfcPileConstructionEnum::IfcPileConstructionEnum() {}
IfcPileConstructionEnum::~IfcPileConstructionEnum() {}
shared_ptr<IfcPPObject> IfcPileConstructionEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPileConstructionEnum> copy_self( new IfcPileConstructionEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcPileConstructionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPILECONSTRUCTIONENUM("; }
	if( m_enum == ENUM_CAST_IN_PLACE )
	{
		stream << ".CAST_IN_PLACE.";
	}
	else if( m_enum == ENUM_COMPOSITE )
	{
		stream << ".COMPOSITE.";
	}
	else if( m_enum == ENUM_PRECAST_CONCRETE )
	{
		stream << ".PRECAST_CONCRETE.";
	}
	else if( m_enum == ENUM_PREFAB_STEEL )
	{
		stream << ".PREFAB_STEEL.";
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
shared_ptr<IfcPileConstructionEnum> IfcPileConstructionEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPileConstructionEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPileConstructionEnum>(); }
	shared_ptr<IfcPileConstructionEnum> type_object( new IfcPileConstructionEnum() );
	if( boost::iequals( arg, L".CAST_IN_PLACE." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_CAST_IN_PLACE;
	}
	else if( boost::iequals( arg, L".COMPOSITE." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_COMPOSITE;
	}
	else if( boost::iequals( arg, L".PRECAST_CONCRETE." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_PRECAST_CONCRETE;
	}
	else if( boost::iequals( arg, L".PREFAB_STEEL." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_PREFAB_STEEL;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
