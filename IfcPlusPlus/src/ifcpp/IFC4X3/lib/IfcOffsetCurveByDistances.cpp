/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcCurve.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcOffsetCurveByDistances.h"
#include "ifcpp/IFC4X3/include/IfcPointByDistanceExpression.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcOffsetCurveByDistances 
IFC4X3::IfcOffsetCurveByDistances::IfcOffsetCurveByDistances( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcOffsetCurveByDistances::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcOffsetCurveByDistances> copy_self( new IfcOffsetCurveByDistances() );
	if( m_BasisCurve ) { copy_self->m_BasisCurve = dynamic_pointer_cast<IfcCurve>( m_BasisCurve->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_OffsetValues.size(); ++ii )
	{
		auto item_ii = m_OffsetValues[ii];
		if( item_ii )
		{
			copy_self->m_OffsetValues.emplace_back( dynamic_pointer_cast<IfcPointByDistanceExpression>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_Tag ) { copy_self->m_Tag = dynamic_pointer_cast<IfcLabel>( m_Tag->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcOffsetCurveByDistances::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCOFFSETCURVEBYDISTANCES" << "(";
	if( m_BasisCurve ) { stream << "#" << m_BasisCurve->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_OffsetValues );
	stream << ",";
	if( m_Tag ) { m_Tag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcOffsetCurveByDistances::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcOffsetCurveByDistances::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcOffsetCurveByDistances, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_BasisCurve, map, errorStream );
	readEntityReferenceList( args[1], m_OffsetValues, map, errorStream );
	m_Tag = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
}
void IFC4X3::IfcOffsetCurveByDistances::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcOffsetCurve::getAttributes( vec_attributes );
	if( !m_OffsetValues.empty() )
	{
		shared_ptr<AttributeObjectVector> OffsetValues_vec_object( new AttributeObjectVector() );
		std::copy( m_OffsetValues.begin(), m_OffsetValues.end(), std::back_inserter( OffsetValues_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "OffsetValues", OffsetValues_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "Tag", m_Tag ) );
}
void IFC4X3::IfcOffsetCurveByDistances::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcOffsetCurve::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcOffsetCurveByDistances::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcOffsetCurve::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcOffsetCurveByDistances::unlinkFromInverseCounterparts()
{
	IfcOffsetCurve::unlinkFromInverseCounterparts();
}
