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
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRelAggregates.h"
#include "ifcpp/IFC4X3/include/IfcRelAssigns.h"
#include "ifcpp/IFC4X3/include/IfcRelAssignsToControl.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4X3/include/IfcRelNests.h"
#include "ifcpp/IFC4X3/include/IfcText.h"
#include "ifcpp/IFC4X3/include/IfcWorkCalendar.h"
#include "ifcpp/IFC4X3/include/IfcWorkCalendarTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcWorkTime.h"

// ENTITY IfcWorkCalendar 
IFC4X3::IfcWorkCalendar::IfcWorkCalendar( int tag ) { m_tag = tag; }
void IFC4X3::IfcWorkCalendar::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCWORKCALENDAR" << "(";
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
	if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_WorkingTimes );
	stream << ",";
	writeEntityList( stream, m_ExceptionTimes );
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcWorkCalendar::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcWorkCalendar::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcWorkCalendar, expecting 9, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream );
	m_Identification = IfcIdentifier::createObjectFromSTEP( args[5], map, errorStream );
	readEntityReferenceList( args[6], m_WorkingTimes, map, errorStream );
	readEntityReferenceList( args[7], m_ExceptionTimes, map, errorStream );
	m_PredefinedType = IfcWorkCalendarTypeEnum::createObjectFromSTEP( args[8], map, errorStream );
}
void IFC4X3::IfcWorkCalendar::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcControl::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> WorkingTimes_vec_object( new AttributeObjectVector() );
	std::copy( m_WorkingTimes.begin(), m_WorkingTimes.end(), std::back_inserter( WorkingTimes_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "WorkingTimes", WorkingTimes_vec_object ) );
	shared_ptr<AttributeObjectVector> ExceptionTimes_vec_object( new AttributeObjectVector() );
	std::copy( m_ExceptionTimes.begin(), m_ExceptionTimes.end(), std::back_inserter( ExceptionTimes_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "ExceptionTimes", ExceptionTimes_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
}
void IFC4X3::IfcWorkCalendar::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcControl::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcWorkCalendar::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcControl::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcWorkCalendar::unlinkFromInverseCounterparts()
{
	IfcControl::unlinkFromInverseCounterparts();
}
