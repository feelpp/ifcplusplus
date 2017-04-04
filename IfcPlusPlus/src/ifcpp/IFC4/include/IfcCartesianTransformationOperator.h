/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcGeometricRepresentationItem.h"
class IFCPP_EXPORT IfcDirection;
class IFCPP_EXPORT IfcCartesianPoint;
class IFCPP_EXPORT IfcReal;
//ENTITY
class IFCPP_EXPORT IfcCartesianTransformationOperator : public IfcGeometricRepresentationItem
{ 
public:
	IfcCartesianTransformationOperator();
	IfcCartesianTransformationOperator( int id );
	~IfcCartesianTransformationOperator();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 4; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcCartesianTransformationOperator"; }


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcCartesianTransformationOperator -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcDirection>								m_Axis1;					//optional
	shared_ptr<IfcDirection>								m_Axis2;					//optional
	shared_ptr<IfcCartesianPoint>							m_LocalOrigin;
	shared_ptr<IfcReal>										m_Scale;					//optional
};

