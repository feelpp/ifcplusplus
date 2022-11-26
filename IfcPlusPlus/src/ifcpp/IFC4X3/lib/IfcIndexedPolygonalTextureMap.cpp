/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcIndexedPolygonalTextureMap.h"
#include "ifcpp/IFC4X3/include/IfcSurfaceTexture.h"
#include "ifcpp/IFC4X3/include/IfcTessellatedFaceSet.h"
#include "ifcpp/IFC4X3/include/IfcTextureCoordinateIndices.h"
#include "ifcpp/IFC4X3/include/IfcTextureVertexList.h"

// ENTITY IfcIndexedPolygonalTextureMap 
IFC4X3::IfcIndexedPolygonalTextureMap::IfcIndexedPolygonalTextureMap( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcIndexedPolygonalTextureMap::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcIndexedPolygonalTextureMap> copy_self( new IfcIndexedPolygonalTextureMap() );
	for( size_t ii=0; ii<m_Maps.size(); ++ii )
	{
		auto item_ii = m_Maps[ii];
		if( item_ii )
		{
			copy_self->m_Maps.emplace_back( dynamic_pointer_cast<IfcSurfaceTexture>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_MappedTo ) { copy_self->m_MappedTo = dynamic_pointer_cast<IfcTessellatedFaceSet>( m_MappedTo->getDeepCopy(options) ); }
	if( m_TexCoords ) { copy_self->m_TexCoords = dynamic_pointer_cast<IfcTextureVertexList>( m_TexCoords->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_TexCoordIndices.size(); ++ii )
	{
		auto item_ii = m_TexCoordIndices[ii];
		if( item_ii )
		{
			copy_self->m_TexCoordIndices.emplace_back( dynamic_pointer_cast<IfcTextureCoordinateIndices>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IFC4X3::IfcIndexedPolygonalTextureMap::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCINDEXEDPOLYGONALTEXTUREMAP" << "(";
	writeEntityList( stream, m_Maps );
	stream << ",";
	if( m_MappedTo ) { stream << "#" << m_MappedTo->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_TexCoords ) { stream << "#" << m_TexCoords->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_TexCoordIndices );
	stream << ");";
}
void IFC4X3::IfcIndexedPolygonalTextureMap::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcIndexedPolygonalTextureMap::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcIndexedPolygonalTextureMap, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_Maps, map, errorStream );
	readEntityReference( args[1], m_MappedTo, map, errorStream );
	readEntityReference( args[2], m_TexCoords, map, errorStream );
	readEntityReferenceList( args[3], m_TexCoordIndices, map, errorStream );
}
void IFC4X3::IfcIndexedPolygonalTextureMap::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcIndexedTextureMap::getAttributes( vec_attributes );
	if( !m_TexCoordIndices.empty() )
	{
		shared_ptr<AttributeObjectVector> TexCoordIndices_vec_object( new AttributeObjectVector() );
		std::copy( m_TexCoordIndices.begin(), m_TexCoordIndices.end(), std::back_inserter( TexCoordIndices_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "TexCoordIndices", TexCoordIndices_vec_object ) );
	}
}
void IFC4X3::IfcIndexedPolygonalTextureMap::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcIndexedTextureMap::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcIndexedPolygonalTextureMap::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcIndexedTextureMap::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcIndexedPolygonalTextureMap> ptr_self = dynamic_pointer_cast<IfcIndexedPolygonalTextureMap>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcIndexedPolygonalTextureMap::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_TexCoordIndices.size(); ++i )
	{
		if( m_TexCoordIndices[i] )
		{
			m_TexCoordIndices[i]->m_ToTexMap_inverse = ptr_self;
		}
	}
}
void IFC4X3::IfcIndexedPolygonalTextureMap::unlinkFromInverseCounterparts()
{
	IfcIndexedTextureMap::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_TexCoordIndices.size(); ++i )
	{
		if( m_TexCoordIndices[i] )
		{
			if( !m_TexCoordIndices[i]->m_ToTexMap_inverse.expired() )
			{
				shared_ptr<IfcIndexedPolygonalTextureMap> self_candidate( m_TexCoordIndices[i]->m_ToTexMap_inverse );
				if( self_candidate.get() == this )
				{
					weak_ptr<IfcIndexedPolygonalTextureMap>& self_candidate_weak = m_TexCoordIndices[i]->m_ToTexMap_inverse;
					self_candidate_weak.reset();
				}
			}
		}
	}
}
