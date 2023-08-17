/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRelServicesBuildings.h"
#include "ifcpp/IFC4X3/include/IfcSpatialElement.h"
#include "ifcpp/IFC4X3/include/IfcSystem.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcRelServicesBuildings 
IFC4X3::IfcRelServicesBuildings::IfcRelServicesBuildings( int tag ) { m_tag = tag; }
void IFC4X3::IfcRelServicesBuildings::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCRELSERVICESBUILDINGS" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingSystem ) { stream << "#" << m_RelatingSystem->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RelatedBuildings );
	stream << ");";
}
void IFC4X3::IfcRelServicesBuildings::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcRelServicesBuildings::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args > 4 ){readEntityReference( args[4], m_RelatingSystem, map, errorStream );}
	if( num_args > 5 ){readEntityReferenceList( args[5], m_RelatedBuildings, map, errorStream );}
	if( num_args != 6 ){ errorStream << "Wrong parameter count for entity IfcRelServicesBuildings, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcRelServicesBuildings::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcRelConnects::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingSystem", m_RelatingSystem ) );
	shared_ptr<AttributeObjectVector> RelatedBuildings_vec_object( new AttributeObjectVector() );
	std::copy( m_RelatedBuildings.begin(), m_RelatedBuildings.end(), std::back_inserter( RelatedBuildings_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "RelatedBuildings", RelatedBuildings_vec_object ) );
}
void IFC4X3::IfcRelServicesBuildings::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcRelConnects::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcRelServicesBuildings::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelConnects::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelServicesBuildings> ptr_self = dynamic_pointer_cast<IfcRelServicesBuildings>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelServicesBuildings::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedBuildings.size(); ++i )
	{
		if( m_RelatedBuildings[i] )
		{
			m_RelatedBuildings[i]->m_ServicedBySystems_inverse.emplace_back( ptr_self );
		}
	}
	if( m_RelatingSystem )
	{
		m_RelatingSystem->m_ServicesBuildings_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcRelServicesBuildings::unlinkFromInverseCounterparts()
{
	IfcRelConnects::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedBuildings.size(); ++i )
	{
		if( m_RelatedBuildings[i] )
		{
			std::vector<weak_ptr<IfcRelServicesBuildings> >& ServicedBySystems_inverse = m_RelatedBuildings[i]->m_ServicedBySystems_inverse;
			for( auto it_ServicedBySystems_inverse = ServicedBySystems_inverse.begin(); it_ServicedBySystems_inverse != ServicedBySystems_inverse.end(); )
			{
				weak_ptr<IfcRelServicesBuildings> self_candidate_weak = *it_ServicedBySystems_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_ServicedBySystems_inverse;
					continue;
				}
				shared_ptr<IfcRelServicesBuildings> self_candidate( *it_ServicedBySystems_inverse );
				if( self_candidate.get() == this )
				{
					it_ServicedBySystems_inverse= ServicedBySystems_inverse.erase( it_ServicedBySystems_inverse );
				}
				else
				{
					++it_ServicedBySystems_inverse;
				}
			}
		}
	}
	if( m_RelatingSystem )
	{
		std::vector<weak_ptr<IfcRelServicesBuildings> >& ServicesBuildings_inverse = m_RelatingSystem->m_ServicesBuildings_inverse;
		for( auto it_ServicesBuildings_inverse = ServicesBuildings_inverse.begin(); it_ServicesBuildings_inverse != ServicesBuildings_inverse.end(); )
		{
			weak_ptr<IfcRelServicesBuildings> self_candidate_weak = *it_ServicesBuildings_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_ServicesBuildings_inverse;
				continue;
			}
			shared_ptr<IfcRelServicesBuildings> self_candidate( *it_ServicesBuildings_inverse );
			if( self_candidate.get() == this )
			{
				it_ServicesBuildings_inverse= ServicesBuildings_inverse.erase( it_ServicesBuildings_inverse );
			}
			else
			{
				++it_ServicesBuildings_inverse;
			}
		}
	}
}
