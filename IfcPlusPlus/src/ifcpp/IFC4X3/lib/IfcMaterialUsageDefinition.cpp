/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcMaterialUsageDefinition.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociatesMaterial.h"

// ENTITY IfcMaterialUsageDefinition 
IFC4X3::IfcMaterialUsageDefinition::IfcMaterialUsageDefinition( int tag ) { m_tag = tag; }
void IFC4X3::IfcMaterialUsageDefinition::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCMATERIALUSAGEDEFINITION" << "(";
	stream << ");";
}
void IFC4X3::IfcMaterialUsageDefinition::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcMaterialUsageDefinition::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
}
void IFC4X3::IfcMaterialUsageDefinition::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
}
void IFC4X3::IfcMaterialUsageDefinition::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	shared_ptr<AttributeObjectVector> AssociatedTo_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_AssociatedTo_inverse.size(); ++i )
	{
		if( !m_AssociatedTo_inverse[i].expired() )
		{
			AssociatedTo_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelAssociatesMaterial>( m_AssociatedTo_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "AssociatedTo_inverse", AssociatedTo_inverse_vec_obj ) );
}
void IFC4X3::IfcMaterialUsageDefinition::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcMaterialUsageDefinition::unlinkFromInverseCounterparts()
{
}
