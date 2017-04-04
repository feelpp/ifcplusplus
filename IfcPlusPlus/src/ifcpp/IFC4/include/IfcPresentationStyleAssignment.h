/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcStyleAssignmentSelect.h"
class IFCPP_EXPORT IfcPresentationStyleSelect;
//ENTITY
class IFCPP_EXPORT IfcPresentationStyleAssignment : virtual public IfcStyleAssignmentSelect, public IfcPPEntity
{ 
public:
	IfcPresentationStyleAssignment();
	IfcPresentationStyleAssignment( int id );
	~IfcPresentationStyleAssignment();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 1; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcPresentationStyleAssignment"; }


	// IfcPresentationStyleAssignment -----------------------------------------------------------
	// attributes:
	std::vector<shared_ptr<IfcPresentationStyleSelect> >	m_Styles;
};

