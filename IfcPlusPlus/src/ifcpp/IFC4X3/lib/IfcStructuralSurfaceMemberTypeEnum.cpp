/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcStructuralSurfaceMemberTypeEnum.h"

// TYPE IfcStructuralSurfaceMemberTypeEnum = ENUMERATION OF	(BENDING_ELEMENT	,MEMBRANE_ELEMENT	,SHELL	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcStructuralSurfaceMemberTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCSTRUCTURALSURFACEMEMBERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BENDING_ELEMENT:	stream << ".BENDING_ELEMENT."; break;
		case ENUM_MEMBRANE_ELEMENT:	stream << ".MEMBRANE_ELEMENT."; break;
		case ENUM_SHELL:	stream << ".SHELL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcStructuralSurfaceMemberTypeEnum> IFC4X3::IfcStructuralSurfaceMemberTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcStructuralSurfaceMemberTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcStructuralSurfaceMemberTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcStructuralSurfaceMemberTypeEnum>(); }
	shared_ptr<IfcStructuralSurfaceMemberTypeEnum> type_object( new IfcStructuralSurfaceMemberTypeEnum() );
	if( std_iequal( arg, ".BENDING_ELEMENT." ) )
	{
		type_object->m_enum = IfcStructuralSurfaceMemberTypeEnum::ENUM_BENDING_ELEMENT;
	}
	else if( std_iequal( arg, ".MEMBRANE_ELEMENT." ) )
	{
		type_object->m_enum = IfcStructuralSurfaceMemberTypeEnum::ENUM_MEMBRANE_ELEMENT;
	}
	else if( std_iequal( arg, ".SHELL." ) )
	{
		type_object->m_enum = IfcStructuralSurfaceMemberTypeEnum::ENUM_SHELL;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcStructuralSurfaceMemberTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcStructuralSurfaceMemberTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
