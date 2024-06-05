/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcCurve.h"
#include "ifcpp/IFC4X3/include/IfcEdgeCurve.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"
#include "ifcpp/IFC4X3/include/IfcVertex.h"

// ENTITY IfcEdgeCurve 
IFC4X3::IfcEdgeCurve::IfcEdgeCurve( int tag ) { m_tag = tag; }
void IFC4X3::IfcEdgeCurve::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCEDGECURVE" << "(";
	if( m_EdgeStart ) { stream << "#" << m_EdgeStart->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_EdgeEnd ) { stream << "#" << m_EdgeEnd->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_EdgeGeometry ) { stream << "#" << m_EdgeGeometry->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_SameSense ) { m_SameSense->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcEdgeCurve::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcEdgeCurve::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_EdgeStart, map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReference( args[1], m_EdgeEnd, map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){readEntityReference( args[2], m_EdgeGeometry, map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_SameSense = IfcBoolean::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args != 4 ){ errorStream << "Wrong parameter count for entity IfcEdgeCurve, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcEdgeCurve::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcEdge::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "EdgeGeometry", m_EdgeGeometry ) );
	vec_attributes.emplace_back( std::make_pair( "SameSense", m_SameSense ) );
}
void IFC4X3::IfcEdgeCurve::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcEdge::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcEdgeCurve::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcEdge::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcEdgeCurve::unlinkFromInverseCounterparts()
{
	IfcEdge::unlinkFromInverseCounterparts();
}
