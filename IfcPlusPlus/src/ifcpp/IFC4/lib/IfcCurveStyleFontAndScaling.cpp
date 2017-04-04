/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCurveStyleFontAndScaling.h"
#include "ifcpp/IFC4/include/IfcCurveStyleFontSelect.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcPositiveRatioMeasure.h"

// ENTITY IfcCurveStyleFontAndScaling 
IfcCurveStyleFontAndScaling::IfcCurveStyleFontAndScaling() {}
IfcCurveStyleFontAndScaling::IfcCurveStyleFontAndScaling( int id ) { m_id = id; }
IfcCurveStyleFontAndScaling::~IfcCurveStyleFontAndScaling() {}
shared_ptr<IfcPPObject> IfcCurveStyleFontAndScaling::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcCurveStyleFontAndScaling> copy_self( new IfcCurveStyleFontAndScaling() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_CurveFont ) { copy_self->m_CurveFont = dynamic_pointer_cast<IfcCurveStyleFontSelect>( m_CurveFont->getDeepCopy(options) ); }
	if( m_CurveFontScaling ) { copy_self->m_CurveFontScaling = dynamic_pointer_cast<IfcPositiveRatioMeasure>( m_CurveFontScaling->getDeepCopy(options) ); }
	return copy_self;
}
void IfcCurveStyleFontAndScaling::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCCURVESTYLEFONTANDSCALING" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_CurveFont ) { m_CurveFont->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_CurveFontScaling ) { m_CurveFontScaling->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcCurveStyleFontAndScaling::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcCurveStyleFontAndScaling::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCurveStyleFontAndScaling, expecting 3, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_CurveFont = IfcCurveStyleFontSelect::createObjectFromSTEP( args[1], map );
	m_CurveFontScaling = IfcPositiveRatioMeasure::createObjectFromSTEP( args[2], map );
}
void IfcCurveStyleFontAndScaling::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcPresentationItem::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.push_back( std::make_pair( "CurveFont", m_CurveFont ) );
	vec_attributes.push_back( std::make_pair( "CurveFontScaling", m_CurveFontScaling ) );
}
void IfcCurveStyleFontAndScaling::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcPresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcCurveStyleFontAndScaling::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcCurveStyleFontAndScaling::unlinkFromInverseCounterparts()
{
	IfcPresentationItem::unlinkFromInverseCounterparts();
}
