/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcArbitraryProfileDefWithVoids.h"
#include "ifcpp/IFC4X3/include/IfcCurve.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcProfileProperties.h"
#include "ifcpp/IFC4X3/include/IfcProfileTypeEnum.h"

// ENTITY IfcArbitraryProfileDefWithVoids 
IFC4X3::IfcArbitraryProfileDefWithVoids::IfcArbitraryProfileDefWithVoids( int tag ) { m_tag = tag; }
void IFC4X3::IfcArbitraryProfileDefWithVoids::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCARBITRARYPROFILEDEFWITHVOIDS" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OuterCurve ) { stream << "#" << m_OuterCurve->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_InnerCurves );
	stream << ");";
}
void IFC4X3::IfcArbitraryProfileDefWithVoids::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcArbitraryProfileDefWithVoids::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args > 2 ){readEntityReference( args[2], m_OuterCurve, map, errorStream );}
	if( num_args > 3 ){readEntityReferenceList( args[3], m_InnerCurves, map, errorStream );}
	if( num_args != 4 ){ errorStream << "Wrong parameter count for entity IfcArbitraryProfileDefWithVoids, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcArbitraryProfileDefWithVoids::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcArbitraryClosedProfileDef::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> InnerCurves_vec_object( new AttributeObjectVector() );
	std::copy( m_InnerCurves.begin(), m_InnerCurves.end(), std::back_inserter( InnerCurves_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "InnerCurves", InnerCurves_vec_object ) );
}
void IFC4X3::IfcArbitraryProfileDefWithVoids::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcArbitraryClosedProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcArbitraryProfileDefWithVoids::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcArbitraryClosedProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcArbitraryProfileDefWithVoids::unlinkFromInverseCounterparts()
{
	IfcArbitraryClosedProfileDef::unlinkFromInverseCounterparts();
}
