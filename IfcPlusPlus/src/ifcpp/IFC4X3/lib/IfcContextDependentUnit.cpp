/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcContextDependentUnit.h"
#include "ifcpp/IFC4X3/include/IfcDimensionalExponents.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcUnitEnum.h"

// ENTITY IfcContextDependentUnit 
IFC4X3::IfcContextDependentUnit::IfcContextDependentUnit( int tag ) { m_tag = tag; }
void IFC4X3::IfcContextDependentUnit::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCCONTEXTDEPENDENTUNIT" << "(";
	if( m_Dimensions ) { stream << "#" << m_Dimensions->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_UnitType ) { m_UnitType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcContextDependentUnit::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcContextDependentUnit::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_Dimensions, map, errorStream );}
	if( num_args > 1 ){m_UnitType = IfcUnitEnum::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcContextDependentUnit, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcContextDependentUnit::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcNamedUnit::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
}
void IFC4X3::IfcContextDependentUnit::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcNamedUnit::getAttributesInverse( vec_attributes_inverse );
	shared_ptr<AttributeObjectVector> HasExternalReference_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_HasExternalReference_inverse.size(); ++i )
	{
		if( !m_HasExternalReference_inverse[i].expired() )
		{
			HasExternalReference_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcExternalReferenceRelationship>( m_HasExternalReference_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "HasExternalReference_inverse", HasExternalReference_inverse_vec_obj ) );
}
void IFC4X3::IfcContextDependentUnit::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcNamedUnit::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcContextDependentUnit::unlinkFromInverseCounterparts()
{
	IfcNamedUnit::unlinkFromInverseCounterparts();
}
