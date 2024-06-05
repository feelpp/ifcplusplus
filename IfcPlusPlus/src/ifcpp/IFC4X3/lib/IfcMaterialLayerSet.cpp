/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcMaterialLayer.h"
#include "ifcpp/IFC4X3/include/IfcMaterialLayerSet.h"
#include "ifcpp/IFC4X3/include/IfcMaterialProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociatesMaterial.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcMaterialLayerSet 
IFC4X3::IfcMaterialLayerSet::IfcMaterialLayerSet( int tag ) { m_tag = tag; }
void IFC4X3::IfcMaterialLayerSet::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCMATERIALLAYERSET" << "(";
	writeEntityList( stream, m_MaterialLayers );
	stream << ",";
	if( m_LayerSetName ) { m_LayerSetName->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcMaterialLayerSet::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcMaterialLayerSet::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReferenceList( args[0], m_MaterialLayers, map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_LayerSetName = IfcLabel::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_Description = IfcText::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcMaterialLayerSet, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcMaterialLayerSet::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcMaterialDefinition::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> MaterialLayers_vec_object( new AttributeObjectVector() );
	std::copy( m_MaterialLayers.begin(), m_MaterialLayers.end(), std::back_inserter( MaterialLayers_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "MaterialLayers", MaterialLayers_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "LayerSetName", m_LayerSetName ) );
	vec_attributes.emplace_back( std::make_pair( "Description", m_Description ) );
}
void IFC4X3::IfcMaterialLayerSet::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcMaterialDefinition::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcMaterialLayerSet::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcMaterialDefinition::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcMaterialLayerSet> ptr_self = dynamic_pointer_cast<IfcMaterialLayerSet>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcMaterialLayerSet::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_MaterialLayers.size(); ++i )
	{
		if( m_MaterialLayers[i] )
		{
			m_MaterialLayers[i]->m_ToMaterialLayerSet_inverse = ptr_self;
		}
	}
}
void IFC4X3::IfcMaterialLayerSet::unlinkFromInverseCounterparts()
{
	IfcMaterialDefinition::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_MaterialLayers.size(); ++i )
	{
		if( m_MaterialLayers[i] )
		{
			if( !m_MaterialLayers[i]->m_ToMaterialLayerSet_inverse.expired() )
			{
				shared_ptr<IfcMaterialLayerSet> self_candidate( m_MaterialLayers[i]->m_ToMaterialLayerSet_inverse );
				if( self_candidate.get() == this )
				{
					weak_ptr<IfcMaterialLayerSet>& self_candidate_weak = m_MaterialLayers[i]->m_ToMaterialLayerSet_inverse;
					self_candidate_weak.reset();
				}
			}
		}
	}
}
