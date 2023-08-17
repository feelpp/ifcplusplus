/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDistributionChamberElementTypeEnum.h"

// TYPE IfcDistributionChamberElementTypeEnum = ENUMERATION OF	(FORMEDDUCT	,INSPECTIONCHAMBER	,INSPECTIONPIT	,MANHOLE	,METERCHAMBER	,SUMP	,TRENCH	,VALVECHAMBER	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcDistributionChamberElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCDISTRIBUTIONCHAMBERELEMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_FORMEDDUCT:	stream << ".FORMEDDUCT."; break;
		case ENUM_INSPECTIONCHAMBER:	stream << ".INSPECTIONCHAMBER."; break;
		case ENUM_INSPECTIONPIT:	stream << ".INSPECTIONPIT."; break;
		case ENUM_MANHOLE:	stream << ".MANHOLE."; break;
		case ENUM_METERCHAMBER:	stream << ".METERCHAMBER."; break;
		case ENUM_SUMP:	stream << ".SUMP."; break;
		case ENUM_TRENCH:	stream << ".TRENCH."; break;
		case ENUM_VALVECHAMBER:	stream << ".VALVECHAMBER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcDistributionChamberElementTypeEnum> IFC4X3::IfcDistributionChamberElementTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcDistributionChamberElementTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcDistributionChamberElementTypeEnum>(); }
	shared_ptr<IfcDistributionChamberElementTypeEnum> type_object( new IfcDistributionChamberElementTypeEnum() );
	if( std_iequal( arg, ".FORMEDDUCT." ) )
	{
		type_object->m_enum = IfcDistributionChamberElementTypeEnum::ENUM_FORMEDDUCT;
	}
	else if( std_iequal( arg, ".INSPECTIONCHAMBER." ) )
	{
		type_object->m_enum = IfcDistributionChamberElementTypeEnum::ENUM_INSPECTIONCHAMBER;
	}
	else if( std_iequal( arg, ".INSPECTIONPIT." ) )
	{
		type_object->m_enum = IfcDistributionChamberElementTypeEnum::ENUM_INSPECTIONPIT;
	}
	else if( std_iequal( arg, ".MANHOLE." ) )
	{
		type_object->m_enum = IfcDistributionChamberElementTypeEnum::ENUM_MANHOLE;
	}
	else if( std_iequal( arg, ".METERCHAMBER." ) )
	{
		type_object->m_enum = IfcDistributionChamberElementTypeEnum::ENUM_METERCHAMBER;
	}
	else if( std_iequal( arg, ".SUMP." ) )
	{
		type_object->m_enum = IfcDistributionChamberElementTypeEnum::ENUM_SUMP;
	}
	else if( std_iequal( arg, ".TRENCH." ) )
	{
		type_object->m_enum = IfcDistributionChamberElementTypeEnum::ENUM_TRENCH;
	}
	else if( std_iequal( arg, ".VALVECHAMBER." ) )
	{
		type_object->m_enum = IfcDistributionChamberElementTypeEnum::ENUM_VALVECHAMBER;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDistributionChamberElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDistributionChamberElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
