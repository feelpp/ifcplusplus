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
#include "ifcpp/IFC4X3/include/IfcIndexedTextureMap.h"
#include "ifcpp/IFC4X3/include/IfcInteger.h"
#include "ifcpp/IFC4X3/include/IfcParameterValue.h"
#include "ifcpp/IFC4X3/include/IfcPositiveInteger.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"
#include "ifcpp/IFC4X3/include/IfcTriangulatedIrregularNetwork.h"

// ENTITY IfcTriangulatedIrregularNetwork 
IFC4X3::IfcTriangulatedIrregularNetwork::IfcTriangulatedIrregularNetwork( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcTriangulatedIrregularNetwork::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTriangulatedIrregularNetwork> copy_self( new IfcTriangulatedIrregularNetwork() );
	if( m_Coordinates ) { copy_self->m_Coordinates = dynamic_pointer_cast<IfcCartesianPointList3D>( m_Coordinates->getDeepCopy(options) ); }
	if( m_Closed ) { copy_self->m_Closed = dynamic_pointer_cast<IfcBoolean>( m_Closed->getDeepCopy(options) ); }
	copy_self->m_Normals.resize( m_Normals.size() );
	for( size_t ii=0; ii<m_Normals.size(); ++ii )
	{
		std::vector<shared_ptr<IfcParameterValue> >& vec_ii = m_Normals[ii];
		std::vector<shared_ptr<IfcParameterValue> >& vec_ii_target = copy_self->m_Normals[ii];
		for( size_t jj=0; jj<vec_ii.size(); ++jj )
		{
			shared_ptr<IfcParameterValue>& item_jj = vec_ii[jj];
			if( item_jj )
			{
				vec_ii_target.emplace_back( dynamic_pointer_cast<IfcParameterValue>( item_jj->getDeepCopy(options) ) );
			}
		}
	}
	copy_self->m_CoordIndex.resize( m_CoordIndex.size() );
	for( size_t ii=0; ii<m_CoordIndex.size(); ++ii )
	{
		std::vector<shared_ptr<IfcPositiveInteger> >& vec_ii = m_CoordIndex[ii];
		std::vector<shared_ptr<IfcPositiveInteger> >& vec_ii_target = copy_self->m_CoordIndex[ii];
		for( size_t jj=0; jj<vec_ii.size(); ++jj )
		{
			shared_ptr<IfcPositiveInteger>& item_jj = vec_ii[jj];
			if( item_jj )
			{
				vec_ii_target.emplace_back( dynamic_pointer_cast<IfcPositiveInteger>( item_jj->getDeepCopy(options) ) );
			}
		}
	}
	for( size_t ii=0; ii<m_PnIndex.size(); ++ii )
	{
		auto item_ii = m_PnIndex[ii];
		if( item_ii )
		{
			copy_self->m_PnIndex.emplace_back( dynamic_pointer_cast<IfcPositiveInteger>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_Flags.size(); ++ii )
	{
		auto item_ii = m_Flags[ii];
		if( item_ii )
		{
			copy_self->m_Flags.emplace_back( dynamic_pointer_cast<IfcInteger>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IFC4X3::IfcTriangulatedIrregularNetwork::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCTRIANGULATEDIRREGULARNETWORK" << "(";
	if( m_Coordinates ) { stream << "#" << m_Coordinates->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Closed ) { m_Closed->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeTypeOfRealList2D( stream, m_Normals, true );
	stream << ",";
	writeTypeOfIntList2D( stream, m_CoordIndex, false );
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
	stream << ",";
	writeTypeOfIntList( stream, m_Flags, false );
	stream << ");";
}
void IFC4X3::IfcTriangulatedIrregularNetwork::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcTriangulatedIrregularNetwork::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTriangulatedIrregularNetwork, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Coordinates, map, errorStream );
	m_Closed = IfcBoolean::createObjectFromSTEP( args[1], map, errorStream );
	readTypeOfRealList2D( args[2], m_Normals );
	readTypeOfIntegerList2D( args[3], m_CoordIndex );
	readTypeOfIntegerList( args[4], m_PnIndex );
	readTypeOfIntegerList( args[5], m_Flags );
}
void IFC4X3::IfcTriangulatedIrregularNetwork::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcTriangulatedFaceSet::getAttributes( vec_attributes );
	if( !m_Flags.empty() )
	{
		shared_ptr<AttributeObjectVector> Flags_vec_object( new AttributeObjectVector() );
		std::copy( m_Flags.begin(), m_Flags.end(), std::back_inserter( Flags_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "Flags", Flags_vec_object ) );
	}
}
void IFC4X3::IfcTriangulatedIrregularNetwork::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcTriangulatedFaceSet::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcTriangulatedIrregularNetwork::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcTriangulatedFaceSet::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcTriangulatedIrregularNetwork::unlinkFromInverseCounterparts()
{
	IfcTriangulatedFaceSet::unlinkFromInverseCounterparts();
}