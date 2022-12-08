/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAlignmentVerticalSegment.h"
#include "ifcpp/IFC4X3/include/IfcAlignmentVerticalSegmentTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcRatioMeasure.h"

// ENTITY IfcAlignmentVerticalSegment 
IFC4X3::IfcAlignmentVerticalSegment::IfcAlignmentVerticalSegment( int tag ) { m_tag = tag; }
void IFC4X3::IfcAlignmentVerticalSegment::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCALIGNMENTVERTICALSEGMENT" << "(";
	if( m_StartTag ) { m_StartTag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EndTag ) { m_EndTag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartDistAlong ) { m_StartDistAlong->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_HorizontalLength ) { m_HorizontalLength->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartHeight ) { m_StartHeight->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartGradient ) { m_StartGradient->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EndGradient ) { m_EndGradient->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RadiusOfCurvature ) { m_RadiusOfCurvature->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcAlignmentVerticalSegment::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcAlignmentVerticalSegment::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcAlignmentVerticalSegment, expecting 9, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_StartTag = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );
	m_EndTag = IfcLabel::createObjectFromSTEP( args[1], map, errorStream );
	m_StartDistAlong = IfcLengthMeasure::createObjectFromSTEP( args[2], map, errorStream );
	m_HorizontalLength = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[3], map, errorStream );
	m_StartHeight = IfcLengthMeasure::createObjectFromSTEP( args[4], map, errorStream );
	m_StartGradient = IfcRatioMeasure::createObjectFromSTEP( args[5], map, errorStream );
	m_EndGradient = IfcRatioMeasure::createObjectFromSTEP( args[6], map, errorStream );
	m_RadiusOfCurvature = IfcLengthMeasure::createObjectFromSTEP( args[7], map, errorStream );
	m_PredefinedType = IfcAlignmentVerticalSegmentTypeEnum::createObjectFromSTEP( args[8], map, errorStream );
}
void IFC4X3::IfcAlignmentVerticalSegment::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcAlignmentParameterSegment::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "StartDistAlong", m_StartDistAlong ) );
	vec_attributes.emplace_back( std::make_pair( "HorizontalLength", m_HorizontalLength ) );
	vec_attributes.emplace_back( std::make_pair( "StartHeight", m_StartHeight ) );
	vec_attributes.emplace_back( std::make_pair( "StartGradient", m_StartGradient ) );
	vec_attributes.emplace_back( std::make_pair( "EndGradient", m_EndGradient ) );
	vec_attributes.emplace_back( std::make_pair( "RadiusOfCurvature", m_RadiusOfCurvature ) );
	vec_attributes.emplace_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
}
void IFC4X3::IfcAlignmentVerticalSegment::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcAlignmentParameterSegment::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcAlignmentVerticalSegment::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcAlignmentParameterSegment::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcAlignmentVerticalSegment::unlinkFromInverseCounterparts()
{
	IfcAlignmentParameterSegment::unlinkFromInverseCounterparts();
}
