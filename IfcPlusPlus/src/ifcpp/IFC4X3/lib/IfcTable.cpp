/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcTable.h"
#include "ifcpp/IFC4X3/include/IfcTableColumn.h"
#include "ifcpp/IFC4X3/include/IfcTableRow.h"

// ENTITY IfcTable 
IFC4X3::IfcTable::IfcTable( int tag ) { m_tag = tag; }
void IFC4X3::IfcTable::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCTABLE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Rows );
	stream << ",";
	writeEntityList( stream, m_Columns );
	stream << ");";
}
void IFC4X3::IfcTable::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcTable::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTable, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReferenceList( args[1], m_Rows, map, errorStream );
	readEntityReferenceList( args[2], m_Columns, map, errorStream );
}
void IFC4X3::IfcTable::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	shared_ptr<AttributeObjectVector> Rows_vec_object( new AttributeObjectVector() );
	std::copy( m_Rows.begin(), m_Rows.end(), std::back_inserter( Rows_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Rows", Rows_vec_object ) );
	shared_ptr<AttributeObjectVector> Columns_vec_object( new AttributeObjectVector() );
	std::copy( m_Columns.begin(), m_Columns.end(), std::back_inserter( Columns_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Columns", Columns_vec_object ) );
}
void IFC4X3::IfcTable::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IFC4X3::IfcTable::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcTable::unlinkFromInverseCounterparts()
{
}
