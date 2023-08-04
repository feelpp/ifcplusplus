/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcActorSelect.h"
#include "ifcpp/IFC4X3/include/IfcConstraint.h"
#include "ifcpp/IFC4X3/include/IfcConstraintEnum.h"
#include "ifcpp/IFC4X3/include/IfcDateTime.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcResourceConstraintRelationship.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcConstraint 
IFC4X3::IfcConstraint::IfcConstraint( int tag ) { m_tag = tag; }
void IFC4X3::IfcConstraint::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCCONSTRAINT" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ConstraintGrade ) { m_ConstraintGrade->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ConstraintSource ) { m_ConstraintSource->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_CreatingActor ) { m_CreatingActor->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ",";
	if( m_CreationTime ) { m_CreationTime->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_UserDefinedGrade ) { m_UserDefinedGrade->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcConstraint::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcConstraint::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args > 2 ){m_ConstraintGrade = IfcConstraintEnum::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args > 3 ){m_ConstraintSource = IfcLabel::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args > 4 ){m_CreatingActor = IfcActorSelect::createObjectFromSTEP( args[4], map, errorStream );}
	if( num_args > 5 ){m_CreationTime = IfcDateTime::createObjectFromSTEP( args[5], map, errorStream );}
	if( num_args > 6 ){m_UserDefinedGrade = IfcLabel::createObjectFromSTEP( args[6], map, errorStream );}
	if( num_args != 7 ){ errorStream << "Wrong parameter count for entity IfcConstraint, expecting 7, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcConstraint::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.emplace_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.emplace_back( std::make_pair( "ConstraintGrade", m_ConstraintGrade ) );
	vec_attributes.emplace_back( std::make_pair( "ConstraintSource", m_ConstraintSource ) );
	vec_attributes.emplace_back( std::make_pair( "CreatingActor", m_CreatingActor ) );
	vec_attributes.emplace_back( std::make_pair( "CreationTime", m_CreationTime ) );
	vec_attributes.emplace_back( std::make_pair( "UserDefinedGrade", m_UserDefinedGrade ) );
}
void IFC4X3::IfcConstraint::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	shared_ptr<AttributeObjectVector> HasExternalReferences_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_HasExternalReferences_inverse.size(); ++i )
	{
		if( !m_HasExternalReferences_inverse[i].expired() )
		{
			HasExternalReferences_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcExternalReferenceRelationship>( m_HasExternalReferences_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "HasExternalReferences_inverse", HasExternalReferences_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> PropertiesForConstraint_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_PropertiesForConstraint_inverse.size(); ++i )
	{
		if( !m_PropertiesForConstraint_inverse[i].expired() )
		{
			PropertiesForConstraint_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcResourceConstraintRelationship>( m_PropertiesForConstraint_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "PropertiesForConstraint_inverse", PropertiesForConstraint_inverse_vec_obj ) );
}
void IFC4X3::IfcConstraint::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcConstraint::unlinkFromInverseCounterparts()
{
}
