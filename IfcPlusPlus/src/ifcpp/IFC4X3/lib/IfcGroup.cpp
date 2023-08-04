/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcGroup.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRelAggregates.h"
#include "ifcpp/IFC4X3/include/IfcRelAssigns.h"
#include "ifcpp/IFC4X3/include/IfcRelAssignsToGroup.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4X3/include/IfcRelNests.h"
#include "ifcpp/IFC4X3/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcGroup 
IFC4X3::IfcGroup::IfcGroup( int tag ) { m_tag = tag; }
void IFC4X3::IfcGroup::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCGROUP" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcGroup::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcGroup::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args > 4 ){m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream );}
	if( num_args != 5 ){ errorStream << "Wrong parameter count for entity IfcGroup, expecting 5, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcGroup::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcObject::getAttributes( vec_attributes );
}
void IFC4X3::IfcGroup::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcObject::getAttributesInverse( vec_attributes_inverse );
	shared_ptr<AttributeObjectVector> IsGroupedBy_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_IsGroupedBy_inverse.size(); ++i )
	{
		if( !m_IsGroupedBy_inverse[i].expired() )
		{
			IsGroupedBy_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelAssignsToGroup>( m_IsGroupedBy_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "IsGroupedBy_inverse", IsGroupedBy_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> ReferencedInStructures_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_ReferencedInStructures_inverse.size(); ++i )
	{
		if( !m_ReferencedInStructures_inverse[i].expired() )
		{
			ReferencedInStructures_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelReferencedInSpatialStructure>( m_ReferencedInStructures_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "ReferencedInStructures_inverse", ReferencedInStructures_inverse_vec_obj ) );
}
void IFC4X3::IfcGroup::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcObject::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcGroup::unlinkFromInverseCounterparts()
{
	IfcObject::unlinkFromInverseCounterparts();
}
