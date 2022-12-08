/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcLightDistributionCurveEnum = ENUMERATION OF	(TYPE_A	,TYPE_B	,TYPE_C	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcLightDistributionCurveEnum : virtual public BuildingObject
	{
	public:
		enum IfcLightDistributionCurveEnumEnum
		{
			ENUM_TYPE_A,
			ENUM_TYPE_B,
			ENUM_TYPE_C,
			ENUM_NOTDEFINED
		};

		IfcLightDistributionCurveEnum() = default;
		IfcLightDistributionCurveEnum( IfcLightDistributionCurveEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 881902783; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcLightDistributionCurveEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcLightDistributionCurveEnumEnum m_enum;
	};
}

