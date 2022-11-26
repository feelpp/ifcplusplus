/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcDefinitionSelect.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcMaterialDefinition.h"
#include "ifcpp/IFC4X3/include/IfcMaterialSelect.h"
#include "ifcpp/IFC4X3/include/IfcMaterialUsageDefinition.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociatesMaterial.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcRelAssociatesMaterial 
IFC4X3::IfcRelAssociatesMaterial::IfcRelAssociatesMaterial( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcRelAssociatesMaterial::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRelAssociatesMaterial> copy_self( new IfcRelAssociatesMaterial() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = make_shared<IfcGloballyUniqueId>( createBase64Uuid().data() ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_RelatedObjects.size(); ++ii )
	{
		auto item_ii = m_RelatedObjects[ii];
		if( item_ii )
		{
			copy_self->m_RelatedObjects.emplace_back( dynamic_pointer_cast<IfcDefinitionSelect>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_RelatingMaterial ) { copy_self->m_RelatingMaterial = dynamic_pointer_cast<IfcMaterialSelect>( m_RelatingMaterial->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcRelAssociatesMaterial::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCRELASSOCIATESMATERIAL" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_RelatedObjects.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcDefinitionSelect>& type_object = m_RelatedObjects[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_RelatingMaterial ) { m_RelatingMaterial->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcRelAssociatesMaterial::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcRelAssociatesMaterial::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelAssociatesMaterial, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	readSelectList( args[4], m_RelatedObjects, map, errorStream );
	m_RelatingMaterial = IfcMaterialSelect::createObjectFromSTEP( args[5], map, errorStream );
}
void IFC4X3::IfcRelAssociatesMaterial::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcRelAssociates::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingMaterial", m_RelatingMaterial ) );
}
void IFC4X3::IfcRelAssociatesMaterial::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcRelAssociates::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcRelAssociatesMaterial::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelAssociates::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelAssociatesMaterial> ptr_self = dynamic_pointer_cast<IfcRelAssociatesMaterial>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelAssociatesMaterial::setInverseCounterparts: type mismatch" ); }
	shared_ptr<IfcMaterialDefinition>  RelatingMaterial_IfcMaterialDefinition = dynamic_pointer_cast<IfcMaterialDefinition>( m_RelatingMaterial );
	if( RelatingMaterial_IfcMaterialDefinition )
	{
		RelatingMaterial_IfcMaterialDefinition->m_AssociatedTo_inverse.emplace_back( ptr_self );
	}
	shared_ptr<IfcMaterialUsageDefinition>  RelatingMaterial_IfcMaterialUsageDefinition = dynamic_pointer_cast<IfcMaterialUsageDefinition>( m_RelatingMaterial );
	if( RelatingMaterial_IfcMaterialUsageDefinition )
	{
		RelatingMaterial_IfcMaterialUsageDefinition->m_AssociatedTo_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcRelAssociatesMaterial::unlinkFromInverseCounterparts()
{
	IfcRelAssociates::unlinkFromInverseCounterparts();
	shared_ptr<IfcMaterialDefinition>  RelatingMaterial_IfcMaterialDefinition = dynamic_pointer_cast<IfcMaterialDefinition>( m_RelatingMaterial );
	if( RelatingMaterial_IfcMaterialDefinition )
	{
		std::vector<weak_ptr<IfcRelAssociatesMaterial> >& AssociatedTo_inverse = RelatingMaterial_IfcMaterialDefinition->m_AssociatedTo_inverse;
		for( auto it_AssociatedTo_inverse = AssociatedTo_inverse.begin(); it_AssociatedTo_inverse != AssociatedTo_inverse.end(); )
		{
			weak_ptr<IfcRelAssociatesMaterial> self_candidate_weak = *it_AssociatedTo_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_AssociatedTo_inverse;
				continue;
			}
			shared_ptr<IfcRelAssociatesMaterial> self_candidate( *it_AssociatedTo_inverse );
			if( self_candidate.get() == this )
			{
				it_AssociatedTo_inverse= AssociatedTo_inverse.erase( it_AssociatedTo_inverse );
			}
			else
			{
				++it_AssociatedTo_inverse;
			}
		}
	}
	shared_ptr<IfcMaterialUsageDefinition>  RelatingMaterial_IfcMaterialUsageDefinition = dynamic_pointer_cast<IfcMaterialUsageDefinition>( m_RelatingMaterial );
	if( RelatingMaterial_IfcMaterialUsageDefinition )
	{
		std::vector<weak_ptr<IfcRelAssociatesMaterial> >& AssociatedTo_inverse = RelatingMaterial_IfcMaterialUsageDefinition->m_AssociatedTo_inverse;
		for( auto it_AssociatedTo_inverse = AssociatedTo_inverse.begin(); it_AssociatedTo_inverse != AssociatedTo_inverse.end(); )
		{
			weak_ptr<IfcRelAssociatesMaterial> self_candidate_weak = *it_AssociatedTo_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_AssociatedTo_inverse;
				continue;
			}
			shared_ptr<IfcRelAssociatesMaterial> self_candidate( *it_AssociatedTo_inverse );
			if( self_candidate.get() == this )
			{
				it_AssociatedTo_inverse= AssociatedTo_inverse.erase( it_AssociatedTo_inverse );
			}
			else
			{
				++it_AssociatedTo_inverse;
			}
		}
	}
}
