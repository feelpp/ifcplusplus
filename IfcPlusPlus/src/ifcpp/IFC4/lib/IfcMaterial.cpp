/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcMaterial.h"
#include "ifcpp/IFC4/include/IfcMaterialDefinitionRepresentation.h"
#include "ifcpp/IFC4/include/IfcMaterialProperties.h"
#include "ifcpp/IFC4/include/IfcMaterialRelationship.h"
#include "ifcpp/IFC4/include/IfcRelAssociatesMaterial.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcMaterial 
IfcMaterial::IfcMaterial() {}
IfcMaterial::IfcMaterial( int id ) { m_id = id; }
IfcMaterial::~IfcMaterial() {}
shared_ptr<IfcPPObject> IfcMaterial::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcMaterial> copy_self( new IfcMaterial() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_Category ) { copy_self->m_Category = dynamic_pointer_cast<IfcLabel>( m_Category->getDeepCopy(options) ); }
	return copy_self;
}
void IfcMaterial::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCMATERIAL" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Category ) { m_Category->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcMaterial::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcMaterial::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMaterial, expecting 3, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	m_Category = IfcLabel::createObjectFromSTEP( args[2], map );
}
void IfcMaterial::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcMaterialDefinition::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.push_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.push_back( std::make_pair( "Category", m_Category ) );
}
void IfcMaterial::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcMaterialDefinition::getAttributesInverse( vec_attributes_inverse );
	if( m_HasRepresentation_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> HasRepresentation_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_HasRepresentation_inverse.size(); ++i )
		{
			if( !m_HasRepresentation_inverse[i].expired() )
			{
				HasRepresentation_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcMaterialDefinitionRepresentation>( m_HasRepresentation_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasRepresentation_inverse", HasRepresentation_inverse_vec_obj ) );
	}
	if( m_IsRelatedWith_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> IsRelatedWith_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_IsRelatedWith_inverse.size(); ++i )
		{
			if( !m_IsRelatedWith_inverse[i].expired() )
			{
				IsRelatedWith_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcMaterialRelationship>( m_IsRelatedWith_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "IsRelatedWith_inverse", IsRelatedWith_inverse_vec_obj ) );
	}
	if( m_RelatesTo_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> RelatesTo_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_RelatesTo_inverse.size(); ++i )
		{
			if( !m_RelatesTo_inverse[i].expired() )
			{
				RelatesTo_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcMaterialRelationship>( m_RelatesTo_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "RelatesTo_inverse", RelatesTo_inverse_vec_obj ) );
	}
}
void IfcMaterial::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcMaterialDefinition::setInverseCounterparts( ptr_self_entity );
}
void IfcMaterial::unlinkFromInverseCounterparts()
{
	IfcMaterialDefinition::unlinkFromInverseCounterparts();
}
