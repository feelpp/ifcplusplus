/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcActorSelect.h"
#include "ifcpp/IFC4X3/include/IfcCostValue.h"
#include "ifcpp/IFC4X3/include/IfcDate.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcInventory.h"
#include "ifcpp/IFC4X3/include/IfcInventoryTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcPerson.h"
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

// ENTITY IfcInventory 
IFC4X3::IfcInventory::IfcInventory( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcInventory::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcInventory> copy_self( new IfcInventory() );
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
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_PredefinedType ) { copy_self->m_PredefinedType = dynamic_pointer_cast<IfcInventoryTypeEnum>( m_PredefinedType->getDeepCopy(options) ); }
	if( m_Jurisdiction ) { copy_self->m_Jurisdiction = dynamic_pointer_cast<IfcActorSelect>( m_Jurisdiction->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_ResponsiblePersons.size(); ++ii )
	{
		auto item_ii = m_ResponsiblePersons[ii];
		if( item_ii )
		{
			copy_self->m_ResponsiblePersons.emplace_back( dynamic_pointer_cast<IfcPerson>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_LastUpdateDate ) { copy_self->m_LastUpdateDate = dynamic_pointer_cast<IfcDate>( m_LastUpdateDate->getDeepCopy(options) ); }
	if( m_CurrentValue ) { copy_self->m_CurrentValue = dynamic_pointer_cast<IfcCostValue>( m_CurrentValue->getDeepCopy(options) ); }
	if( m_OriginalValue ) { copy_self->m_OriginalValue = dynamic_pointer_cast<IfcCostValue>( m_OriginalValue->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcInventory::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCINVENTORY" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Jurisdiction ) { m_Jurisdiction->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	writeEntityList( stream, m_ResponsiblePersons );
	stream << ",";
	if( m_LastUpdateDate ) { m_LastUpdateDate->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_CurrentValue ) { stream << "#" << m_CurrentValue->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_OriginalValue ) { stream << "#" << m_OriginalValue->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcInventory::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcInventory::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 11 ){ std::stringstream err; err << "Wrong parameter count for entity IfcInventory, expecting 11, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream );
	m_PredefinedType = IfcInventoryTypeEnum::createObjectFromSTEP( args[5], map, errorStream );
	m_Jurisdiction = IfcActorSelect::createObjectFromSTEP( args[6], map, errorStream );
	readEntityReferenceList( args[7], m_ResponsiblePersons, map, errorStream );
	m_LastUpdateDate = IfcDate::createObjectFromSTEP( args[8], map, errorStream );
	readEntityReference( args[9], m_CurrentValue, map, errorStream );
	readEntityReference( args[10], m_OriginalValue, map, errorStream );
}
void IFC4X3::IfcInventory::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcGroup::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
	vec_attributes.emplace_back( std::make_pair( "Jurisdiction", m_Jurisdiction ) );
	if( !m_ResponsiblePersons.empty() )
	{
		shared_ptr<AttributeObjectVector> ResponsiblePersons_vec_object( new AttributeObjectVector() );
		std::copy( m_ResponsiblePersons.begin(), m_ResponsiblePersons.end(), std::back_inserter( ResponsiblePersons_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "ResponsiblePersons", ResponsiblePersons_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "LastUpdateDate", m_LastUpdateDate ) );
	vec_attributes.emplace_back( std::make_pair( "CurrentValue", m_CurrentValue ) );
	vec_attributes.emplace_back( std::make_pair( "OriginalValue", m_OriginalValue ) );
}
void IFC4X3::IfcInventory::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcGroup::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcInventory::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGroup::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcInventory::unlinkFromInverseCounterparts()
{
	IfcGroup::unlinkFromInverseCounterparts();
}
