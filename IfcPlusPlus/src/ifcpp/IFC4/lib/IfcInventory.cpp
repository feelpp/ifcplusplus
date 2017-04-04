/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcActorSelect.h"
#include "ifcpp/IFC4/include/IfcCostValue.h"
#include "ifcpp/IFC4/include/IfcDate.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcInventory.h"
#include "ifcpp/IFC4/include/IfcInventoryTypeEnum.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPerson.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToGroup.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcInventory 
IfcInventory::IfcInventory() {}
IfcInventory::IfcInventory( int id ) { m_id = id; }
IfcInventory::~IfcInventory() {}
shared_ptr<IfcPPObject> IfcInventory::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcInventory> copy_self( new IfcInventory() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = shared_ptr<IfcGloballyUniqueId>(new IfcGloballyUniqueId( createGUID32_wstr().c_str() ) ); }
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
			copy_self->m_ResponsiblePersons.push_back( dynamic_pointer_cast<IfcPerson>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_LastUpdateDate ) { copy_self->m_LastUpdateDate = dynamic_pointer_cast<IfcDate>( m_LastUpdateDate->getDeepCopy(options) ); }
	if( m_CurrentValue ) { copy_self->m_CurrentValue = dynamic_pointer_cast<IfcCostValue>( m_CurrentValue->getDeepCopy(options) ); }
	if( m_OriginalValue ) { copy_self->m_OriginalValue = dynamic_pointer_cast<IfcCostValue>( m_OriginalValue->getDeepCopy(options) ); }
	return copy_self;
}
void IfcInventory::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCINVENTORY" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Jurisdiction ) { m_Jurisdiction->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	writeEntityList( stream, m_ResponsiblePersons );
	stream << ",";
	if( m_LastUpdateDate ) { m_LastUpdateDate->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_CurrentValue ) { stream << "#" << m_CurrentValue->m_id; } else { stream << "$"; }
	stream << ",";
	if( m_OriginalValue ) { stream << "#" << m_OriginalValue->m_id; } else { stream << "$"; }
	stream << ");";
}
void IfcInventory::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcInventory::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 11 ){ std::stringstream err; err << "Wrong parameter count for entity IfcInventory, expecting 11, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	m_PredefinedType = IfcInventoryTypeEnum::createObjectFromSTEP( args[5], map );
	m_Jurisdiction = IfcActorSelect::createObjectFromSTEP( args[6], map );
	readEntityReferenceList( args[7], m_ResponsiblePersons, map );
	m_LastUpdateDate = IfcDate::createObjectFromSTEP( args[8], map );
	readEntityReference( args[9], m_CurrentValue, map );
	readEntityReference( args[10], m_OriginalValue, map );
}
void IfcInventory::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcGroup::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
	vec_attributes.push_back( std::make_pair( "Jurisdiction", m_Jurisdiction ) );
	if( m_ResponsiblePersons.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> ResponsiblePersons_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_ResponsiblePersons.begin(), m_ResponsiblePersons.end(), std::back_inserter( ResponsiblePersons_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "ResponsiblePersons", ResponsiblePersons_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "LastUpdateDate", m_LastUpdateDate ) );
	vec_attributes.push_back( std::make_pair( "CurrentValue", m_CurrentValue ) );
	vec_attributes.push_back( std::make_pair( "OriginalValue", m_OriginalValue ) );
}
void IfcInventory::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcGroup::getAttributesInverse( vec_attributes_inverse );
}
void IfcInventory::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcGroup::setInverseCounterparts( ptr_self_entity );
}
void IfcInventory::unlinkFromInverseCounterparts()
{
	IfcGroup::unlinkFromInverseCounterparts();
}
