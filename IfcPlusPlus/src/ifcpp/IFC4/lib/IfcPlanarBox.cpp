/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPlanarBox.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcPlanarBox 
IfcPlanarBox::IfcPlanarBox() {}
IfcPlanarBox::IfcPlanarBox( int id ) { m_id = id; }
IfcPlanarBox::~IfcPlanarBox() {}
shared_ptr<IfcPPObject> IfcPlanarBox::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPlanarBox> copy_self( new IfcPlanarBox() );
	if( m_SizeInX ) { copy_self->m_SizeInX = dynamic_pointer_cast<IfcLengthMeasure>( m_SizeInX->getDeepCopy(options) ); }
	if( m_SizeInY ) { copy_self->m_SizeInY = dynamic_pointer_cast<IfcLengthMeasure>( m_SizeInY->getDeepCopy(options) ); }
	if( m_Placement ) { copy_self->m_Placement = dynamic_pointer_cast<IfcAxis2Placement>( m_Placement->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPlanarBox::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCPLANARBOX" << "(";
	if( m_SizeInX ) { m_SizeInX->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_SizeInY ) { m_SizeInY->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Placement ) { m_Placement->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcPlanarBox::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcPlanarBox::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPlanarBox, expecting 3, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_SizeInX = IfcLengthMeasure::createObjectFromSTEP( args[0], map );
	m_SizeInY = IfcLengthMeasure::createObjectFromSTEP( args[1], map );
	m_Placement = IfcAxis2Placement::createObjectFromSTEP( args[2], map );
}
void IfcPlanarBox::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcPlanarExtent::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Placement", m_Placement ) );
}
void IfcPlanarBox::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcPlanarExtent::getAttributesInverse( vec_attributes_inverse );
}
void IfcPlanarBox::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcPlanarExtent::setInverseCounterparts( ptr_self_entity );
}
void IfcPlanarBox::unlinkFromInverseCounterparts()
{
	IfcPlanarExtent::unlinkFromInverseCounterparts();
}
