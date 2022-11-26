/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcForceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcStructuralLoadSingleForce.h"
#include "ifcpp/IFC4X3/include/IfcTorqueMeasure.h"

// ENTITY IfcStructuralLoadSingleForce 
IFC4X3::IfcStructuralLoadSingleForce::IfcStructuralLoadSingleForce( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcStructuralLoadSingleForce::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStructuralLoadSingleForce> copy_self( new IfcStructuralLoadSingleForce() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_ForceX ) { copy_self->m_ForceX = dynamic_pointer_cast<IfcForceMeasure>( m_ForceX->getDeepCopy(options) ); }
	if( m_ForceY ) { copy_self->m_ForceY = dynamic_pointer_cast<IfcForceMeasure>( m_ForceY->getDeepCopy(options) ); }
	if( m_ForceZ ) { copy_self->m_ForceZ = dynamic_pointer_cast<IfcForceMeasure>( m_ForceZ->getDeepCopy(options) ); }
	if( m_MomentX ) { copy_self->m_MomentX = dynamic_pointer_cast<IfcTorqueMeasure>( m_MomentX->getDeepCopy(options) ); }
	if( m_MomentY ) { copy_self->m_MomentY = dynamic_pointer_cast<IfcTorqueMeasure>( m_MomentY->getDeepCopy(options) ); }
	if( m_MomentZ ) { copy_self->m_MomentZ = dynamic_pointer_cast<IfcTorqueMeasure>( m_MomentZ->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcStructuralLoadSingleForce::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCSTRUCTURALLOADSINGLEFORCE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ForceX ) { m_ForceX->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ForceY ) { m_ForceY->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ForceZ ) { m_ForceZ->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MomentX ) { m_MomentX->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MomentY ) { m_MomentY->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MomentZ ) { m_MomentZ->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcStructuralLoadSingleForce::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcStructuralLoadSingleForce::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStructuralLoadSingleForce, expecting 7, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );
	m_ForceX = IfcForceMeasure::createObjectFromSTEP( args[1], map, errorStream );
	m_ForceY = IfcForceMeasure::createObjectFromSTEP( args[2], map, errorStream );
	m_ForceZ = IfcForceMeasure::createObjectFromSTEP( args[3], map, errorStream );
	m_MomentX = IfcTorqueMeasure::createObjectFromSTEP( args[4], map, errorStream );
	m_MomentY = IfcTorqueMeasure::createObjectFromSTEP( args[5], map, errorStream );
	m_MomentZ = IfcTorqueMeasure::createObjectFromSTEP( args[6], map, errorStream );
}
void IFC4X3::IfcStructuralLoadSingleForce::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcStructuralLoadStatic::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ForceX", m_ForceX ) );
	vec_attributes.emplace_back( std::make_pair( "ForceY", m_ForceY ) );
	vec_attributes.emplace_back( std::make_pair( "ForceZ", m_ForceZ ) );
	vec_attributes.emplace_back( std::make_pair( "MomentX", m_MomentX ) );
	vec_attributes.emplace_back( std::make_pair( "MomentY", m_MomentY ) );
	vec_attributes.emplace_back( std::make_pair( "MomentZ", m_MomentZ ) );
}
void IFC4X3::IfcStructuralLoadSingleForce::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcStructuralLoadStatic::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcStructuralLoadSingleForce::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcStructuralLoadStatic::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcStructuralLoadSingleForce::unlinkFromInverseCounterparts()
{
	IfcStructuralLoadStatic::unlinkFromInverseCounterparts();
}
