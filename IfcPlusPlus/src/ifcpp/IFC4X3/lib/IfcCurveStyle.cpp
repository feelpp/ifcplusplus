/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcColour.h"
#include "ifcpp/IFC4X3/include/IfcCurveFontOrScaledCurveFontSelect.h"
#include "ifcpp/IFC4X3/include/IfcCurveStyle.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcSizeSelect.h"

// ENTITY IfcCurveStyle 
IFC4X3::IfcCurveStyle::IfcCurveStyle( int tag ) { m_tag = tag; }
void IFC4X3::IfcCurveStyle::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCCURVESTYLE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_CurveFont ) { m_CurveFont->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_CurveWidth ) { m_CurveWidth->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_CurveColour ) { m_CurveColour->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_ModelOrDraughting ) { m_ModelOrDraughting->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcCurveStyle::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcCurveStyle::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCurveStyle, expecting 5, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );
	m_CurveFont = IfcCurveFontOrScaledCurveFontSelect::createObjectFromSTEP( args[1], map, errorStream );
	m_CurveWidth = IfcSizeSelect::createObjectFromSTEP( args[2], map, errorStream );
	m_CurveColour = IfcColour::createObjectFromSTEP( args[3], map, errorStream );
	m_ModelOrDraughting = IfcBoolean::createObjectFromSTEP( args[4], map, errorStream );
}
void IFC4X3::IfcCurveStyle::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPresentationStyle::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "CurveFont", m_CurveFont ) );
	vec_attributes.emplace_back( std::make_pair( "CurveWidth", m_CurveWidth ) );
	vec_attributes.emplace_back( std::make_pair( "CurveColour", m_CurveColour ) );
	vec_attributes.emplace_back( std::make_pair( "ModelOrDraughting", m_ModelOrDraughting ) );
}
void IFC4X3::IfcCurveStyle::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPresentationStyle::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcCurveStyle::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationStyle::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcCurveStyle::unlinkFromInverseCounterparts()
{
	IfcPresentationStyle::unlinkFromInverseCounterparts();
}
