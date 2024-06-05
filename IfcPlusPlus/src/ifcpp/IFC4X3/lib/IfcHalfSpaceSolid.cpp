/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcHalfSpaceSolid.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"
#include "ifcpp/IFC4X3/include/IfcSurface.h"

// ENTITY IfcHalfSpaceSolid 
IFC4X3::IfcHalfSpaceSolid::IfcHalfSpaceSolid( int tag ) { m_tag = tag; }
void IFC4X3::IfcHalfSpaceSolid::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCHALFSPACESOLID" << "(";
	if( m_BaseSurface ) { stream << "#" << m_BaseSurface->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_AgreementFlag ) { m_AgreementFlag->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcHalfSpaceSolid::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcHalfSpaceSolid::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_BaseSurface, map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_AgreementFlag = IfcBoolean::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcHalfSpaceSolid, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcHalfSpaceSolid::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "BaseSurface", m_BaseSurface ) );
	vec_attributes.emplace_back( std::make_pair( "AgreementFlag", m_AgreementFlag ) );
}
void IFC4X3::IfcHalfSpaceSolid::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcHalfSpaceSolid::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcHalfSpaceSolid::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
