/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoundaryCurve.h"
#include "ifcpp/IFC4X3/include/IfcLogical.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcSegment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcBoundaryCurve 
IFC4X3::IfcBoundaryCurve::IfcBoundaryCurve( int tag ) { m_tag = tag; }
void IFC4X3::IfcBoundaryCurve::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCBOUNDARYCURVE" << "(";
	writeEntityList( stream, m_Segments );
	stream << ",";
	if( m_SelfIntersect ) { m_SelfIntersect->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcBoundaryCurve::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcBoundaryCurve::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReferenceList( args[0], m_Segments, map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_SelfIntersect = IfcLogical::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcBoundaryCurve, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcBoundaryCurve::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcCompositeCurveOnSurface::getAttributes( vec_attributes );
}
void IFC4X3::IfcBoundaryCurve::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcCompositeCurveOnSurface::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcBoundaryCurve::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCompositeCurveOnSurface::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcBoundaryCurve::unlinkFromInverseCounterparts()
{
	IfcCompositeCurveOnSurface::unlinkFromInverseCounterparts();
}
