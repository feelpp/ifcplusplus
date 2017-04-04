/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcUnit.h"
class IFCPP_EXPORT IfcDimensionalExponents;
class IFCPP_EXPORT IfcUnitEnum;
//ENTITY
class IFCPP_EXPORT IfcNamedUnit : virtual public IfcUnit, public IfcPPEntity
{ 
public:
	IfcNamedUnit();
	IfcNamedUnit( int id );
	~IfcNamedUnit();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 2; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcNamedUnit"; }


	// IfcNamedUnit -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcDimensionalExponents>	m_Dimensions;
	shared_ptr<IfcUnitEnum>				m_UnitType;
};

