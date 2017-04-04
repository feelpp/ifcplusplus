/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcSurfaceStyleElementSelect.h"
#include "IfcPresentationItem.h"
class IFCPP_EXPORT IfcColourRgb;
class IFCPP_EXPORT IfcNormalisedRatioMeasure;
//ENTITY
class IFCPP_EXPORT IfcSurfaceStyleShading : virtual public IfcSurfaceStyleElementSelect, public IfcPresentationItem
{ 
public:
	IfcSurfaceStyleShading();
	IfcSurfaceStyleShading( int id );
	~IfcSurfaceStyleShading();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 2; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcSurfaceStyleShading"; }


	// IfcPresentationItem -----------------------------------------------------------

	// IfcSurfaceStyleShading -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcColourRgb>				m_SurfaceColour;
	shared_ptr<IfcNormalisedRatioMeasure>	m_Transparency;				//optional
};

