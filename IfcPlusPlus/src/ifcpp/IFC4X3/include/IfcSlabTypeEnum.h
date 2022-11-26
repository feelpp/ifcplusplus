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
	// TYPE IfcSlabTypeEnum = ENUMERATION OF	(APPROACH_SLAB	,BASESLAB	,FLOOR	,LANDING	,PAVING	,ROOF	,SIDEWALK	,TRACKSLAB	,WEARING	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcSlabTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcSlabTypeEnumEnum
		{
			ENUM_APPROACH_SLAB,
			ENUM_BASESLAB,
			ENUM_FLOOR,
			ENUM_LANDING,
			ENUM_PAVING,
			ENUM_ROOF,
			ENUM_SIDEWALK,
			ENUM_TRACKSLAB,
			ENUM_WEARING,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcSlabTypeEnum() = default;
		IfcSlabTypeEnum( IfcSlabTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 639531123; }
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcSlabTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcSlabTypeEnumEnum m_enum;
	};
}

