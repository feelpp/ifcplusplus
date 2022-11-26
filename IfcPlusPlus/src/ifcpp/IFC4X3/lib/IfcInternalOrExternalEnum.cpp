/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcInternalOrExternalEnum.h"

// TYPE IfcInternalOrExternalEnum = ENUMERATION OF	(EXTERNAL	,EXTERNAL_EARTH	,EXTERNAL_FIRE	,EXTERNAL_WATER	,INTERNAL	,NOTDEFINED);
shared_ptr<BuildingObject> IFC4X3::IfcInternalOrExternalEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcInternalOrExternalEnum> copy_self( new IfcInternalOrExternalEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IFC4X3::IfcInternalOrExternalEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCINTERNALOREXTERNALENUM("; }
	switch( m_enum )
	{
		case ENUM_EXTERNAL:	stream << ".EXTERNAL."; break;
		case ENUM_EXTERNAL_EARTH:	stream << ".EXTERNAL_EARTH."; break;
		case ENUM_EXTERNAL_FIRE:	stream << ".EXTERNAL_FIRE."; break;
		case ENUM_EXTERNAL_WATER:	stream << ".EXTERNAL_WATER."; break;
		case ENUM_INTERNAL:	stream << ".INTERNAL."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcInternalOrExternalEnum> IFC4X3::IfcInternalOrExternalEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcInternalOrExternalEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcInternalOrExternalEnum>(); }
	shared_ptr<IfcInternalOrExternalEnum> type_object( new IfcInternalOrExternalEnum() );
	if( std_iequal( arg, ".EXTERNAL." ) )
	{
		type_object->m_enum = IfcInternalOrExternalEnum::ENUM_EXTERNAL;
	}
	else if( std_iequal( arg, ".EXTERNAL_EARTH." ) )
	{
		type_object->m_enum = IfcInternalOrExternalEnum::ENUM_EXTERNAL_EARTH;
	}
	else if( std_iequal( arg, ".EXTERNAL_FIRE." ) )
	{
		type_object->m_enum = IfcInternalOrExternalEnum::ENUM_EXTERNAL_FIRE;
	}
	else if( std_iequal( arg, ".EXTERNAL_WATER." ) )
	{
		type_object->m_enum = IfcInternalOrExternalEnum::ENUM_EXTERNAL_WATER;
	}
	else if( std_iequal( arg, ".INTERNAL." ) )
	{
		type_object->m_enum = IfcInternalOrExternalEnum::ENUM_INTERNAL;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcInternalOrExternalEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
