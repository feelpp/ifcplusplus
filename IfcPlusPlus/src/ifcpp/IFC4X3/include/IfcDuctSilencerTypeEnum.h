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
	// TYPE IfcDuctSilencerTypeEnum = ENUMERATION OF	(FLATOVAL	,RECTANGULAR	,ROUND	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcDuctSilencerTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcDuctSilencerTypeEnumEnum
		{
			ENUM_FLATOVAL,
			ENUM_RECTANGULAR,
			ENUM_ROUND,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcDuctSilencerTypeEnum() = default;
		IfcDuctSilencerTypeEnum( IfcDuctSilencerTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1875623387; }
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcDuctSilencerTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcDuctSilencerTypeEnumEnum m_enum;
	};
}

