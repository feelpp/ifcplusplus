/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcMotorConnectionTypeEnum.h"

// TYPE IfcMotorConnectionTypeEnum = ENUMERATION OF	(BELTDRIVE	,COUPLING	,DIRECTDRIVE	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IFC4X3::IfcMotorConnectionTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMotorConnectionTypeEnum> copy_self( new IfcMotorConnectionTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IFC4X3::IfcMotorConnectionTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMOTORCONNECTIONTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BELTDRIVE:	stream << ".BELTDRIVE."; break;
		case ENUM_COUPLING:	stream << ".COUPLING."; break;
		case ENUM_DIRECTDRIVE:	stream << ".DIRECTDRIVE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcMotorConnectionTypeEnum> IFC4X3::IfcMotorConnectionTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcMotorConnectionTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcMotorConnectionTypeEnum>(); }
	shared_ptr<IfcMotorConnectionTypeEnum> type_object( new IfcMotorConnectionTypeEnum() );
	if( std_iequal( arg, ".BELTDRIVE." ) )
	{
		type_object->m_enum = IfcMotorConnectionTypeEnum::ENUM_BELTDRIVE;
	}
	else if( std_iequal( arg, ".COUPLING." ) )
	{
		type_object->m_enum = IfcMotorConnectionTypeEnum::ENUM_COUPLING;
	}
	else if( std_iequal( arg, ".DIRECTDRIVE." ) )
	{
		type_object->m_enum = IfcMotorConnectionTypeEnum::ENUM_DIRECTDRIVE;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcMotorConnectionTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcMotorConnectionTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}