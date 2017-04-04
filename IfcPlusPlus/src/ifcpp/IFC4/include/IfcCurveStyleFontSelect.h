/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <iostream>
#include <sstream>
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "IfcCurveFontOrScaledCurveFontSelect.h"

// TYPE IfcCurveStyleFontSelect = SELECT	(IfcCurveStyleFont	,IfcPreDefinedCurveFont);
class IFCPP_EXPORT IfcCurveStyleFontSelect : public IfcCurveFontOrScaledCurveFontSelect
{
public:
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options ) = 0;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const = 0;
	static shared_ptr<IfcCurveStyleFontSelect> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
};

