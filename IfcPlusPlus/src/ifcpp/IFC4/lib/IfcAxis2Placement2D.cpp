/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement2D.h"
#include "ifcpp/IFC4/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4/include/IfcDirection.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcAxis2Placement2D 
IfcAxis2Placement2D::IfcAxis2Placement2D() {}
IfcAxis2Placement2D::IfcAxis2Placement2D( int id ) { m_id = id; }
IfcAxis2Placement2D::~IfcAxis2Placement2D() {}
shared_ptr<IfcPPObject> IfcAxis2Placement2D::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcAxis2Placement2D> copy_self( new IfcAxis2Placement2D() );
	if( m_Location ) { copy_self->m_Location = dynamic_pointer_cast<IfcCartesianPoint>( m_Location->getDeepCopy(options) ); }
	if( m_RefDirection ) { copy_self->m_RefDirection = dynamic_pointer_cast<IfcDirection>( m_RefDirection->getDeepCopy(options) ); }
	return copy_self;
}
void IfcAxis2Placement2D::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCAXIS2PLACEMENT2D" << "(";
	if( m_Location ) { stream << "#" << m_Location->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_RefDirection ) { stream << "#" << m_RefDirection->m_id; } else { stream << "$"; }
	stream << ");";
}
void IfcAxis2Placement2D::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcAxis2Placement2D::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcAxis2Placement2D, expecting 2, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_Location, map );
	readEntityReference( args[1], m_RefDirection, map );
}
void IfcAxis2Placement2D::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcPlacement::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "RefDirection", m_RefDirection ) );
}
void IfcAxis2Placement2D::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcPlacement::getAttributesInverse( vec_attributes_inverse );
}
void IfcAxis2Placement2D::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcPlacement::setInverseCounterparts( ptr_self_entity );
}
void IfcAxis2Placement2D::unlinkFromInverseCounterparts()
{
	IfcPlacement::unlinkFromInverseCounterparts();
}
