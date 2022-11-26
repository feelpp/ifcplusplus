/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement.h"
#include "ifcpp/IFC4X3/include/IfcCircle.h"
#include "ifcpp/IFC4X3/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcCircle 
IFC4X3::IfcCircle::IfcCircle( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcCircle::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCircle> copy_self( new IfcCircle() );
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement>( m_Position->getDeepCopy(options) ); }
	if( m_Radius ) { copy_self->m_Radius = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_Radius->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcCircle::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCCIRCLE" << "(";
	if( m_Position ) { m_Position->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_Radius ) { m_Radius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcCircle::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcCircle::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCircle, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Position = IfcAxis2Placement::createObjectFromSTEP( args[0], map, errorStream );
	m_Radius = IfcPositiveLengthMeasure::createObjectFromSTEP( args[1], map, errorStream );
}
void IFC4X3::IfcCircle::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcConic::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Radius", m_Radius ) );
}
void IFC4X3::IfcCircle::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcConic::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcCircle::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcConic::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcCircle::unlinkFromInverseCounterparts()
{
	IfcConic::unlinkFromInverseCounterparts();
}