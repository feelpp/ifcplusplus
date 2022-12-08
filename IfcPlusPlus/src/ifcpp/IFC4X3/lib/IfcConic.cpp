/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement.h"
#include "ifcpp/IFC4X3/include/IfcConic.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcConic 
IFC4X3::IfcConic::IfcConic( int tag ) { m_tag = tag; }
void IFC4X3::IfcConic::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCCONIC" << "(";
	if( m_Position ) { m_Position->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcConic::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcConic::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcConic, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Position = IfcAxis2Placement::createObjectFromSTEP( args[0], map, errorStream );
}
void IFC4X3::IfcConic::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcCurve::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Position", m_Position ) );
}
void IFC4X3::IfcConic::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcCurve::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcConic::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCurve::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcConic::unlinkFromInverseCounterparts()
{
	IfcCurve::unlinkFromInverseCounterparts();
}
