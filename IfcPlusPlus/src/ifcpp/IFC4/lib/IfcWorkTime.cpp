/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcDataOriginEnum.h"
#include "ifcpp/IFC4/include/IfcDate.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcRecurrencePattern.h"
#include "ifcpp/IFC4/include/IfcWorkTime.h"

// ENTITY IfcWorkTime 
IfcWorkTime::IfcWorkTime() {}
IfcWorkTime::IfcWorkTime( int id ) { m_id = id; }
IfcWorkTime::~IfcWorkTime() {}
shared_ptr<IfcPPObject> IfcWorkTime::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcWorkTime> copy_self( new IfcWorkTime() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_DataOrigin ) { copy_self->m_DataOrigin = dynamic_pointer_cast<IfcDataOriginEnum>( m_DataOrigin->getDeepCopy(options) ); }
	if( m_UserDefinedDataOrigin ) { copy_self->m_UserDefinedDataOrigin = dynamic_pointer_cast<IfcLabel>( m_UserDefinedDataOrigin->getDeepCopy(options) ); }
	if( m_RecurrencePattern ) { copy_self->m_RecurrencePattern = dynamic_pointer_cast<IfcRecurrencePattern>( m_RecurrencePattern->getDeepCopy(options) ); }
	if( m_Start ) { copy_self->m_Start = dynamic_pointer_cast<IfcDate>( m_Start->getDeepCopy(options) ); }
	if( m_Finish ) { copy_self->m_Finish = dynamic_pointer_cast<IfcDate>( m_Finish->getDeepCopy(options) ); }
	return copy_self;
}
void IfcWorkTime::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCWORKTIME" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_DataOrigin ) { m_DataOrigin->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_UserDefinedDataOrigin ) { m_UserDefinedDataOrigin->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_RecurrencePattern ) { stream << "#" << m_RecurrencePattern->m_id; } else { stream << "$"; }
	stream << ",";
	if( m_Start ) { m_Start->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Finish ) { m_Finish->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcWorkTime::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcWorkTime::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcWorkTime, expecting 6, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_DataOrigin = IfcDataOriginEnum::createObjectFromSTEP( args[1], map );
	m_UserDefinedDataOrigin = IfcLabel::createObjectFromSTEP( args[2], map );
	readEntityReference( args[3], m_RecurrencePattern, map );
	m_Start = IfcDate::createObjectFromSTEP( args[4], map );
	m_Finish = IfcDate::createObjectFromSTEP( args[5], map );
}
void IfcWorkTime::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcSchedulingTime::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "RecurrencePattern", m_RecurrencePattern ) );
	vec_attributes.push_back( std::make_pair( "Start", m_Start ) );
	vec_attributes.push_back( std::make_pair( "Finish", m_Finish ) );
}
void IfcWorkTime::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcSchedulingTime::getAttributesInverse( vec_attributes_inverse );
}
void IfcWorkTime::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcSchedulingTime::setInverseCounterparts( ptr_self_entity );
}
void IfcWorkTime::unlinkFromInverseCounterparts()
{
	IfcSchedulingTime::unlinkFromInverseCounterparts();
}
