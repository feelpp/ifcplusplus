/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"
#include "ifcpp/IFC4X3/include/IfcTessellatedItem.h"

// ENTITY IfcTessellatedItem 
IFC4X3::IfcTessellatedItem::IfcTessellatedItem( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcTessellatedItem::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTessellatedItem> copy_self( new IfcTessellatedItem() );
	return copy_self;
}
void IFC4X3::IfcTessellatedItem::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCTESSELLATEDITEM" << "(";
	stream << ");";
}
void IFC4X3::IfcTessellatedItem::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcTessellatedItem::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
}
void IFC4X3::IfcTessellatedItem::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcGeometricRepresentationItem::getAttributes( vec_attributes );
}
void IFC4X3::IfcTessellatedItem::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcTessellatedItem::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcTessellatedItem::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}