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
	// TYPE IfcInterceptorTypeEnum = ENUMERATION OF	(CYCLONIC	,GREASE	,OIL	,PETROL	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcInterceptorTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcInterceptorTypeEnumEnum
		{
			ENUM_CYCLONIC,
			ENUM_GREASE,
			ENUM_OIL,
			ENUM_PETROL,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcInterceptorTypeEnum() = default;
		IfcInterceptorTypeEnum( IfcInterceptorTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2548949139; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcInterceptorTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcInterceptorTypeEnumEnum m_enum;
	};
}
