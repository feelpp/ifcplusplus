/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcPhysicalComplexQuantity.h"
#include "ifcpp/IFC4X3/include/IfcPhysicalQuantity.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcPhysicalQuantity 
IFC4X3::IfcPhysicalQuantity::IfcPhysicalQuantity( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcPhysicalQuantity::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPhysicalQuantity> copy_self( new IfcPhysicalQuantity() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcPhysicalQuantity::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCPHYSICALQUANTITY" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcPhysicalQuantity::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcPhysicalQuantity::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPhysicalQuantity, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream );
}
void IFC4X3::IfcPhysicalQuantity::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.emplace_back( std::make_pair( "Description", m_Description ) );
}
void IFC4X3::IfcPhysicalQuantity::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	if( !m_HasExternalReferences_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> HasExternalReferences_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasExternalReferences_inverse.size(); ++i )
		{
			if( !m_HasExternalReferences_inverse[i].expired() )
			{
				HasExternalReferences_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcExternalReferenceRelationship>( m_HasExternalReferences_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "HasExternalReferences_inverse", HasExternalReferences_inverse_vec_obj ) );
	}
	if( !m_PartOfComplex_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> PartOfComplex_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_PartOfComplex_inverse.size(); ++i )
		{
			if( !m_PartOfComplex_inverse[i].expired() )
			{
				PartOfComplex_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcPhysicalComplexQuantity>( m_PartOfComplex_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "PartOfComplex_inverse", PartOfComplex_inverse_vec_obj ) );
	}
}
void IFC4X3::IfcPhysicalQuantity::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcPhysicalQuantity::unlinkFromInverseCounterparts()
{
}
