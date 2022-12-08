/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcContext.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcObject.h"
#include "ifcpp/IFC4X3/include/IfcObjectDefinition.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcPropertySetDefinition.h"
#include "ifcpp/IFC4X3/include/IfcPropertySetDefinitionSelect.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcRelDefinesByProperties 
IFC4X3::IfcRelDefinesByProperties::IfcRelDefinesByProperties( int tag ) { m_tag = tag; }
void IFC4X3::IfcRelDefinesByProperties::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCRELDEFINESBYPROPERTIES" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RelatedObjects );
	stream << ",";
	if( m_RelatingPropertyDefinition ) { m_RelatingPropertyDefinition->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcRelDefinesByProperties::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcRelDefinesByProperties::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelDefinesByProperties, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	readEntityReferenceList( args[4], m_RelatedObjects, map, errorStream );
	m_RelatingPropertyDefinition = IfcPropertySetDefinitionSelect::createObjectFromSTEP( args[5], map, errorStream );
}
void IFC4X3::IfcRelDefinesByProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcRelDefines::getAttributes( vec_attributes );
	if( !m_RelatedObjects.empty() )
	{
		shared_ptr<AttributeObjectVector> RelatedObjects_vec_object( new AttributeObjectVector() );
		std::copy( m_RelatedObjects.begin(), m_RelatedObjects.end(), std::back_inserter( RelatedObjects_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "RelatedObjects", RelatedObjects_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "RelatingPropertyDefinition", m_RelatingPropertyDefinition ) );
}
void IFC4X3::IfcRelDefinesByProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcRelDefines::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcRelDefinesByProperties::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelDefines::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelDefinesByProperties> ptr_self = dynamic_pointer_cast<IfcRelDefinesByProperties>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelDefinesByProperties::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedObjects.size(); ++i )
	{
		shared_ptr<IfcContext>  RelatedObjects_IfcContext = dynamic_pointer_cast<IfcContext>( m_RelatedObjects[i] );
		if( RelatedObjects_IfcContext )
		{
			RelatedObjects_IfcContext->m_IsDefinedBy_inverse.emplace_back( ptr_self );
		}
		shared_ptr<IfcObject>  RelatedObjects_IfcObject = dynamic_pointer_cast<IfcObject>( m_RelatedObjects[i] );
		if( RelatedObjects_IfcObject )
		{
			RelatedObjects_IfcObject->m_IsDefinedBy_inverse.emplace_back( ptr_self );
		}
	}
	shared_ptr<IfcPropertySetDefinition>  RelatingPropertyDefinition_IfcPropertySetDefinition = dynamic_pointer_cast<IfcPropertySetDefinition>( m_RelatingPropertyDefinition );
	if( RelatingPropertyDefinition_IfcPropertySetDefinition )
	{
		RelatingPropertyDefinition_IfcPropertySetDefinition->m_DefinesOccurrence_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcRelDefinesByProperties::unlinkFromInverseCounterparts()
{
	IfcRelDefines::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedObjects.size(); ++i )
	{
		shared_ptr<IfcContext>  RelatedObjects_IfcContext = dynamic_pointer_cast<IfcContext>( m_RelatedObjects[i] );
		if( RelatedObjects_IfcContext )
		{
			std::vector<weak_ptr<IfcRelDefinesByProperties> >& IsDefinedBy_inverse = RelatedObjects_IfcContext->m_IsDefinedBy_inverse;
			for( auto it_IsDefinedBy_inverse = IsDefinedBy_inverse.begin(); it_IsDefinedBy_inverse != IsDefinedBy_inverse.end(); )
			{
				weak_ptr<IfcRelDefinesByProperties> self_candidate_weak = *it_IsDefinedBy_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_IsDefinedBy_inverse;
					continue;
				}
				shared_ptr<IfcRelDefinesByProperties> self_candidate( *it_IsDefinedBy_inverse );
				if( self_candidate.get() == this )
				{
					it_IsDefinedBy_inverse= IsDefinedBy_inverse.erase( it_IsDefinedBy_inverse );
				}
				else
				{
					++it_IsDefinedBy_inverse;
				}
			}
		}
		shared_ptr<IfcObject>  RelatedObjects_IfcObject = dynamic_pointer_cast<IfcObject>( m_RelatedObjects[i] );
		if( RelatedObjects_IfcObject )
		{
			std::vector<weak_ptr<IfcRelDefinesByProperties> >& IsDefinedBy_inverse = RelatedObjects_IfcObject->m_IsDefinedBy_inverse;
			for( auto it_IsDefinedBy_inverse = IsDefinedBy_inverse.begin(); it_IsDefinedBy_inverse != IsDefinedBy_inverse.end(); )
			{
				weak_ptr<IfcRelDefinesByProperties> self_candidate_weak = *it_IsDefinedBy_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_IsDefinedBy_inverse;
					continue;
				}
				shared_ptr<IfcRelDefinesByProperties> self_candidate( *it_IsDefinedBy_inverse );
				if( self_candidate.get() == this )
				{
					it_IsDefinedBy_inverse= IsDefinedBy_inverse.erase( it_IsDefinedBy_inverse );
				}
				else
				{
					++it_IsDefinedBy_inverse;
				}
			}
		}
	}
	shared_ptr<IfcPropertySetDefinition>  RelatingPropertyDefinition_IfcPropertySetDefinition = dynamic_pointer_cast<IfcPropertySetDefinition>( m_RelatingPropertyDefinition );
	if( RelatingPropertyDefinition_IfcPropertySetDefinition )
	{
		std::vector<weak_ptr<IfcRelDefinesByProperties> >& DefinesOccurrence_inverse = RelatingPropertyDefinition_IfcPropertySetDefinition->m_DefinesOccurrence_inverse;
		for( auto it_DefinesOccurrence_inverse = DefinesOccurrence_inverse.begin(); it_DefinesOccurrence_inverse != DefinesOccurrence_inverse.end(); )
		{
			weak_ptr<IfcRelDefinesByProperties> self_candidate_weak = *it_DefinesOccurrence_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_DefinesOccurrence_inverse;
				continue;
			}
			shared_ptr<IfcRelDefinesByProperties> self_candidate( *it_DefinesOccurrence_inverse );
			if( self_candidate.get() == this )
			{
				it_DefinesOccurrence_inverse= DefinesOccurrence_inverse.erase( it_DefinesOccurrence_inverse );
			}
			else
			{
				++it_DefinesOccurrence_inverse;
			}
		}
	}
}
