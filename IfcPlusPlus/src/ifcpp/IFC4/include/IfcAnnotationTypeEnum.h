/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcAnnotationTypeEnum = ENUMERATION OF	(ASSUMEDPOINT	,ASBUILTAREA	,ASBUILTLINE	,NON_PHYSICAL_SIGNAL	,ASSUMEDLINE	,WIDTHEVENT	,ASSUMEDAREA	,SUPERELEVATIONEVENT	,ASBUILTPOINT	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcAnnotationTypeEnum : virtual public BuildingObject
{
public:
	enum IfcAnnotationTypeEnumEnum
	{
		ENUM_ASSUMEDPOINT,
		ENUM_ASBUILTAREA,
		ENUM_ASBUILTLINE,
		ENUM_NON_PHYSICAL_SIGNAL,
		ENUM_ASSUMEDLINE,
		ENUM_WIDTHEVENT,
		ENUM_ASSUMEDAREA,
		ENUM_SUPERELEVATIONEVENT,
		ENUM_ASBUILTPOINT,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcAnnotationTypeEnum() = default;
	IfcAnnotationTypeEnum( IfcAnnotationTypeEnumEnum e ) { m_enum = e; }
	~IfcAnnotationTypeEnum() = default;
	virtual const char* className() const { return "IfcAnnotationTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcAnnotationTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcAnnotationTypeEnumEnum m_enum;
};
