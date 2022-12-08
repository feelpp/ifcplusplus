/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcActorSelect.h"
#include "ifcpp/IFC4X3/include/IfcDateTime.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcLibraryInformation.h"
#include "ifcpp/IFC4X3/include/IfcLibraryReference.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociatesLibrary.h"
#include "ifcpp/IFC4X3/include/IfcText.h"
#include "ifcpp/IFC4X3/include/IfcURIReference.h"

// ENTITY IfcLibraryInformation 
IFC4X3::IfcLibraryInformation::IfcLibraryInformation( int tag ) { m_tag = tag; }
void IFC4X3::IfcLibraryInformation::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCLIBRARYINFORMATION" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Version ) { m_Version->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Publisher ) { m_Publisher->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_VersionDate ) { m_VersionDate->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Location ) { m_Location->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcLibraryInformation::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcLibraryInformation::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcLibraryInformation, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );
	m_Version = IfcLabel::createObjectFromSTEP( args[1], map, errorStream );
	m_Publisher = IfcActorSelect::createObjectFromSTEP( args[2], map, errorStream );
	m_VersionDate = IfcDateTime::createObjectFromSTEP( args[3], map, errorStream );
	m_Location = IfcURIReference::createObjectFromSTEP( args[4], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[5], map, errorStream );
}
void IFC4X3::IfcLibraryInformation::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcExternalInformation::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.emplace_back( std::make_pair( "Version", m_Version ) );
	vec_attributes.emplace_back( std::make_pair( "Publisher", m_Publisher ) );
	vec_attributes.emplace_back( std::make_pair( "VersionDate", m_VersionDate ) );
	vec_attributes.emplace_back( std::make_pair( "Location", m_Location ) );
	vec_attributes.emplace_back( std::make_pair( "Description", m_Description ) );
}
void IFC4X3::IfcLibraryInformation::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcExternalInformation::getAttributesInverse( vec_attributes_inverse );
	if( !m_LibraryInfoForObjects_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> LibraryInfoForObjects_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_LibraryInfoForObjects_inverse.size(); ++i )
		{
			if( !m_LibraryInfoForObjects_inverse[i].expired() )
			{
				LibraryInfoForObjects_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelAssociatesLibrary>( m_LibraryInfoForObjects_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "LibraryInfoForObjects_inverse", LibraryInfoForObjects_inverse_vec_obj ) );
	}
	if( !m_HasLibraryReferences_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> HasLibraryReferences_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasLibraryReferences_inverse.size(); ++i )
		{
			if( !m_HasLibraryReferences_inverse[i].expired() )
			{
				HasLibraryReferences_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcLibraryReference>( m_HasLibraryReferences_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "HasLibraryReferences_inverse", HasLibraryReferences_inverse_vec_obj ) );
	}
}
void IFC4X3::IfcLibraryInformation::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcExternalInformation::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcLibraryInformation::unlinkFromInverseCounterparts()
{
	IfcExternalInformation::unlinkFromInverseCounterparts();
}
