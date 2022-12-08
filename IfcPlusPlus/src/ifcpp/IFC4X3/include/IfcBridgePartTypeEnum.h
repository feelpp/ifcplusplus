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
	// TYPE IfcBridgePartTypeEnum = ENUMERATION OF	(ABUTMENT	,DECK	,DECK_SEGMENT	,FOUNDATION	,PIER	,PIER_SEGMENT	,PYLON	,SUBSTRUCTURE	,SUPERSTRUCTURE	,SURFACESTRUCTURE	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcBridgePartTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcBridgePartTypeEnumEnum
		{
			ENUM_ABUTMENT,
			ENUM_DECK,
			ENUM_DECK_SEGMENT,
			ENUM_FOUNDATION,
			ENUM_PIER,
			ENUM_PIER_SEGMENT,
			ENUM_PYLON,
			ENUM_SUBSTRUCTURE,
			ENUM_SUPERSTRUCTURE,
			ENUM_SURFACESTRUCTURE,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcBridgePartTypeEnum() = default;
		IfcBridgePartTypeEnum( IfcBridgePartTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 492794765; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcBridgePartTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcBridgePartTypeEnumEnum m_enum;
	};
}

