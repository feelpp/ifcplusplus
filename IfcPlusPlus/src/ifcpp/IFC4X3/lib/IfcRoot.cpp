/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRoot.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcRoot 
IFC4X3::IfcRoot::IfcRoot( int tag ) { m_tag = tag; }
void IFC4X3::IfcRoot::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCROOT" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcRoot::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcRoot::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args != 4 ){ errorStream << "Wrong parameter count for entity IfcRoot, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcRoot::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "GlobalId", m_GlobalId ) );
	vec_attributes.emplace_back( std::make_pair( "OwnerHistory", m_OwnerHistory ) );
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.emplace_back( std::make_pair( "Description", m_Description ) );
}
void IFC4X3::IfcRoot::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IFC4X3::IfcRoot::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcRoot::unlinkFromInverseCounterparts()
{
}
