/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcDistributionChamberElementTypeEnum = ENUMERATION OF	(FORMEDDUCT	,INSPECTIONCHAMBER	,INSPECTIONPIT	,MANHOLE	,METERCHAMBER	,SUMP	,TRENCH	,VALVECHAMBER	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcDistributionChamberElementTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcDistributionChamberElementTypeEnumEnum
	{
		ENUM_FORMEDDUCT,
		ENUM_INSPECTIONCHAMBER,
		ENUM_INSPECTIONPIT,
		ENUM_MANHOLE,
		ENUM_METERCHAMBER,
		ENUM_SUMP,
		ENUM_TRENCH,
		ENUM_VALVECHAMBER,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcDistributionChamberElementTypeEnum();
	IfcDistributionChamberElementTypeEnum( IfcDistributionChamberElementTypeEnumEnum e ) { m_enum = e; }
	~IfcDistributionChamberElementTypeEnum();
	virtual const char* className() const { return "IfcDistributionChamberElementTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcDistributionChamberElementTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcDistributionChamberElementTypeEnumEnum m_enum;
};

