/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCardinalPointReference.h"
#include "ifcpp/IFC4/include/IfcMaterialProfileSet.h"
#include "ifcpp/IFC4/include/IfcMaterialProfileSetUsage.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcRelAssociatesMaterial.h"

// ENTITY IfcMaterialProfileSetUsage 
IfcMaterialProfileSetUsage::IfcMaterialProfileSetUsage() {}
IfcMaterialProfileSetUsage::IfcMaterialProfileSetUsage( int id ) { m_id = id; }
IfcMaterialProfileSetUsage::~IfcMaterialProfileSetUsage() {}
shared_ptr<IfcPPObject> IfcMaterialProfileSetUsage::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcMaterialProfileSetUsage> copy_self( new IfcMaterialProfileSetUsage() );
	if( m_ForProfileSet ) { copy_self->m_ForProfileSet = dynamic_pointer_cast<IfcMaterialProfileSet>( m_ForProfileSet->getDeepCopy(options) ); }
	if( m_CardinalPoint ) { copy_self->m_CardinalPoint = dynamic_pointer_cast<IfcCardinalPointReference>( m_CardinalPoint->getDeepCopy(options) ); }
	if( m_ReferenceExtent ) { copy_self->m_ReferenceExtent = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_ReferenceExtent->getDeepCopy(options) ); }
	return copy_self;
}
void IfcMaterialProfileSetUsage::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCMATERIALPROFILESETUSAGE" << "(";
	if( m_ForProfileSet ) { stream << "#" << m_ForProfileSet->m_id; } else { stream << "$"; }
	stream << ",";
	if( m_CardinalPoint ) { m_CardinalPoint->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ReferenceExtent ) { m_ReferenceExtent->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcMaterialProfileSetUsage::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcMaterialProfileSetUsage::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMaterialProfileSetUsage, expecting 3, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_ForProfileSet, map );
	m_CardinalPoint = IfcCardinalPointReference::createObjectFromSTEP( args[1], map );
	m_ReferenceExtent = IfcPositiveLengthMeasure::createObjectFromSTEP( args[2], map );
}
void IfcMaterialProfileSetUsage::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcMaterialUsageDefinition::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "ForProfileSet", m_ForProfileSet ) );
	vec_attributes.push_back( std::make_pair( "CardinalPoint", m_CardinalPoint ) );
	vec_attributes.push_back( std::make_pair( "ReferenceExtent", m_ReferenceExtent ) );
}
void IfcMaterialProfileSetUsage::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcMaterialUsageDefinition::getAttributesInverse( vec_attributes_inverse );
}
void IfcMaterialProfileSetUsage::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcMaterialUsageDefinition::setInverseCounterparts( ptr_self_entity );
}
void IfcMaterialProfileSetUsage::unlinkFromInverseCounterparts()
{
	IfcMaterialUsageDefinition::unlinkFromInverseCounterparts();
}
