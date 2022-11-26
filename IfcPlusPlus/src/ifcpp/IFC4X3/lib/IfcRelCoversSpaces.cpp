/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcCovering.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRelCoversSpaces.h"
#include "ifcpp/IFC4X3/include/IfcSpace.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcRelCoversSpaces 
IFC4X3::IfcRelCoversSpaces::IfcRelCoversSpaces( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcRelCoversSpaces::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRelCoversSpaces> copy_self( new IfcRelCoversSpaces() );
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
	if( m_RelatingSpace ) { copy_self->m_RelatingSpace = dynamic_pointer_cast<IfcSpace>( m_RelatingSpace->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_RelatedCoverings.size(); ++ii )
	{
		auto item_ii = m_RelatedCoverings[ii];
		if( item_ii )
		{
			copy_self->m_RelatedCoverings.emplace_back( dynamic_pointer_cast<IfcCovering>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IFC4X3::IfcRelCoversSpaces::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCRELCOVERSSPACES" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingSpace ) { stream << "#" << m_RelatingSpace->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RelatedCoverings );
	stream << ");";
}
void IFC4X3::IfcRelCoversSpaces::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcRelCoversSpaces::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelCoversSpaces, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	readEntityReference( args[4], m_RelatingSpace, map, errorStream );
	readEntityReferenceList( args[5], m_RelatedCoverings, map, errorStream );
}
void IFC4X3::IfcRelCoversSpaces::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcRelConnects::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingSpace", m_RelatingSpace ) );
	if( !m_RelatedCoverings.empty() )
	{
		shared_ptr<AttributeObjectVector> RelatedCoverings_vec_object( new AttributeObjectVector() );
		std::copy( m_RelatedCoverings.begin(), m_RelatedCoverings.end(), std::back_inserter( RelatedCoverings_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "RelatedCoverings", RelatedCoverings_vec_object ) );
	}
}
void IFC4X3::IfcRelCoversSpaces::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcRelConnects::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcRelCoversSpaces::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelConnects::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelCoversSpaces> ptr_self = dynamic_pointer_cast<IfcRelCoversSpaces>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelCoversSpaces::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedCoverings.size(); ++i )
	{
		if( m_RelatedCoverings[i] )
		{
			m_RelatedCoverings[i]->m_CoversSpaces_inverse.emplace_back( ptr_self );
		}
	}
	if( m_RelatingSpace )
	{
		m_RelatingSpace->m_HasCoverings_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcRelCoversSpaces::unlinkFromInverseCounterparts()
{
	IfcRelConnects::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedCoverings.size(); ++i )
	{
		if( m_RelatedCoverings[i] )
		{
			std::vector<weak_ptr<IfcRelCoversSpaces> >& CoversSpaces_inverse = m_RelatedCoverings[i]->m_CoversSpaces_inverse;
			for( auto it_CoversSpaces_inverse = CoversSpaces_inverse.begin(); it_CoversSpaces_inverse != CoversSpaces_inverse.end(); )
			{
				weak_ptr<IfcRelCoversSpaces> self_candidate_weak = *it_CoversSpaces_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_CoversSpaces_inverse;
					continue;
				}
				shared_ptr<IfcRelCoversSpaces> self_candidate( *it_CoversSpaces_inverse );
				if( self_candidate.get() == this )
				{
					it_CoversSpaces_inverse= CoversSpaces_inverse.erase( it_CoversSpaces_inverse );
				}
				else
				{
					++it_CoversSpaces_inverse;
				}
			}
		}
	}
	if( m_RelatingSpace )
	{
		std::vector<weak_ptr<IfcRelCoversSpaces> >& HasCoverings_inverse = m_RelatingSpace->m_HasCoverings_inverse;
		for( auto it_HasCoverings_inverse = HasCoverings_inverse.begin(); it_HasCoverings_inverse != HasCoverings_inverse.end(); )
		{
			weak_ptr<IfcRelCoversSpaces> self_candidate_weak = *it_HasCoverings_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_HasCoverings_inverse;
				continue;
			}
			shared_ptr<IfcRelCoversSpaces> self_candidate( *it_HasCoverings_inverse );
			if( self_candidate.get() == this )
			{
				it_HasCoverings_inverse= HasCoverings_inverse.erase( it_HasCoverings_inverse );
			}
			else
			{
				++it_HasCoverings_inverse;
			}
		}
	}
}