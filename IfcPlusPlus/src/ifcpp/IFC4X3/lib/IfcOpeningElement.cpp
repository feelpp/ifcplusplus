/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4X3/include/IfcOpeningElement.h"
#include "ifcpp/IFC4X3/include/IfcOpeningElementTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4X3/include/IfcRelAdheresToElement.h"
#include "ifcpp/IFC4X3/include/IfcRelAggregates.h"
#include "ifcpp/IFC4X3/include/IfcRelAssigns.h"
#include "ifcpp/IFC4X3/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelConnectsElements.h"
#include "ifcpp/IFC4X3/include/IfcRelConnectsWithRealizingElements.h"
#include "ifcpp/IFC4X3/include/IfcRelContainedInSpatialStructure.h"
#include "ifcpp/IFC4X3/include/IfcRelCoversBldgElements.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4X3/include/IfcRelFillsElement.h"
#include "ifcpp/IFC4X3/include/IfcRelInterferesElements.h"
#include "ifcpp/IFC4X3/include/IfcRelNests.h"
#include "ifcpp/IFC4X3/include/IfcRelPositions.h"
#include "ifcpp/IFC4X3/include/IfcRelProjectsElement.h"
#include "ifcpp/IFC4X3/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4X3/include/IfcRelSpaceBoundary.h"
#include "ifcpp/IFC4X3/include/IfcRelVoidsElement.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcOpeningElement 
IFC4X3::IfcOpeningElement::IfcOpeningElement( int tag ) { m_tag = tag; }
void IFC4X3::IfcOpeningElement::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCOPENINGELEMENT" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Tag ) { m_Tag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcOpeningElement::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcOpeningElement::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcOpeningElement, expecting 9, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream );
	readEntityReference( args[5], m_ObjectPlacement, map, errorStream );
	readEntityReference( args[6], m_Representation, map, errorStream );
	m_Tag = IfcIdentifier::createObjectFromSTEP( args[7], map, errorStream );
	m_PredefinedType = IfcOpeningElementTypeEnum::createObjectFromSTEP( args[8], map, errorStream );
}
void IFC4X3::IfcOpeningElement::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcFeatureElementSubtraction::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
}
void IFC4X3::IfcOpeningElement::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcFeatureElementSubtraction::getAttributesInverse( vec_attributes_inverse );
	shared_ptr<AttributeObjectVector> HasFillings_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_HasFillings_inverse.size(); ++i )
	{
		if( !m_HasFillings_inverse[i].expired() )
		{
			HasFillings_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelFillsElement>( m_HasFillings_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "HasFillings_inverse", HasFillings_inverse_vec_obj ) );
}
void IFC4X3::IfcOpeningElement::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcFeatureElementSubtraction::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcOpeningElement::unlinkFromInverseCounterparts()
{
	IfcFeatureElementSubtraction::unlinkFromInverseCounterparts();
}
