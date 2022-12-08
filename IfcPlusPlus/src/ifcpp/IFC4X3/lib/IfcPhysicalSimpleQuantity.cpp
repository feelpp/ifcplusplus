/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcNamedUnit.h"
#include "ifcpp/IFC4X3/include/IfcPhysicalComplexQuantity.h"
#include "ifcpp/IFC4X3/include/IfcPhysicalSimpleQuantity.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcPhysicalSimpleQuantity 
IFC4X3::IfcPhysicalSimpleQuantity::IfcPhysicalSimpleQuantity( int tag ) { m_tag = tag; }
void IFC4X3::IfcPhysicalSimpleQuantity::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCPHYSICALSIMPLEQUANTITY" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Unit ) { stream << "#" << m_Unit->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcPhysicalSimpleQuantity::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcPhysicalSimpleQuantity::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPhysicalSimpleQuantity, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream );
	readEntityReference( args[2], m_Unit, map, errorStream );
}
void IFC4X3::IfcPhysicalSimpleQuantity::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPhysicalQuantity::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Unit", m_Unit ) );
}
void IFC4X3::IfcPhysicalSimpleQuantity::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPhysicalQuantity::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcPhysicalSimpleQuantity::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPhysicalQuantity::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcPhysicalSimpleQuantity::unlinkFromInverseCounterparts()
{
	IfcPhysicalQuantity::unlinkFromInverseCounterparts();
}
