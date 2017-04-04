/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcSurfaceTexture.h"
class IFCPP_EXPORT IfcURIReference;
//ENTITY
class IFCPP_EXPORT IfcImageTexture : public IfcSurfaceTexture
{ 
public:
	IfcImageTexture();
	IfcImageTexture( int id );
	~IfcImageTexture();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 6; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcImageTexture"; }


	// IfcPresentationItem -----------------------------------------------------------

	// IfcSurfaceTexture -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcBoolean>								m_RepeatS;
	//  shared_ptr<IfcBoolean>								m_RepeatT;
	//  shared_ptr<IfcIdentifier>							m_Mode;						//optional
	//  shared_ptr<IfcCartesianTransformationOperator2D>	m_TextureTransform;			//optional
	//  std::vector<shared_ptr<IfcIdentifier> >				m_Parameter;				//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcTextureCoordinate> >		m_IsMappedBy_inverse;
	//  std::vector<weak_ptr<IfcSurfaceStyleWithTextures> >	m_UsedInStyles_inverse;

	// IfcImageTexture -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcURIReference>							m_URLReference;
};

