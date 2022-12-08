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
	// TYPE IfcLayerSetDirectionEnum = ENUMERATION OF	(AXIS1	,AXIS2	,AXIS3);
	class IFCQUERY_EXPORT IfcLayerSetDirectionEnum : virtual public BuildingObject
	{
	public:
		enum IfcLayerSetDirectionEnumEnum
		{
			ENUM_AXIS1,
			ENUM_AXIS2,
			ENUM_AXIS3
		};

		IfcLayerSetDirectionEnum() = default;
		IfcLayerSetDirectionEnum( IfcLayerSetDirectionEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1469346588; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcLayerSetDirectionEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcLayerSetDirectionEnumEnum m_enum;
	};
}

