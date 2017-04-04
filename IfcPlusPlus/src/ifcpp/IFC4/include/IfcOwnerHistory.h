/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
class IFCPP_EXPORT IfcPersonAndOrganization;
class IFCPP_EXPORT IfcApplication;
class IFCPP_EXPORT IfcStateEnum;
class IFCPP_EXPORT IfcChangeActionEnum;
class IFCPP_EXPORT IfcTimeStamp;
//ENTITY
class IFCPP_EXPORT IfcOwnerHistory : public IfcPPEntity
{ 
public:
	IfcOwnerHistory();
	IfcOwnerHistory( int id );
	~IfcOwnerHistory();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 8; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcOwnerHistory"; }


	// IfcOwnerHistory -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcPersonAndOrganization>	m_OwningUser;
	shared_ptr<IfcApplication>				m_OwningApplication;
	shared_ptr<IfcStateEnum>				m_State;					//optional
	shared_ptr<IfcChangeActionEnum>			m_ChangeAction;				//optional
	shared_ptr<IfcTimeStamp>				m_LastModifiedDate;			//optional
	shared_ptr<IfcPersonAndOrganization>	m_LastModifyingUser;		//optional
	shared_ptr<IfcApplication>				m_LastModifyingApplication;	//optional
	shared_ptr<IfcTimeStamp>				m_CreationDate;
};

