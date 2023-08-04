/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <iostream>
#include <sstream>
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcCurveFontOrScaledCurveFontSelect = SELECT	(IfcCurveStyleFontAndScaling	,IfcCurveStyleFontSelect);
	class IFCQUERY_EXPORT IfcCurveFontOrScaledCurveFontSelect : virtual public BuildingObject
	{
	public:
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const = 0;
		static shared_ptr<IfcCurveFontOrScaledCurveFontSelect> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
	};
}

