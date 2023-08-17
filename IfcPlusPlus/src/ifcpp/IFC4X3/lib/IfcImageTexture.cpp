/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
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
void IFC4X3::IfcImageTexture::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "= IFCIMAGETEXTURE" << "(";
	if( m_RepeatS ) { m_RepeatS->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_RepeatT ) { m_RepeatT->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Mode ) { m_Mode->getStepParameter( stream, false, precision ); } else { stream << "$"; }
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
				type_object->getStepParameter( stream, false, precision );
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
	if( m_URLReference ) { m_URLReference->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcImageTexture::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcImageTexture::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_RepeatS = IfcBoolean::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){m_RepeatT = IfcBoolean::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args > 2 ){m_Mode = IfcIdentifier::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args > 3 ){readEntityReference( args[3], m_TextureTransform, map, errorStream );}
	if( num_args > 4 ){readTypeOfStringList( args[4], m_Parameter );}
	if( num_args > 5 ){m_URLReference = IfcURIReference::createObjectFromSTEP( args[5], map, errorStream );}
	if( num_args != 6 ){ errorStream << "Wrong parameter count for entity IfcImageTexture, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
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
