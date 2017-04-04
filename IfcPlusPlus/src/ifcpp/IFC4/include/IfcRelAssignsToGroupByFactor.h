/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcRelAssignsToGroup.h"
class IFCPP_EXPORT IfcRatioMeasure;
//ENTITY
class IFCPP_EXPORT IfcRelAssignsToGroupByFactor : public IfcRelAssignsToGroup
{ 
public:
	IfcRelAssignsToGroupByFactor();
	IfcRelAssignsToGroupByFactor( int id );
	~IfcRelAssignsToGroupByFactor();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 8; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcRelAssignsToGroupByFactor"; }


	// IfcRoot -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcGloballyUniqueId>					m_GlobalId;
	//  shared_ptr<IfcOwnerHistory>						m_OwnerHistory;				//optional
	//  shared_ptr<IfcLabel>							m_Name;						//optional
	//  shared_ptr<IfcText>								m_Description;				//optional

	// IfcRelationship -----------------------------------------------------------

	// IfcRelAssigns -----------------------------------------------------------
	// attributes:
	//  std::vector<shared_ptr<IfcObjectDefinition> >	m_RelatedObjects;
	//  shared_ptr<IfcObjectTypeEnum>					m_RelatedObjectsType;		//optional

	// IfcRelAssignsToGroup -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcGroup>							m_RelatingGroup;

	// IfcRelAssignsToGroupByFactor -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcRatioMeasure>						m_Factor;
};

