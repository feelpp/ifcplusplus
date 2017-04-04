/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcCurveOrEdgeCurve.h"
#include "IfcEdge.h"
class IFCPP_EXPORT IfcCurve;
class IFCPP_EXPORT IfcBoolean;
//ENTITY
class IFCPP_EXPORT IfcEdgeCurve : virtual public IfcCurveOrEdgeCurve, public IfcEdge
{ 
public:
	IfcEdgeCurve();
	IfcEdgeCurve( int id );
	~IfcEdgeCurve();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 4; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcEdgeCurve"; }


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcTopologicalRepresentationItem -----------------------------------------------------------

	// IfcEdge -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcVertex>									m_EdgeStart;
	//  shared_ptr<IfcVertex>									m_EdgeEnd;

	// IfcEdgeCurve -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcCurve>									m_EdgeGeometry;
	shared_ptr<IfcBoolean>									m_SameSense;
};

