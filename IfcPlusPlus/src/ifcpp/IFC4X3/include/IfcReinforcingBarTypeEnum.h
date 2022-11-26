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
	// TYPE IfcReinforcingBarTypeEnum = ENUMERATION OF	(ANCHORING	,EDGE	,LIGATURE	,MAIN	,PUNCHING	,RING	,SHEAR	,SPACEBAR	,STUD	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcReinforcingBarTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcReinforcingBarTypeEnumEnum
		{
			ENUM_ANCHORING,
			ENUM_EDGE,
			ENUM_LIGATURE,
			ENUM_MAIN,
			ENUM_PUNCHING,
			ENUM_RING,
			ENUM_SHEAR,
			ENUM_SPACEBAR,
			ENUM_STUD,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcReinforcingBarTypeEnum() = default;
		IfcReinforcingBarTypeEnum( IfcReinforcingBarTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 145283476; }
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcReinforcingBarTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcReinforcingBarTypeEnumEnum m_enum;
	};
}
