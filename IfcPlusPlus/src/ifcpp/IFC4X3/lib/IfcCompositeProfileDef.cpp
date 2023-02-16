/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcCompositeProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcProfileProperties.h"
#include "ifcpp/IFC4X3/include/IfcProfileTypeEnum.h"

// ENTITY IfcCompositeProfileDef 
IFC4X3::IfcCompositeProfileDef::IfcCompositeProfileDef( int tag ) { m_tag = tag; }
void IFC4X3::IfcCompositeProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCCOMPOSITEPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Profiles );
	stream << ",";
	if( m_Label ) { m_Label->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcCompositeProfileDef::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcCompositeProfileDef::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCompositeProfileDef, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map, errorStream );
	m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map, errorStream );
	readEntityReferenceList( args[2], m_Profiles, map, errorStream );
	m_Label = IfcLabel::createObjectFromSTEP( args[3], map, errorStream );
}
void IFC4X3::IfcCompositeProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcProfileDef::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> Profiles_vec_object( new AttributeObjectVector() );
	std::copy( m_Profiles.begin(), m_Profiles.end(), std::back_inserter( Profiles_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Profiles", Profiles_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "Label", m_Label ) );
}
void IFC4X3::IfcCompositeProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcCompositeProfileDef::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcCompositeProfileDef::unlinkFromInverseCounterparts()
{
	IfcProfileDef::unlinkFromInverseCounterparts();
}
