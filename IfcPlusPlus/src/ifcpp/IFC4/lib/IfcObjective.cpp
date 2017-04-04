/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcActorSelect.h"
#include "ifcpp/IFC4/include/IfcConstraint.h"
#include "ifcpp/IFC4/include/IfcConstraintEnum.h"
#include "ifcpp/IFC4/include/IfcDateTime.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLogicalOperatorEnum.h"
#include "ifcpp/IFC4/include/IfcObjective.h"
#include "ifcpp/IFC4/include/IfcObjectiveEnum.h"
#include "ifcpp/IFC4/include/IfcResourceConstraintRelationship.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcObjective 
IfcObjective::IfcObjective() {}
IfcObjective::IfcObjective( int id ) { m_id = id; }
IfcObjective::~IfcObjective() {}
shared_ptr<IfcPPObject> IfcObjective::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcObjective> copy_self( new IfcObjective() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ConstraintGrade ) { copy_self->m_ConstraintGrade = dynamic_pointer_cast<IfcConstraintEnum>( m_ConstraintGrade->getDeepCopy(options) ); }
	if( m_ConstraintSource ) { copy_self->m_ConstraintSource = dynamic_pointer_cast<IfcLabel>( m_ConstraintSource->getDeepCopy(options) ); }
	if( m_CreatingActor ) { copy_self->m_CreatingActor = dynamic_pointer_cast<IfcActorSelect>( m_CreatingActor->getDeepCopy(options) ); }
	if( m_CreationTime ) { copy_self->m_CreationTime = dynamic_pointer_cast<IfcDateTime>( m_CreationTime->getDeepCopy(options) ); }
	if( m_UserDefinedGrade ) { copy_self->m_UserDefinedGrade = dynamic_pointer_cast<IfcLabel>( m_UserDefinedGrade->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_BenchmarkValues.size(); ++ii )
	{
		auto item_ii = m_BenchmarkValues[ii];
		if( item_ii )
		{
			copy_self->m_BenchmarkValues.push_back( dynamic_pointer_cast<IfcConstraint>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_LogicalAggregator ) { copy_self->m_LogicalAggregator = dynamic_pointer_cast<IfcLogicalOperatorEnum>( m_LogicalAggregator->getDeepCopy(options) ); }
	if( m_ObjectiveQualifier ) { copy_self->m_ObjectiveQualifier = dynamic_pointer_cast<IfcObjectiveEnum>( m_ObjectiveQualifier->getDeepCopy(options) ); }
	if( m_UserDefinedQualifier ) { copy_self->m_UserDefinedQualifier = dynamic_pointer_cast<IfcLabel>( m_UserDefinedQualifier->getDeepCopy(options) ); }
	return copy_self;
}
void IfcObjective::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCOBJECTIVE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ConstraintGrade ) { m_ConstraintGrade->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ConstraintSource ) { m_ConstraintSource->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_CreatingActor ) { m_CreatingActor->getStepParameter( stream, true ); } else { stream << "*" ; }
	stream << ",";
	if( m_CreationTime ) { m_CreationTime->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_UserDefinedGrade ) { m_UserDefinedGrade->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	writeEntityList( stream, m_BenchmarkValues );
	stream << ",";
	if( m_LogicalAggregator ) { m_LogicalAggregator->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectiveQualifier ) { m_ObjectiveQualifier->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_UserDefinedQualifier ) { m_UserDefinedQualifier->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcObjective::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcObjective::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 11 ){ std::stringstream err; err << "Wrong parameter count for entity IfcObjective, expecting 11, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	m_ConstraintGrade = IfcConstraintEnum::createObjectFromSTEP( args[2], map );
	m_ConstraintSource = IfcLabel::createObjectFromSTEP( args[3], map );
	m_CreatingActor = IfcActorSelect::createObjectFromSTEP( args[4], map );
	m_CreationTime = IfcDateTime::createObjectFromSTEP( args[5], map );
	m_UserDefinedGrade = IfcLabel::createObjectFromSTEP( args[6], map );
	readEntityReferenceList( args[7], m_BenchmarkValues, map );
	m_LogicalAggregator = IfcLogicalOperatorEnum::createObjectFromSTEP( args[8], map );
	m_ObjectiveQualifier = IfcObjectiveEnum::createObjectFromSTEP( args[9], map );
	m_UserDefinedQualifier = IfcLabel::createObjectFromSTEP( args[10], map );
}
void IfcObjective::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcConstraint::getAttributes( vec_attributes );
	if( m_BenchmarkValues.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> BenchmarkValues_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_BenchmarkValues.begin(), m_BenchmarkValues.end(), std::back_inserter( BenchmarkValues_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "BenchmarkValues", BenchmarkValues_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "LogicalAggregator", m_LogicalAggregator ) );
	vec_attributes.push_back( std::make_pair( "ObjectiveQualifier", m_ObjectiveQualifier ) );
	vec_attributes.push_back( std::make_pair( "UserDefinedQualifier", m_UserDefinedQualifier ) );
}
void IfcObjective::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcConstraint::getAttributesInverse( vec_attributes_inverse );
}
void IfcObjective::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcConstraint::setInverseCounterparts( ptr_self_entity );
}
void IfcObjective::unlinkFromInverseCounterparts()
{
	IfcConstraint::unlinkFromInverseCounterparts();
}
