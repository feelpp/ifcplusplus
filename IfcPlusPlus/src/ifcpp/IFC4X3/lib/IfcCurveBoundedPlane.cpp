/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcCurve.h"
#include "ifcpp/IFC4X3/include/IfcCurveBoundedPlane.h"
#include "ifcpp/IFC4X3/include/IfcPlane.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcCurveBoundedPlane 
IFC4X3::IfcCurveBoundedPlane::IfcCurveBoundedPlane( int tag ) { m_tag = tag; }
void IFC4X3::IfcCurveBoundedPlane::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCCURVEBOUNDEDPLANE" << "(";
	if( m_BasisSurface ) { stream << "#" << m_BasisSurface->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_OuterBoundary ) { stream << "#" << m_OuterBoundary->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_InnerBoundaries );
	stream << ");";
}
void IFC4X3::IfcCurveBoundedPlane::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcCurveBoundedPlane::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_BasisSurface, map, errorStream );}
	if( num_args > 1 ){readEntityReference( args[1], m_OuterBoundary, map, errorStream );}
	if( num_args > 2 ){readEntityReferenceList( args[2], m_InnerBoundaries, map, errorStream );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcCurveBoundedPlane, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcCurveBoundedPlane::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcBoundedSurface::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "BasisSurface", m_BasisSurface ) );
	vec_attributes.emplace_back( std::make_pair( "OuterBoundary", m_OuterBoundary ) );
	shared_ptr<AttributeObjectVector> InnerBoundaries_vec_object( new AttributeObjectVector() );
	std::copy( m_InnerBoundaries.begin(), m_InnerBoundaries.end(), std::back_inserter( InnerBoundaries_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "InnerBoundaries", InnerBoundaries_vec_object ) );
}
void IFC4X3::IfcCurveBoundedPlane::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcBoundedSurface::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcCurveBoundedPlane::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBoundedSurface::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcCurveBoundedPlane::unlinkFromInverseCounterparts()
{
	IfcBoundedSurface::unlinkFromInverseCounterparts();
}
