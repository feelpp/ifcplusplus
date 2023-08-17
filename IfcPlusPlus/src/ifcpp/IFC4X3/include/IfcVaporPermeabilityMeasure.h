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
	// TYPE IfcVaporPermeabilityMeasure = REAL;
	class IFCQUERY_EXPORT IfcVaporPermeabilityMeasure : public IfcDerivedMeasureValue
	{
	public:
		IfcVaporPermeabilityMeasure() = default;
		IfcVaporPermeabilityMeasure( double value );
		virtual uint32_t classID() const { return 3345633955; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcVaporPermeabilityMeasure> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		double m_value;
	};
}
