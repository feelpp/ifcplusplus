/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcEdge.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"
#include "ifcpp/IFC4X3/include/IfcSubedge.h"
#include "ifcpp/IFC4X3/include/IfcVertex.h"

// ENTITY IfcSubedge 
IFC4X3::IfcSubedge::IfcSubedge( int tag ) { m_tag = tag; }
void IFC4X3::IfcSubedge::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCSUBEDGE" << "(";
	if( m_EdgeStart ) { stream << "#" << m_EdgeStart->m_tag; } else { stream << "*"; }
	stream << ",";
	if( m_EdgeEnd ) { stream << "#" << m_EdgeEnd->m_tag; } else { stream << "*"; }
	stream << ",";
	if( m_ParentEdge ) { stream << "#" << m_ParentEdge->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcSubedge::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcSubedge::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_EdgeStart, map, errorStream );}
	if( num_args > 1 ){readEntityReference( args[1], m_EdgeEnd, map, errorStream );}
	if( num_args > 2 ){readEntityReference( args[2], m_ParentEdge, map, errorStream );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcSubedge, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcSubedge::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcEdge::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ParentEdge", m_ParentEdge ) );
}
void IFC4X3::IfcSubedge::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcEdge::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcSubedge::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcEdge::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcSubedge::unlinkFromInverseCounterparts()
{
	IfcEdge::unlinkFromInverseCounterparts();
}
