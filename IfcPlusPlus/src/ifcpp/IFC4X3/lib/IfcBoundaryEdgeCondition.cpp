/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoundaryEdgeCondition.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcModulusOfRotationalSubgradeReactionSelect.h"
#include "ifcpp/IFC4X3/include/IfcModulusOfTranslationalSubgradeReactionSelect.h"

// ENTITY IfcBoundaryEdgeCondition 
IFC4X3::IfcBoundaryEdgeCondition::IfcBoundaryEdgeCondition( int tag ) { m_tag = tag; }
void IFC4X3::IfcBoundaryEdgeCondition::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCBOUNDARYEDGECONDITION" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_TranslationalStiffnessByLengthX ) { m_TranslationalStiffnessByLengthX->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ",";
	if( m_TranslationalStiffnessByLengthY ) { m_TranslationalStiffnessByLengthY->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ",";
	if( m_TranslationalStiffnessByLengthZ ) { m_TranslationalStiffnessByLengthZ->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ",";
	if( m_RotationalStiffnessByLengthX ) { m_RotationalStiffnessByLengthX->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ",";
	if( m_RotationalStiffnessByLengthY ) { m_RotationalStiffnessByLengthY->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ",";
	if( m_RotationalStiffnessByLengthZ ) { m_RotationalStiffnessByLengthZ->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcBoundaryEdgeCondition::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcBoundaryEdgeCondition::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_TranslationalStiffnessByLengthX = IfcModulusOfTranslationalSubgradeReactionSelect::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_TranslationalStiffnessByLengthY = IfcModulusOfTranslationalSubgradeReactionSelect::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_TranslationalStiffnessByLengthZ = IfcModulusOfTranslationalSubgradeReactionSelect::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_RotationalStiffnessByLengthX = IfcModulusOfRotationalSubgradeReactionSelect::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){m_RotationalStiffnessByLengthY = IfcModulusOfRotationalSubgradeReactionSelect::createObjectFromSTEP( args[5], map, errorStream, entityIdNotFound );}
	if( num_args > 6 ){m_RotationalStiffnessByLengthZ = IfcModulusOfRotationalSubgradeReactionSelect::createObjectFromSTEP( args[6], map, errorStream, entityIdNotFound );}
	if( num_args != 7 ){ errorStream << "Wrong parameter count for entity IfcBoundaryEdgeCondition, expecting 7, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcBoundaryEdgeCondition::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcBoundaryCondition::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "TranslationalStiffnessByLengthX", m_TranslationalStiffnessByLengthX ) );
	vec_attributes.emplace_back( std::make_pair( "TranslationalStiffnessByLengthY", m_TranslationalStiffnessByLengthY ) );
	vec_attributes.emplace_back( std::make_pair( "TranslationalStiffnessByLengthZ", m_TranslationalStiffnessByLengthZ ) );
	vec_attributes.emplace_back( std::make_pair( "RotationalStiffnessByLengthX", m_RotationalStiffnessByLengthX ) );
	vec_attributes.emplace_back( std::make_pair( "RotationalStiffnessByLengthY", m_RotationalStiffnessByLengthY ) );
	vec_attributes.emplace_back( std::make_pair( "RotationalStiffnessByLengthZ", m_RotationalStiffnessByLengthZ ) );
}
void IFC4X3::IfcBoundaryEdgeCondition::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcBoundaryCondition::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcBoundaryEdgeCondition::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBoundaryCondition::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcBoundaryEdgeCondition::unlinkFromInverseCounterparts()
{
	IfcBoundaryCondition::unlinkFromInverseCounterparts();
}
