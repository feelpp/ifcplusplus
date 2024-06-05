/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement.h"
#include "ifcpp/IFC4X3/include/IfcLocalPlacement.h"
#include "ifcpp/IFC4X3/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4X3/include/IfcProduct.h"

// ENTITY IfcLocalPlacement 
IFC4X3::IfcLocalPlacement::IfcLocalPlacement( int tag ) { m_tag = tag; }
void IFC4X3::IfcLocalPlacement::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCLOCALPLACEMENT" << "(";
	if( m_PlacementRelTo ) { stream << "#" << m_PlacementRelTo->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_RelativePlacement ) { m_RelativePlacement->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcLocalPlacement::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcLocalPlacement::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_PlacementRelTo, map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_RelativePlacement = IfcAxis2Placement::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcLocalPlacement, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcLocalPlacement::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcObjectPlacement::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelativePlacement", m_RelativePlacement ) );
}
void IFC4X3::IfcLocalPlacement::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcObjectPlacement::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcLocalPlacement::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcObjectPlacement::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcLocalPlacement::unlinkFromInverseCounterparts()
{
	IfcObjectPlacement::unlinkFromInverseCounterparts();
}
