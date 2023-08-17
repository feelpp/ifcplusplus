/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcDerivedMeasureValue.h"

namespace IFC4X3
{
	// TYPE IfcThermalResistanceMeasure = REAL;
	class IFCQUERY_EXPORT IfcThermalResistanceMeasure : public IfcDerivedMeasureValue
	{
	public:
		IfcThermalResistanceMeasure() = default;
		IfcThermalResistanceMeasure( double value );
		virtual uint32_t classID() const { return 857959152; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcThermalResistanceMeasure> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		double m_value;
	};
}
