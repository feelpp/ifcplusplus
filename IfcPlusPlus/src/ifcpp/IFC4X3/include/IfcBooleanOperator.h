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
	// TYPE IfcBooleanOperator = ENUMERATION OF	(DIFFERENCE	,INTERSECTION	,UNION);
	class IFCQUERY_EXPORT IfcBooleanOperator : virtual public BuildingObject
	{
	public:
		enum IfcBooleanOperatorEnum
		{
			ENUM_DIFFERENCE,
			ENUM_INTERSECTION,
			ENUM_UNION
		};

		IfcBooleanOperator() = default;
		IfcBooleanOperator( IfcBooleanOperatorEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 3054888242; }
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcBooleanOperator> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcBooleanOperatorEnum m_enum;
	};
}
