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
	// TYPE IfcAnnotationTypeEnum = ENUMERATION OF	(ASBUILTAREA	,ASBUILTLINE	,ASBUILTPOINT	,ASSUMEDAREA	,ASSUMEDLINE	,ASSUMEDPOINT	,NON_PHYSICAL_SIGNAL	,SUPERELEVATIONEVENT	,WIDTHEVENT	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcAnnotationTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcAnnotationTypeEnumEnum
		{
			ENUM_ASBUILTAREA,
			ENUM_ASBUILTLINE,
			ENUM_ASBUILTPOINT,
			ENUM_ASSUMEDAREA,
			ENUM_ASSUMEDLINE,
			ENUM_ASSUMEDPOINT,
			ENUM_NON_PHYSICAL_SIGNAL,
			ENUM_SUPERELEVATIONEVENT,
			ENUM_WIDTHEVENT,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcAnnotationTypeEnum() = default;
		IfcAnnotationTypeEnum( IfcAnnotationTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 3733744356; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcAnnotationTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcAnnotationTypeEnumEnum m_enum;
	};
}
