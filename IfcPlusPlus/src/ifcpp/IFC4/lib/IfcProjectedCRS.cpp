/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCoordinateOperation.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcNamedUnit.h"
#include "ifcpp/IFC4/include/IfcProjectedCRS.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcProjectedCRS 
IfcProjectedCRS::IfcProjectedCRS() {}
IfcProjectedCRS::IfcProjectedCRS( int id ) { m_id = id; }
IfcProjectedCRS::~IfcProjectedCRS() {}
shared_ptr<IfcPPObject> IfcProjectedCRS::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcProjectedCRS> copy_self( new IfcProjectedCRS() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_GeodeticDatum ) { copy_self->m_GeodeticDatum = dynamic_pointer_cast<IfcIdentifier>( m_GeodeticDatum->getDeepCopy(options) ); }
	if( m_VerticalDatum ) { copy_self->m_VerticalDatum = dynamic_pointer_cast<IfcIdentifier>( m_VerticalDatum->getDeepCopy(options) ); }
	if( m_MapProjection ) { copy_self->m_MapProjection = dynamic_pointer_cast<IfcIdentifier>( m_MapProjection->getDeepCopy(options) ); }
	if( m_MapZone ) { copy_self->m_MapZone = dynamic_pointer_cast<IfcIdentifier>( m_MapZone->getDeepCopy(options) ); }
	if( m_MapUnit ) { copy_self->m_MapUnit = dynamic_pointer_cast<IfcNamedUnit>( m_MapUnit->getDeepCopy(options) ); }
	return copy_self;
}
void IfcProjectedCRS::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCPROJECTEDCRS" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_GeodeticDatum ) { m_GeodeticDatum->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_VerticalDatum ) { m_VerticalDatum->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_MapProjection ) { m_MapProjection->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MapZone ) { m_MapZone->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MapUnit ) { stream << "#" << m_MapUnit->m_id; } else { stream << "$"; }
	stream << ");";
}
void IfcProjectedCRS::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcProjectedCRS::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcProjectedCRS, expecting 7, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	m_GeodeticDatum = IfcIdentifier::createObjectFromSTEP( args[2], map );
	m_VerticalDatum = IfcIdentifier::createObjectFromSTEP( args[3], map );
	m_MapProjection = IfcIdentifier::createObjectFromSTEP( args[4], map );
	m_MapZone = IfcIdentifier::createObjectFromSTEP( args[5], map );
	readEntityReference( args[6], m_MapUnit, map );
}
void IfcProjectedCRS::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcCoordinateReferenceSystem::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "MapProjection", m_MapProjection ) );
	vec_attributes.push_back( std::make_pair( "MapZone", m_MapZone ) );
	vec_attributes.push_back( std::make_pair( "MapUnit", m_MapUnit ) );
}
void IfcProjectedCRS::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcCoordinateReferenceSystem::getAttributesInverse( vec_attributes_inverse );
}
void IfcProjectedCRS::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcCoordinateReferenceSystem::setInverseCounterparts( ptr_self_entity );
}
void IfcProjectedCRS::unlinkFromInverseCounterparts()
{
	IfcCoordinateReferenceSystem::unlinkFromInverseCounterparts();
}
