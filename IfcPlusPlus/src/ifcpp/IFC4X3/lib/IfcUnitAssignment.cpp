/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcUnit.h"
#include "ifcpp/IFC4X3/include/IfcUnitAssignment.h"

// ENTITY IfcUnitAssignment 
IFC4X3::IfcUnitAssignment::IfcUnitAssignment( int tag ) { m_tag = tag; }
void IFC4X3::IfcUnitAssignment::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCUNITASSIGNMENT" << "(";
	stream << "(";
	for( size_t ii = 0; ii < m_Units.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcUnit>& type_object = m_Units[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ");";
}
void IFC4X3::IfcUnitAssignment::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcUnitAssignment::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcUnitAssignment, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	readSelectList( args[0], m_Units, map, errorStream );
}
void IFC4X3::IfcUnitAssignment::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	shared_ptr<AttributeObjectVector> Units_vec_object( new AttributeObjectVector() );
	std::copy( m_Units.begin(), m_Units.end(), std::back_inserter( Units_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Units", Units_vec_object ) );
}
void IFC4X3::IfcUnitAssignment::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IFC4X3::IfcUnitAssignment::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcUnitAssignment::unlinkFromInverseCounterparts()
{
}
