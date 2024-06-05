/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcConnectedFaceSet.h"
#include "ifcpp/IFC4X3/include/IfcFace.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcConnectedFaceSet 
IFC4X3::IfcConnectedFaceSet::IfcConnectedFaceSet( int tag ) { m_tag = tag; }
void IFC4X3::IfcConnectedFaceSet::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCCONNECTEDFACESET" << "(";
	writeEntityList( stream, m_CfsFaces );
	stream << ");";
}
void IFC4X3::IfcConnectedFaceSet::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcConnectedFaceSet::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReferenceList( args[0], m_CfsFaces, map, errorStream, entityIdNotFound );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcConnectedFaceSet, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcConnectedFaceSet::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcTopologicalRepresentationItem::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> CfsFaces_vec_object( new AttributeObjectVector() );
	std::copy( m_CfsFaces.begin(), m_CfsFaces.end(), std::back_inserter( CfsFaces_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "CfsFaces", CfsFaces_vec_object ) );
}
void IFC4X3::IfcConnectedFaceSet::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcTopologicalRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcConnectedFaceSet::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcTopologicalRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcConnectedFaceSet::unlinkFromInverseCounterparts()
{
	IfcTopologicalRepresentationItem::unlinkFromInverseCounterparts();
}
