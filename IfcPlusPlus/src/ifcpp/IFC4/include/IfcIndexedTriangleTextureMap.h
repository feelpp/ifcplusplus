/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcIndexedTextureMap.h"
class IFCPP_EXPORT IfcPositiveInteger;
//ENTITY
class IFCPP_EXPORT IfcIndexedTriangleTextureMap : public IfcIndexedTextureMap
{ 
public:
	IfcIndexedTriangleTextureMap();
	IfcIndexedTriangleTextureMap( int id );
	~IfcIndexedTriangleTextureMap();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 4; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcIndexedTriangleTextureMap"; }


	// IfcPresentationItem -----------------------------------------------------------

	// IfcTextureCoordinate -----------------------------------------------------------
	// attributes:
	//  std::vector<shared_ptr<IfcSurfaceTexture> >	m_Maps;

	// IfcIndexedTextureMap -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcTessellatedFaceSet>			m_MappedTo;
	//  shared_ptr<IfcTextureVertexList>			m_TexCoords;

	// IfcIndexedTriangleTextureMap -----------------------------------------------------------
	// attributes:
	std::vector<std::vector<shared_ptr<IfcPositiveInteger> > >	m_TexCoordIndex;			//optional
};

