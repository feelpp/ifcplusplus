/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcMeasureValue.h"
#include "IfcSizeSelect.h"

// TYPE IfcDescriptiveMeasure = STRING;
class IFCPP_EXPORT IfcDescriptiveMeasure : public IfcMeasureValue, public IfcSizeSelect
{
public:
	IfcDescriptiveMeasure();
	IfcDescriptiveMeasure( std::wstring value );
	~IfcDescriptiveMeasure();
	virtual const char* className() const { return "IfcDescriptiveMeasure"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcDescriptiveMeasure> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	std::wstring m_value;
};

