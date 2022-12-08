/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcGlobalOrLocalEnum.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4X3/include/IfcRelAggregates.h"
#include "ifcpp/IFC4X3/include/IfcRelAssigns.h"
#include "ifcpp/IFC4X3/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelConnectsStructuralActivity.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4X3/include/IfcRelNests.h"
#include "ifcpp/IFC4X3/include/IfcRelPositions.h"
#include "ifcpp/IFC4X3/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4X3/include/IfcStructuralActivity.h"
#include "ifcpp/IFC4X3/include/IfcStructuralLoad.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcStructuralActivity 
IFC4X3::IfcStructuralActivity::IfcStructuralActivity( int tag ) { m_tag = tag; }
void IFC4X3::IfcStructuralActivity::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCSTRUCTURALACTIVITY" << "(";
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
	if( m_AppliedLoad ) { stream << "#" << m_AppliedLoad->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_GlobalOrLocal ) { m_GlobalOrLocal->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcStructuralActivity::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcStructuralActivity::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStructuralActivity, expecting 9, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream );
	readEntityReference( args[5], m_ObjectPlacement, map, errorStream );
	readEntityReference( args[6], m_Representation, map, errorStream );
	readEntityReference( args[7], m_AppliedLoad, map, errorStream );
	m_GlobalOrLocal = IfcGlobalOrLocalEnum::createObjectFromSTEP( args[8], map, errorStream );
}
void IFC4X3::IfcStructuralActivity::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcProduct::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "AppliedLoad", m_AppliedLoad ) );
	vec_attributes.emplace_back( std::make_pair( "GlobalOrLocal", m_GlobalOrLocal ) );
}
void IFC4X3::IfcStructuralActivity::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcProduct::getAttributesInverse( vec_attributes_inverse );
	if( !m_AssignedToStructuralItem_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> AssignedToStructuralItem_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_AssignedToStructuralItem_inverse.size(); ++i )
		{
			if( !m_AssignedToStructuralItem_inverse[i].expired() )
			{
				AssignedToStructuralItem_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelConnectsStructuralActivity>( m_AssignedToStructuralItem_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "AssignedToStructuralItem_inverse", AssignedToStructuralItem_inverse_vec_obj ) );
	}
}
void IFC4X3::IfcStructuralActivity::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcProduct::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcStructuralActivity::unlinkFromInverseCounterparts()
{
	IfcProduct::unlinkFromInverseCounterparts();
}
