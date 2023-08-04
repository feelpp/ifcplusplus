/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcClassification.h"
#include "ifcpp/IFC4X3/include/IfcClassificationReference.h"
#include "ifcpp/IFC4X3/include/IfcClassificationSelect.h"
#include "ifcpp/IFC4X3/include/IfcDefinitionSelect.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociatesClassification.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcRelAssociatesClassification 
IFC4X3::IfcRelAssociatesClassification::IfcRelAssociatesClassification( int tag ) { m_tag = tag; }
void IFC4X3::IfcRelAssociatesClassification::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCRELASSOCIATESCLASSIFICATION" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_RelatedObjects.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcDefinitionSelect>& type_object = m_RelatedObjects[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true, precision );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_RelatingClassification ) { m_RelatingClassification->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcRelAssociatesClassification::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcRelAssociatesClassification::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args > 4 ){readSelectList( args[4], m_RelatedObjects, map, errorStream );}
	if( num_args > 5 ){m_RelatingClassification = IfcClassificationSelect::createObjectFromSTEP( args[5], map, errorStream );}
	if( num_args != 6 ){ errorStream << "Wrong parameter count for entity IfcRelAssociatesClassification, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcRelAssociatesClassification::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcRelAssociates::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingClassification", m_RelatingClassification ) );
}
void IFC4X3::IfcRelAssociatesClassification::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcRelAssociates::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcRelAssociatesClassification::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelAssociates::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelAssociatesClassification> ptr_self = dynamic_pointer_cast<IfcRelAssociatesClassification>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelAssociatesClassification::setInverseCounterparts: type mismatch" ); }
	shared_ptr<IfcClassification>  RelatingClassification_IfcClassification = dynamic_pointer_cast<IfcClassification>( m_RelatingClassification );
	if( RelatingClassification_IfcClassification )
	{
		RelatingClassification_IfcClassification->m_ClassificationForObjects_inverse.emplace_back( ptr_self );
	}
	shared_ptr<IfcClassificationReference>  RelatingClassification_IfcClassificationReference = dynamic_pointer_cast<IfcClassificationReference>( m_RelatingClassification );
	if( RelatingClassification_IfcClassificationReference )
	{
		RelatingClassification_IfcClassificationReference->m_ClassificationRefForObjects_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcRelAssociatesClassification::unlinkFromInverseCounterparts()
{
	IfcRelAssociates::unlinkFromInverseCounterparts();
	shared_ptr<IfcClassification>  RelatingClassification_IfcClassification = dynamic_pointer_cast<IfcClassification>( m_RelatingClassification );
	if( RelatingClassification_IfcClassification )
	{
		std::vector<weak_ptr<IfcRelAssociatesClassification> >& ClassificationForObjects_inverse = RelatingClassification_IfcClassification->m_ClassificationForObjects_inverse;
		for( auto it_ClassificationForObjects_inverse = ClassificationForObjects_inverse.begin(); it_ClassificationForObjects_inverse != ClassificationForObjects_inverse.end(); )
		{
			weak_ptr<IfcRelAssociatesClassification> self_candidate_weak = *it_ClassificationForObjects_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_ClassificationForObjects_inverse;
				continue;
			}
			shared_ptr<IfcRelAssociatesClassification> self_candidate( *it_ClassificationForObjects_inverse );
			if( self_candidate.get() == this )
			{
				it_ClassificationForObjects_inverse= ClassificationForObjects_inverse.erase( it_ClassificationForObjects_inverse );
			}
			else
			{
				++it_ClassificationForObjects_inverse;
			}
		}
	}
	shared_ptr<IfcClassificationReference>  RelatingClassification_IfcClassificationReference = dynamic_pointer_cast<IfcClassificationReference>( m_RelatingClassification );
	if( RelatingClassification_IfcClassificationReference )
	{
		std::vector<weak_ptr<IfcRelAssociatesClassification> >& ClassificationRefForObjects_inverse = RelatingClassification_IfcClassificationReference->m_ClassificationRefForObjects_inverse;
		for( auto it_ClassificationRefForObjects_inverse = ClassificationRefForObjects_inverse.begin(); it_ClassificationRefForObjects_inverse != ClassificationRefForObjects_inverse.end(); )
		{
			weak_ptr<IfcRelAssociatesClassification> self_candidate_weak = *it_ClassificationRefForObjects_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_ClassificationRefForObjects_inverse;
				continue;
			}
			shared_ptr<IfcRelAssociatesClassification> self_candidate( *it_ClassificationRefForObjects_inverse );
			if( self_candidate.get() == this )
			{
				it_ClassificationRefForObjects_inverse= ClassificationRefForObjects_inverse.erase( it_ClassificationRefForObjects_inverse );
			}
			else
			{
				++it_ClassificationRefForObjects_inverse;
			}
		}
	}
}
