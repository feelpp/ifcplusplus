/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement2D.h"
#include "ifcpp/IFC4X3/include/IfcEllipseProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcProfileProperties.h"
#include "ifcpp/IFC4X3/include/IfcProfileTypeEnum.h"

// ENTITY IfcEllipseProfileDef 
IFC4X3::IfcEllipseProfileDef::IfcEllipseProfileDef( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcEllipseProfileDef::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcEllipseProfileDef> copy_self( new IfcEllipseProfileDef() );
	if( m_ProfileType ) { copy_self->m_ProfileType = dynamic_pointer_cast<IfcProfileTypeEnum>( m_ProfileType->getDeepCopy(options) ); }
	if( m_ProfileName ) { copy_self->m_ProfileName = dynamic_pointer_cast<IfcLabel>( m_ProfileName->getDeepCopy(options) ); }
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement2D>( m_Position->getDeepCopy(options) ); }
	if( m_SemiAxis1 ) { copy_self->m_SemiAxis1 = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_SemiAxis1->getDeepCopy(options) ); }
	if( m_SemiAxis2 ) { copy_self->m_SemiAxis2 = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_SemiAxis2->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcEllipseProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCELLIPSEPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_SemiAxis1 ) { m_SemiAxis1->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SemiAxis2 ) { m_SemiAxis2->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcEllipseProfileDef::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcEllipseProfileDef::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcEllipseProfileDef, expecting 5, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map, errorStream );
	m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map, errorStream );
	readEntityReference( args[2], m_Position, map, errorStream );
	m_SemiAxis1 = IfcPositiveLengthMeasure::createObjectFromSTEP( args[3], map, errorStream );
	m_SemiAxis2 = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map, errorStream );
}
void IFC4X3::IfcEllipseProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcParameterizedProfileDef::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "SemiAxis1", m_SemiAxis1 ) );
	vec_attributes.emplace_back( std::make_pair( "SemiAxis2", m_SemiAxis2 ) );
}
void IFC4X3::IfcEllipseProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcParameterizedProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcEllipseProfileDef::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcParameterizedProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcEllipseProfileDef::unlinkFromInverseCounterparts()
{
	IfcParameterizedProfileDef::unlinkFromInverseCounterparts();
}