/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcProduct.h"
#include "ifcpp/IFC4X3/include/IfcProductDefinitionShape.h"
#include "ifcpp/IFC4X3/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4X3/include/IfcRelAggregates.h"
#include "ifcpp/IFC4X3/include/IfcRelAssigns.h"
#include "ifcpp/IFC4X3/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4X3/include/IfcRelNests.h"
#include "ifcpp/IFC4X3/include/IfcRelPositions.h"
#include "ifcpp/IFC4X3/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcProduct 
IFC4X3::IfcProduct::IfcProduct( int tag ) { m_tag = tag; }
void IFC4X3::IfcProduct::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCPRODUCT" << "(";
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
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcProduct::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcProduct::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcProduct, expecting 7, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream );
	readEntityReference( args[5], m_ObjectPlacement, map, errorStream );
	readEntityReference( args[6], m_Representation, map, errorStream );
}
void IFC4X3::IfcProduct::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcObject::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ObjectPlacement", m_ObjectPlacement ) );
	vec_attributes.emplace_back( std::make_pair( "Representation", m_Representation ) );
}
void IFC4X3::IfcProduct::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcObject::getAttributesInverse( vec_attributes_inverse );
	if( !m_ReferencedBy_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ReferencedBy_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ReferencedBy_inverse.size(); ++i )
		{
			if( !m_ReferencedBy_inverse[i].expired() )
			{
				ReferencedBy_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelAssignsToProduct>( m_ReferencedBy_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ReferencedBy_inverse", ReferencedBy_inverse_vec_obj ) );
	}
	if( !m_PositionedRelativeTo_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> PositionedRelativeTo_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_PositionedRelativeTo_inverse.size(); ++i )
		{
			if( !m_PositionedRelativeTo_inverse[i].expired() )
			{
				PositionedRelativeTo_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelPositions>( m_PositionedRelativeTo_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "PositionedRelativeTo_inverse", PositionedRelativeTo_inverse_vec_obj ) );
	}
	if( !m_ReferencedInStructures_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ReferencedInStructures_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ReferencedInStructures_inverse.size(); ++i )
		{
			if( !m_ReferencedInStructures_inverse[i].expired() )
			{
				ReferencedInStructures_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelReferencedInSpatialStructure>( m_ReferencedInStructures_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ReferencedInStructures_inverse", ReferencedInStructures_inverse_vec_obj ) );
	}
}
void IFC4X3::IfcProduct::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcObject::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcProduct> ptr_self = dynamic_pointer_cast<IfcProduct>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcProduct::setInverseCounterparts: type mismatch" ); }
	if( m_ObjectPlacement )
	{
		m_ObjectPlacement->m_PlacesObject_inverse.emplace_back( ptr_self );
	}
	shared_ptr<IfcProductDefinitionShape>  Representation_IfcProductDefinitionShape = dynamic_pointer_cast<IfcProductDefinitionShape>( m_Representation );
	if( Representation_IfcProductDefinitionShape )
	{
		Representation_IfcProductDefinitionShape->m_ShapeOfProduct_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcProduct::unlinkFromInverseCounterparts()
{
	IfcObject::unlinkFromInverseCounterparts();
	if( m_ObjectPlacement )
	{
		std::vector<weak_ptr<IfcProduct> >& PlacesObject_inverse = m_ObjectPlacement->m_PlacesObject_inverse;
		for( auto it_PlacesObject_inverse = PlacesObject_inverse.begin(); it_PlacesObject_inverse != PlacesObject_inverse.end(); )
		{
			weak_ptr<IfcProduct> self_candidate_weak = *it_PlacesObject_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_PlacesObject_inverse;
				continue;
			}
			shared_ptr<IfcProduct> self_candidate( *it_PlacesObject_inverse );
			if( self_candidate.get() == this )
			{
				it_PlacesObject_inverse= PlacesObject_inverse.erase( it_PlacesObject_inverse );
			}
			else
			{
				++it_PlacesObject_inverse;
			}
		}
	}
	shared_ptr<IfcProductDefinitionShape>  Representation_IfcProductDefinitionShape = dynamic_pointer_cast<IfcProductDefinitionShape>( m_Representation );
	if( Representation_IfcProductDefinitionShape )
	{
		std::vector<weak_ptr<IfcProduct> >& ShapeOfProduct_inverse = Representation_IfcProductDefinitionShape->m_ShapeOfProduct_inverse;
		for( auto it_ShapeOfProduct_inverse = ShapeOfProduct_inverse.begin(); it_ShapeOfProduct_inverse != ShapeOfProduct_inverse.end(); )
		{
			weak_ptr<IfcProduct> self_candidate_weak = *it_ShapeOfProduct_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_ShapeOfProduct_inverse;
				continue;
			}
			shared_ptr<IfcProduct> self_candidate( *it_ShapeOfProduct_inverse );
			if( self_candidate.get() == this )
			{
				it_ShapeOfProduct_inverse= ShapeOfProduct_inverse.erase( it_ShapeOfProduct_inverse );
			}
			else
			{
				++it_ShapeOfProduct_inverse;
			}
		}
	}
}
