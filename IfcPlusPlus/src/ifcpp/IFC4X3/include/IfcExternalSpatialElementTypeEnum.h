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
	// TYPE IfcExternalSpatialElementTypeEnum = ENUMERATION OF	(EXTERNAL	,EXTERNAL_EARTH	,EXTERNAL_FIRE	,EXTERNAL_WATER	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcExternalSpatialElementTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcExternalSpatialElementTypeEnumEnum
		{
			ENUM_EXTERNAL,
			ENUM_EXTERNAL_EARTH,
			ENUM_EXTERNAL_FIRE,
			ENUM_EXTERNAL_WATER,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcExternalSpatialElementTypeEnum() = default;
		IfcExternalSpatialElementTypeEnum( IfcExternalSpatialElementTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 3344706444; }
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcExternalSpatialElementTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcExternalSpatialElementTypeEnumEnum m_enum;
	};
}

