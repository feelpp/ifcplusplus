/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBSplineCurveForm.h"
#include "ifcpp/IFC4X3/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4X3/include/IfcInteger.h"
#include "ifcpp/IFC4X3/include/IfcKnotType.h"
#include "ifcpp/IFC4X3/include/IfcLogical.h"
#include "ifcpp/IFC4X3/include/IfcParameterValue.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcRationalBSplineCurveWithKnots.h"
#include "ifcpp/IFC4X3/include/IfcReal.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcRationalBSplineCurveWithKnots 
IFC4X3::IfcRationalBSplineCurveWithKnots::IfcRationalBSplineCurveWithKnots( int tag ) { m_tag = tag; }
void IFC4X3::IfcRationalBSplineCurveWithKnots::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCRATIONALBSPLINECURVEWITHKNOTS" << "(";
	if( m_Degree ) { m_Degree->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_ControlPointsList );
	stream << ",";
	if( m_CurveForm ) { m_CurveForm->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ClosedCurve ) { m_ClosedCurve->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_SelfIntersect ) { m_SelfIntersect->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	writeTypeOfIntList( stream, m_KnotMultiplicities, false );
	stream << ",";
	writeTypeOfRealList( stream, m_Knots, false, precision );
	stream << ",";
	if( m_KnotSpec ) { m_KnotSpec->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	writeTypeOfRealList( stream, m_WeightsData, false, precision );
	stream << ");";
}
void IFC4X3::IfcRationalBSplineCurveWithKnots::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcRationalBSplineCurveWithKnots::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Degree = IfcInteger::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){readEntityReferenceList( args[1], m_ControlPointsList, map, errorStream );}
	if( num_args > 2 ){m_CurveForm = IfcBSplineCurveForm::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args > 3 ){m_ClosedCurve = IfcLogical::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args > 4 ){m_SelfIntersect = IfcLogical::createObjectFromSTEP( args[4], map, errorStream );}
	if( num_args > 5 ){readTypeOfIntegerList( args[5], m_KnotMultiplicities );}
	if( num_args > 6 ){readTypeOfRealList( args[6], m_Knots );}
	if( num_args > 7 ){m_KnotSpec = IfcKnotType::createObjectFromSTEP( args[7], map, errorStream );}
	if( num_args > 8 ){readTypeOfRealList( args[8], m_WeightsData );}
	if( num_args != 9 ){ errorStream << "Wrong parameter count for entity IfcRationalBSplineCurveWithKnots, expecting 9, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcRationalBSplineCurveWithKnots::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcBSplineCurveWithKnots::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> WeightsData_vec_object( new AttributeObjectVector() );
	std::copy( m_WeightsData.begin(), m_WeightsData.end(), std::back_inserter( WeightsData_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "WeightsData", WeightsData_vec_object ) );
}
void IFC4X3::IfcRationalBSplineCurveWithKnots::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcBSplineCurveWithKnots::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcRationalBSplineCurveWithKnots::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBSplineCurveWithKnots::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcRationalBSplineCurveWithKnots::unlinkFromInverseCounterparts()
{
	IfcBSplineCurveWithKnots::unlinkFromInverseCounterparts();
}
