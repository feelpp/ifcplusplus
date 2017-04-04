/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcDerivedMeasureValue.h"

// TYPE IfcRotationalFrequencyMeasure = REAL;
class IFCPP_EXPORT IfcRotationalFrequencyMeasure : public IfcDerivedMeasureValue
{
public:
	IfcRotationalFrequencyMeasure();
	IfcRotationalFrequencyMeasure( double value );
	~IfcRotationalFrequencyMeasure();
	virtual const char* className() const { return "IfcRotationalFrequencyMeasure"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcRotationalFrequencyMeasure> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	double m_value;
};

