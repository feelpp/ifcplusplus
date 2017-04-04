/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcCartesianPointList3D.h"
#include "ifcpp/IFC4/include/IfcIndexedColourMap.h"
#include "ifcpp/IFC4/include/IfcIndexedPolygonalFace.h"
#include "ifcpp/IFC4/include/IfcIndexedTextureMap.h"
#include "ifcpp/IFC4/include/IfcPolygonalFaceSet.h"
#include "ifcpp/IFC4/include/IfcPositiveInteger.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcPolygonalFaceSet 
IfcPolygonalFaceSet::IfcPolygonalFaceSet() {}
IfcPolygonalFaceSet::IfcPolygonalFaceSet( int id ) { m_id = id; }
IfcPolygonalFaceSet::~IfcPolygonalFaceSet() {}
shared_ptr<IfcPPObject> IfcPolygonalFaceSet::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPolygonalFaceSet> copy_self( new IfcPolygonalFaceSet() );
	if( m_Coordinates ) { copy_self->m_Coordinates = dynamic_pointer_cast<IfcCartesianPointList3D>( m_Coordinates->getDeepCopy(options) ); }
	if( m_Closed ) { copy_self->m_Closed = dynamic_pointer_cast<IfcBoolean>( m_Closed->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Faces.size(); ++ii )
	{
		auto item_ii = m_Faces[ii];
		if( item_ii )
		{
			copy_self->m_Faces.push_back( dynamic_pointer_cast<IfcIndexedPolygonalFace>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_PnIndex.size(); ++ii )
	{
		auto item_ii = m_PnIndex[ii];
		if( item_ii )
		{
			copy_self->m_PnIndex.push_back( dynamic_pointer_cast<IfcPositiveInteger>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcPolygonalFaceSet::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCPOLYGONALFACESET" << "(";
	if( m_Coordinates ) { stream << "#" << m_Coordinates->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Closed ) { m_Closed->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Faces );
	stream << ",";
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
	stream << ");";
}
void IfcPolygonalFaceSet::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcPolygonalFaceSet::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPolygonalFaceSet, expecting 4, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_Coordinates, map );
	m_Closed = IfcBoolean::createObjectFromSTEP( args[1], map );
	readEntityReferenceList( args[2], m_Faces, map );
	readTypeList( args[3], m_PnIndex, map );
}
void IfcPolygonalFaceSet::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcTessellatedFaceSet::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Closed", m_Closed ) );
	if( m_Faces.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> Faces_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_Faces.begin(), m_Faces.end(), std::back_inserter( Faces_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "Faces", Faces_vec_object ) );
	}
	if( m_PnIndex.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> PnIndex_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_PnIndex.begin(), m_PnIndex.end(), std::back_inserter( PnIndex_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "PnIndex", PnIndex_vec_object ) );
	}
}
void IfcPolygonalFaceSet::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcTessellatedFaceSet::getAttributesInverse( vec_attributes_inverse );
}
void IfcPolygonalFaceSet::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcTessellatedFaceSet::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcPolygonalFaceSet> ptr_self = dynamic_pointer_cast<IfcPolygonalFaceSet>( ptr_self_entity );
	if( !ptr_self ) { throw IfcPPException( "IfcPolygonalFaceSet::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_Faces.size(); ++i )
	{
		if( m_Faces[i] )
		{
			m_Faces[i]->m_ToFaceSet_inverse.push_back( ptr_self );
		}
	}
}
void IfcPolygonalFaceSet::unlinkFromInverseCounterparts()
{
	IfcTessellatedFaceSet::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_Faces.size(); ++i )
	{
		if( m_Faces[i] )
		{
			std::vector<weak_ptr<IfcPolygonalFaceSet> >& ToFaceSet_inverse = m_Faces[i]->m_ToFaceSet_inverse;
			for( auto it_ToFaceSet_inverse = ToFaceSet_inverse.begin(); it_ToFaceSet_inverse != ToFaceSet_inverse.end(); )
			{
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
