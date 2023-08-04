/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcClosedShell.h"
#include "ifcpp/IFC4X3/include/IfcManifoldSolidBrep.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcManifoldSolidBrep 
IFC4X3::IfcManifoldSolidBrep::IfcManifoldSolidBrep( int tag ) { m_tag = tag; }
void IFC4X3::IfcManifoldSolidBrep::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCMANIFOLDSOLIDBREP" << "(";
	if( m_Outer ) { stream << "#" << m_Outer->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcManifoldSolidBrep::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcManifoldSolidBrep::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_Outer, map, errorStream );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcManifoldSolidBrep, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcManifoldSolidBrep::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcSolidModel::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Outer", m_Outer ) );
}
void IFC4X3::IfcManifoldSolidBrep::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcSolidModel::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcManifoldSolidBrep::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSolidModel::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcManifoldSolidBrep::unlinkFromInverseCounterparts()
{
	IfcSolidModel::unlinkFromInverseCounterparts();
}
