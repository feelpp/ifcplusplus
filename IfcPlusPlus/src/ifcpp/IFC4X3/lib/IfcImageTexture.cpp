/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcCartesianTransformationOperator2D.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcImageTexture.h"
#include "ifcpp/IFC4X3/include/IfcSurfaceStyleWithTextures.h"
#include "ifcpp/IFC4X3/include/IfcTextureCoordinate.h"
#include "ifcpp/IFC4X3/include/IfcURIReference.h"

// ENTITY IfcImageTexture 
IFC4X3::IfcImageTexture::IfcImageTexture( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcImageTexture::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcImageTexture> copy_self( new IfcImageTexture() );
	if( m_RepeatS ) { copy_self->m_RepeatS = dynamic_pointer_cast<IfcBoolean>( m_RepeatS->getDeepCopy(options) ); }
	if( m_RepeatT ) { copy_self->m_RepeatT = dynamic_pointer_cast<IfcBoolean>( m_RepeatT->getDeepCopy(options) ); }
	if( m_Mode ) { copy_self->m_Mode = dynamic_pointer_cast<IfcIdentifier>( m_Mode->getDeepCopy(options) ); }
	if( m_TextureTransform ) { copy_self->m_TextureTransform = dynamic_pointer_cast<IfcCartesianTransformationOperator2D>( m_TextureTransform->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Parameter.size(); ++ii )
	{
		auto item_ii = m_Parameter[ii];
		if( item_ii )
		{
			copy_self->m_Parameter.emplace_back( dynamic_pointer_cast<IfcIdentifier>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_URLReference ) { copy_self->m_URLReference = dynamic_pointer_cast<IfcURIReference>( m_URLReference->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcImageTexture::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCIMAGETEXTURE" << "(";
	if( m_RepeatS ) { m_RepeatS->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RepeatT ) { m_RepeatT->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Mode ) { m_Mode->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TextureTransform ) { stream << "#" << m_TextureTransform->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Parameter.size() > 0 )
	{
		stream << "(";
		for( size_t ii = 0; ii < m_Parameter.size(); ++ii )
		{
			if( ii > 0 )
			{
				stream << ",";
			}
			const shared_ptr<IfcIdentifier>& type_object = m_Parameter[ii];
			if( type_object )
			{
				type_object->getStepParameter( stream, false );
			}
			else
			{
				stream << "$";
			}
		}
		stream << ")";
	}
	else { stream << "$"; }
	stream << ",";
	if( m_URLReference ) { m_URLReference->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcImageTexture::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcImageTexture::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcImageTexture, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_RepeatS = IfcBoolean::createObjectFromSTEP( args[0], map, errorStream );
	m_RepeatT = IfcBoolean::createObjectFromSTEP( args[1], map, errorStream );
	m_Mode = IfcIdentifier::createObjectFromSTEP( args[2], map, errorStream );
	readEntityReference( args[3], m_TextureTransform, map, errorStream );
	readTypeOfStringList( args[4], m_Parameter );
	m_URLReference = IfcURIReference::createObjectFromSTEP( args[5], map, errorStream );
}
void IFC4X3::IfcImageTexture::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcSurfaceTexture::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "URLReference", m_URLReference ) );
}
void IFC4X3::IfcImageTexture::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcSurfaceTexture::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcImageTexture::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSurfaceTexture::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcImageTexture::unlinkFromInverseCounterparts()
{
	IfcSurfaceTexture::unlinkFromInverseCounterparts();
}
