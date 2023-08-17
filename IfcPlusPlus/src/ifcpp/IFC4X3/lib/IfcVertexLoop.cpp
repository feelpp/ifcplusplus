/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"
#include "ifcpp/IFC4X3/include/IfcVertex.h"
#include "ifcpp/IFC4X3/include/IfcVertexLoop.h"

// ENTITY IfcVertexLoop 
IFC4X3::IfcVertexLoop::IfcVertexLoop( int tag ) { m_tag = tag; }
void IFC4X3::IfcVertexLoop::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCVERTEXLOOP" << "(";
	if( m_LoopVertex ) { stream << "#" << m_LoopVertex->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcVertexLoop::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcVertexLoop::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_LoopVertex, map, errorStream );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcVertexLoop, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcVertexLoop::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcLoop::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "LoopVertex", m_LoopVertex ) );
}
void IFC4X3::IfcVertexLoop::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcLoop::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcVertexLoop::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcLoop::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcVertexLoop::unlinkFromInverseCounterparts()
{
	IfcLoop::unlinkFromInverseCounterparts();
}
