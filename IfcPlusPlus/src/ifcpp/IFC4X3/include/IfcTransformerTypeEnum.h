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
	// TYPE IfcTransformerTypeEnum = ENUMERATION OF	(CHOPPER	,COMBINED	,CURRENT	,FREQUENCY	,INVERTER	,RECTIFIER	,VOLTAGE	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcTransformerTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcTransformerTypeEnumEnum
		{
			ENUM_CHOPPER,
			ENUM_COMBINED,
			ENUM_CURRENT,
			ENUM_FREQUENCY,
			ENUM_INVERTER,
			ENUM_RECTIFIER,
			ENUM_VOLTAGE,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcTransformerTypeEnum() = default;
		IfcTransformerTypeEnum( IfcTransformerTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 291444547; }
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcTransformerTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcTransformerTypeEnumEnum m_enum;
	};
}

