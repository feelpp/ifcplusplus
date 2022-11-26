/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcApplication.h"
#include "ifcpp/IFC4X3/include/IfcChangeActionEnum.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcPersonAndOrganization.h"
#include "ifcpp/IFC4X3/include/IfcStateEnum.h"
#include "ifcpp/IFC4X3/include/IfcTimeStamp.h"

// ENTITY IfcOwnerHistory 
IFC4X3::IfcOwnerHistory::IfcOwnerHistory( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcOwnerHistory::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcOwnerHistory> copy_self( new IfcOwnerHistory() );
	if( m_OwningUser ) { copy_self->m_OwningUser = dynamic_pointer_cast<IfcPersonAndOrganization>( m_OwningUser->getDeepCopy(options) ); }
	if( m_OwningApplication ) { copy_self->m_OwningApplication = dynamic_pointer_cast<IfcApplication>( m_OwningApplication->getDeepCopy(options) ); }
	if( m_State ) { copy_self->m_State = dynamic_pointer_cast<IfcStateEnum>( m_State->getDeepCopy(options) ); }
	if( m_ChangeAction ) { copy_self->m_ChangeAction = dynamic_pointer_cast<IfcChangeActionEnum>( m_ChangeAction->getDeepCopy(options) ); }
	if( m_LastModifiedDate ) { copy_self->m_LastModifiedDate = dynamic_pointer_cast<IfcTimeStamp>( m_LastModifiedDate->getDeepCopy(options) ); }
	if( m_LastModifyingUser ) { copy_self->m_LastModifyingUser = dynamic_pointer_cast<IfcPersonAndOrganization>( m_LastModifyingUser->getDeepCopy(options) ); }
	if( m_LastModifyingApplication ) { copy_self->m_LastModifyingApplication = dynamic_pointer_cast<IfcApplication>( m_LastModifyingApplication->getDeepCopy(options) ); }
	if( m_CreationDate ) { copy_self->m_CreationDate = dynamic_pointer_cast<IfcTimeStamp>( m_CreationDate->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcOwnerHistory::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCOWNERHISTORY" << "(";
	if( m_OwningUser ) { stream << "#" << m_OwningUser->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_OwningApplication ) { stream << "#" << m_OwningApplication->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_State ) { m_State->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ChangeAction ) { m_ChangeAction->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LastModifiedDate ) { m_LastModifiedDate->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LastModifyingUser ) { stream << "#" << m_LastModifyingUser->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_LastModifyingApplication ) { stream << "#" << m_LastModifyingApplication->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_CreationDate ) { m_CreationDate->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcOwnerHistory::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcOwnerHistory::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 8 ){ std::stringstream err; err << "Wrong parameter count for entity IfcOwnerHistory, expecting 8, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_OwningUser, map, errorStream );
	readEntityReference( args[1], m_OwningApplication, map, errorStream );
	m_State = IfcStateEnum::createObjectFromSTEP( args[2], map, errorStream );
	m_ChangeAction = IfcChangeActionEnum::createObjectFromSTEP( args[3], map, errorStream );
	m_LastModifiedDate = IfcTimeStamp::createObjectFromSTEP( args[4], map, errorStream );
	readEntityReference( args[5], m_LastModifyingUser, map, errorStream );
	readEntityReference( args[6], m_LastModifyingApplication, map, errorStream );
	m_CreationDate = IfcTimeStamp::createObjectFromSTEP( args[7], map, errorStream );
}
void IFC4X3::IfcOwnerHistory::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "OwningUser", m_OwningUser ) );
	vec_attributes.emplace_back( std::make_pair( "OwningApplication", m_OwningApplication ) );
	vec_attributes.emplace_back( std::make_pair( "State", m_State ) );
	vec_attributes.emplace_back( std::make_pair( "ChangeAction", m_ChangeAction ) );
	vec_attributes.emplace_back( std::make_pair( "LastModifiedDate", m_LastModifiedDate ) );
	vec_attributes.emplace_back( std::make_pair( "LastModifyingUser", m_LastModifyingUser ) );
	vec_attributes.emplace_back( std::make_pair( "LastModifyingApplication", m_LastModifyingApplication ) );
	vec_attributes.emplace_back( std::make_pair( "CreationDate", m_CreationDate ) );
}
void IFC4X3::IfcOwnerHistory::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IFC4X3::IfcOwnerHistory::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcOwnerHistory::unlinkFromInverseCounterparts()
{
}
