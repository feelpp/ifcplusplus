/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4X3/include/IfcCartesianTransformationOperator2DnonUniform.h"
#include "ifcpp/IFC4X3/include/IfcDirection.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcReal.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcCartesianTransformationOperator2DnonUniform 
IFC4X3::IfcCartesianTransformationOperator2DnonUniform::IfcCartesianTransformationOperator2DnonUniform( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcCartesianTransformationOperator2DnonUniform::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCartesianTransformationOperator2DnonUniform> copy_self( new IfcCartesianTransformationOperator2DnonUniform() );
	if( m_Axis1 ) { copy_self->m_Axis1 = dynamic_pointer_cast<IfcDirection>( m_Axis1->getDeepCopy(options) ); }
	if( m_Axis2 ) { copy_self->m_Axis2 = dynamic_pointer_cast<IfcDirection>( m_Axis2->getDeepCopy(options) ); }
	if( m_LocalOrigin ) { copy_self->m_LocalOrigin = dynamic_pointer_cast<IfcCartesianPoint>( m_LocalOrigin->getDeepCopy(options) ); }
	if( m_Scale ) { copy_self->m_Scale = dynamic_pointer_cast<IfcReal>( m_Scale->getDeepCopy(options) ); }
	if( m_Scale2 ) { copy_self->m_Scale2 = dynamic_pointer_cast<IfcReal>( m_Scale2->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcCartesianTransformationOperator2DnonUniform::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCCARTESIANTRANSFORMATIONOPERATOR2DNONUNIFORM" << "(";
	if( m_Axis1 ) { stream << "#" << m_Axis1->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Axis2 ) { stream << "#" << m_Axis2->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_LocalOrigin ) { stream << "#" << m_LocalOrigin->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Scale ) { m_Scale->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Scale2 ) { m_Scale2->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcCartesianTransformationOperator2DnonUniform::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcCartesianTransformationOperator2DnonUniform::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCartesianTransformationOperator2DnonUniform, expecting 5, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Axis1, map, errorStream );
	readEntityReference( args[1], m_Axis2, map, errorStream );
	readEntityReference( args[2], m_LocalOrigin, map, errorStream );
	m_Scale = IfcReal::createObjectFromSTEP( args[3], map, errorStream );
	m_Scale2 = IfcReal::createObjectFromSTEP( args[4], map, errorStream );
}
void IFC4X3::IfcCartesianTransformationOperator2DnonUniform::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcCartesianTransformationOperator2D::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Scale2", m_Scale2 ) );
}
void IFC4X3::IfcCartesianTransformationOperator2DnonUniform::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcCartesianTransformationOperator2D::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcCartesianTransformationOperator2DnonUniform::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCartesianTransformationOperator2D::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcCartesianTransformationOperator2DnonUniform::unlinkFromInverseCounterparts()
{
	IfcCartesianTransformationOperator2D::unlinkFromInverseCounterparts();
}
