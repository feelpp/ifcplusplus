/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4X3/include/IfcPlane.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcPlane 
IFC4X3::IfcPlane::IfcPlane( int tag ) { m_tag = tag; }
void IFC4X3::IfcPlane::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCPLANE" << "(";
	if( m_Position ) { stream << "#" << m_Position->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcPlane::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcPlane::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_Position, map, errorStream );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcPlane, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcPlane::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcElementarySurface::getAttributes( vec_attributes );
}
void IFC4X3::IfcPlane::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcElementarySurface::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcPlane::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcElementarySurface::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcPlane::unlinkFromInverseCounterparts()
{
	IfcElementarySurface::unlinkFromInverseCounterparts();
}
