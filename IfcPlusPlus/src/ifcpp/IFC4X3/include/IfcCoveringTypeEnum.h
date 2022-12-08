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
	// TYPE IfcCoveringTypeEnum = ENUMERATION OF	(CEILING	,CLADDING	,COPING	,FLOORING	,INSULATION	,MEMBRANE	,MOLDING	,ROOFING	,SKIRTINGBOARD	,SLEEVING	,TOPPING	,WRAPPING	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcCoveringTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcCoveringTypeEnumEnum
		{
			ENUM_CEILING,
			ENUM_CLADDING,
			ENUM_COPING,
			ENUM_FLOORING,
			ENUM_INSULATION,
			ENUM_MEMBRANE,
			ENUM_MOLDING,
			ENUM_ROOFING,
			ENUM_SKIRTINGBOARD,
			ENUM_SLEEVING,
			ENUM_TOPPING,
			ENUM_WRAPPING,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcCoveringTypeEnum() = default;
		IfcCoveringTypeEnum( IfcCoveringTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2966862399; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcCoveringTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcCoveringTypeEnumEnum m_enum;
	};
}

