/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcDirection.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcReal.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcDirection 
IFC4X3::IfcDirection::IfcDirection( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcDirection::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDirection> copy_self( new IfcDirection() );
	for( size_t ii=0; ii<m_DirectionRatios.size(); ++ii )
	{
		auto item_ii = m_DirectionRatios[ii];
		if( item_ii )
		{
			copy_self->m_DirectionRatios.emplace_back( dynamic_pointer_cast<IfcReal>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IFC4X3::IfcDirection::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCDIRECTION" << "(";
	writeTypeOfRealList( stream, m_DirectionRatios, false );
	stream << ");";
}
void IFC4X3::IfcDirection::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcDirection::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcDirection, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	readTypeOfRealList( args[0], m_DirectionRatios );
}
void IFC4X3::IfcDirection::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	if( !m_DirectionRatios.empty() )
	{
		shared_ptr<AttributeObjectVector> DirectionRatios_vec_object( new AttributeObjectVector() );
		std::copy( m_DirectionRatios.begin(), m_DirectionRatios.end(), std::back_inserter( DirectionRatios_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "DirectionRatios", DirectionRatios_vec_object ) );
	}
}
void IFC4X3::IfcDirection::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcDirection::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcDirection::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
