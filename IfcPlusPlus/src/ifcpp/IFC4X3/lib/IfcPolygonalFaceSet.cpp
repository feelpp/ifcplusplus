/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcCartesianPointList3D.h"
#include "ifcpp/IFC4X3/include/IfcIndexedColourMap.h"
#include "ifcpp/IFC4X3/include/IfcIndexedPolygonalFace.h"
#include "ifcpp/IFC4X3/include/IfcIndexedTextureMap.h"
#include "ifcpp/IFC4X3/include/IfcPolygonalFaceSet.h"
#include "ifcpp/IFC4X3/include/IfcPositiveInteger.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcPolygonalFaceSet 
IFC4X3::IfcPolygonalFaceSet::IfcPolygonalFaceSet( int tag ) { m_tag = tag; }
void IFC4X3::IfcPolygonalFaceSet::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCPOLYGONALFACESET" << "(";
	if( m_Coordinates ) { stream << "#" << m_Coordinates->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Closed ) { m_Closed->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Faces );
	stream << ",";
	if( m_PnIndex.size() > 0 )
	{
		stream << "(";
		for( size_t ii = 0; ii < m_PnIndex.size(); ++ii )
		{
			if( ii > 0 )
			{
				stream << ",";
			}
			const shared_ptr<IfcPositiveInteger>& type_object = m_PnIndex[ii];
			if( type_object )
			{
				type_object->getStepParameter( stream, false );
			}
			else
			{
				stream << "$";
			}
		}
		stream << ")";
	}
	else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcPolygonalFaceSet::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcPolygonalFaceSet::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPolygonalFaceSet, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Coordinates, map, errorStream );
	m_Closed = IfcBoolean::createObjectFromSTEP( args[1], map, errorStream );
	readEntityReferenceList( args[2], m_Faces, map, errorStream );
	readTypeOfIntegerList( args[3], m_PnIndex );
}
void IFC4X3::IfcPolygonalFaceSet::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcTessellatedFaceSet::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> Faces_vec_object( new AttributeObjectVector() );
	std::copy( m_Faces.begin(), m_Faces.end(), std::back_inserter( Faces_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Faces", Faces_vec_object ) );
	shared_ptr<AttributeObjectVector> PnIndex_vec_object( new AttributeObjectVector() );
	std::copy( m_PnIndex.begin(), m_PnIndex.end(), std::back_inserter( PnIndex_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "PnIndex", PnIndex_vec_object ) );
}
void IFC4X3::IfcPolygonalFaceSet::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcTessellatedFaceSet::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcPolygonalFaceSet::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcTessellatedFaceSet::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcPolygonalFaceSet> ptr_self = dynamic_pointer_cast<IfcPolygonalFaceSet>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcPolygonalFaceSet::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_Faces.size(); ++i )
	{
		if( m_Faces[i] )
		{
			m_Faces[i]->m_ToFaceSet_inverse.emplace_back( ptr_self );
		}
	}
}
void IFC4X3::IfcPolygonalFaceSet::unlinkFromInverseCounterparts()
{
	IfcTessellatedFaceSet::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_Faces.size(); ++i )
	{
		if( m_Faces[i] )
		{
			std::vector<weak_ptr<IfcPolygonalFaceSet> >& ToFaceSet_inverse = m_Faces[i]->m_ToFaceSet_inverse;
			for( auto it_ToFaceSet_inverse = ToFaceSet_inverse.begin(); it_ToFaceSet_inverse != ToFaceSet_inverse.end(); )
			{
				weak_ptr<IfcPolygonalFaceSet> self_candidate_weak = *it_ToFaceSet_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_ToFaceSet_inverse;
					continue;
				}
				shared_ptr<IfcPolygonalFaceSet> self_candidate( *it_ToFaceSet_inverse );
				if( self_candidate.get() == this )
				{
					it_ToFaceSet_inverse= ToFaceSet_inverse.erase( it_ToFaceSet_inverse );
				}
				else
				{
					++it_ToFaceSet_inverse;
				}
			}
		}
	}
}
