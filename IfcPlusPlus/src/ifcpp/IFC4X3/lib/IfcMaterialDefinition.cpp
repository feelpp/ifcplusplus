/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcMaterialDefinition.h"
#include "ifcpp/IFC4X3/include/IfcMaterialProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociatesMaterial.h"

// ENTITY IfcMaterialDefinition 
IFC4X3::IfcMaterialDefinition::IfcMaterialDefinition( int tag ) { m_tag = tag; }
void IFC4X3::IfcMaterialDefinition::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCMATERIALDEFINITION" << "(";
	stream << ");";
}
void IFC4X3::IfcMaterialDefinition::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcMaterialDefinition::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
}
void IFC4X3::IfcMaterialDefinition::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
}
void IFC4X3::IfcMaterialDefinition::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	shared_ptr<AttributeObjectVector> AssociatedTo_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_AssociatedTo_inverse.size(); ++i )
	{
		if( !m_AssociatedTo_inverse[i].expired() )
		{
			AssociatedTo_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelAssociatesMaterial>( m_AssociatedTo_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "AssociatedTo_inverse", AssociatedTo_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> HasExternalReferences_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_HasExternalReferences_inverse.size(); ++i )
	{
		if( !m_HasExternalReferences_inverse[i].expired() )
		{
			HasExternalReferences_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcExternalReferenceRelationship>( m_HasExternalReferences_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "HasExternalReferences_inverse", HasExternalReferences_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> HasProperties_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_HasProperties_inverse.size(); ++i )
	{
		if( !m_HasProperties_inverse[i].expired() )
		{
			HasProperties_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcMaterialProperties>( m_HasProperties_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "HasProperties_inverse", HasProperties_inverse_vec_obj ) );
}
void IFC4X3::IfcMaterialDefinition::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcMaterialDefinition::unlinkFromInverseCounterparts()
{
}
