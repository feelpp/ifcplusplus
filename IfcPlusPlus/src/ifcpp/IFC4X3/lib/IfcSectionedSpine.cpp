/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4X3/include/IfcCompositeCurve.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcSectionedSpine.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcSectionedSpine 
IFC4X3::IfcSectionedSpine::IfcSectionedSpine( int tag ) { m_tag = tag; }
void IFC4X3::IfcSectionedSpine::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCSECTIONEDSPINE" << "(";
	if( m_SpineCurve ) { stream << "#" << m_SpineCurve->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_CrossSections );
	stream << ",";
	writeEntityList( stream, m_CrossSectionPositions );
	stream << ");";
}
void IFC4X3::IfcSectionedSpine::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcSectionedSpine::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_SpineCurve, map, errorStream );}
	if( num_args > 1 ){readEntityReferenceList( args[1], m_CrossSections, map, errorStream );}
	if( num_args > 2 ){readEntityReferenceList( args[2], m_CrossSectionPositions, map, errorStream );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcSectionedSpine, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcSectionedSpine::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "SpineCurve", m_SpineCurve ) );
	shared_ptr<AttributeObjectVector> CrossSections_vec_object( new AttributeObjectVector() );
	std::copy( m_CrossSections.begin(), m_CrossSections.end(), std::back_inserter( CrossSections_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "CrossSections", CrossSections_vec_object ) );
	shared_ptr<AttributeObjectVector> CrossSectionPositions_vec_object( new AttributeObjectVector() );
	std::copy( m_CrossSectionPositions.begin(), m_CrossSectionPositions.end(), std::back_inserter( CrossSectionPositions_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "CrossSectionPositions", CrossSectionPositions_vec_object ) );
}
void IFC4X3::IfcSectionedSpine::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcSectionedSpine::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcSectionedSpine::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
