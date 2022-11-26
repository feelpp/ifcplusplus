/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcMeasureValue.h"

namespace IFC4X3
{
	// TYPE IfcNumericMeasure = NUMBER;
	class IFCQUERY_EXPORT IfcNumericMeasure : public IfcMeasureValue
	{
	public:
		IfcNumericMeasure() = default;
		IfcNumericMeasure( int value );
		virtual uint32_t classID() const { return 2395907400; }
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcNumericMeasure> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		int m_value;
	};
}

