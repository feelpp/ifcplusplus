/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcCoilTypeEnum.h"

// TYPE IfcCoilTypeEnum = ENUMERATION OF	(DXCOOLINGCOIL	,ELECTRICHEATINGCOIL	,GASHEATINGCOIL	,HYDRONICCOIL	,STEAMHEATINGCOIL	,WATERCOOLINGCOIL	,WATERHEATINGCOIL	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IFC4X3::IfcCoilTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCoilTypeEnum> copy_self( new IfcCoilTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IFC4X3::IfcCoilTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCOILTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_DXCOOLINGCOIL:	stream << ".DXCOOLINGCOIL."; break;
		case ENUM_ELECTRICHEATINGCOIL:	stream << ".ELECTRICHEATINGCOIL."; break;
		case ENUM_GASHEATINGCOIL:	stream << ".GASHEATINGCOIL."; break;
		case ENUM_HYDRONICCOIL:	stream << ".HYDRONICCOIL."; break;
		case ENUM_STEAMHEATINGCOIL:	stream << ".STEAMHEATINGCOIL."; break;
		case ENUM_WATERCOOLINGCOIL:	stream << ".WATERCOOLINGCOIL."; break;
		case ENUM_WATERHEATINGCOIL:	stream << ".WATERHEATINGCOIL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcCoilTypeEnum> IFC4X3::IfcCoilTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcCoilTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcCoilTypeEnum>(); }
	shared_ptr<IfcCoilTypeEnum> type_object( new IfcCoilTypeEnum() );
	if( std_iequal( arg, ".DXCOOLINGCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_DXCOOLINGCOIL;
	}
	else if( std_iequal( arg, ".ELECTRICHEATINGCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_ELECTRICHEATINGCOIL;
	}
	else if( std_iequal( arg, ".GASHEATINGCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_GASHEATINGCOIL;
	}
	else if( std_iequal( arg, ".HYDRONICCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_HYDRONICCOIL;
	}
	else if( std_iequal( arg, ".STEAMHEATINGCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_STEAMHEATINGCOIL;
	}
	else if( std_iequal( arg, ".WATERCOOLINGCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_WATERCOOLINGCOIL;
	}
	else if( std_iequal( arg, ".WATERHEATINGCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_WATERHEATINGCOIL;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
