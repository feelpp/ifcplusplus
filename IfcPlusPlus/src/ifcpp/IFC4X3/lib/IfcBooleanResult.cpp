/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBooleanOperand.h"
#include "ifcpp/IFC4X3/include/IfcBooleanOperator.h"
#include "ifcpp/IFC4X3/include/IfcBooleanResult.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcBooleanResult 
IFC4X3::IfcBooleanResult::IfcBooleanResult( int tag ) { m_tag = tag; }
void IFC4X3::IfcBooleanResult::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCBOOLEANRESULT" << "(";
	if( m_Operator ) { m_Operator->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_FirstOperand ) { m_FirstOperand->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ",";
	if( m_SecondOperand ) { m_SecondOperand->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcBooleanResult::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcBooleanResult::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Operator = IfcBooleanOperator::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){m_FirstOperand = IfcBooleanOperand::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args > 2 ){m_SecondOperand = IfcBooleanOperand::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcBooleanResult, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcBooleanResult::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Operator", m_Operator ) );
	vec_attributes.emplace_back( std::make_pair( "FirstOperand", m_FirstOperand ) );
	vec_attributes.emplace_back( std::make_pair( "SecondOperand", m_SecondOperand ) );
}
void IFC4X3::IfcBooleanResult::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcBooleanResult::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcBooleanResult::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
