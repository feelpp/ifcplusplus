/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcDerivedUnitEnum = ENUMERATION OF	(ANGULARVELOCITYUNIT	,AREADENSITYUNIT	,COMPOUNDPLANEANGLEUNIT	,DYNAMICVISCOSITYUNIT	,HEATFLUXDENSITYUNIT	,INTEGERCOUNTRATEUNIT	,ISOTHERMALMOISTURECAPACITYUNIT	,KINEMATICVISCOSITYUNIT	,LINEARVELOCITYUNIT	,MASSDENSITYUNIT	,MASSFLOWRATEUNIT	,MOISTUREDIFFUSIVITYUNIT	,MOLECULARWEIGHTUNIT	,SPECIFICHEATCAPACITYUNIT	,THERMALADMITTANCEUNIT	,THERMALCONDUCTANCEUNIT	,THERMALRESISTANCEUNIT	,THERMALTRANSMITTANCEUNIT	,VAPORPERMEABILITYUNIT	,VOLUMETRICFLOWRATEUNIT	,ROTATIONALFREQUENCYUNIT	,TORQUEUNIT	,MOMENTOFINERTIAUNIT	,LINEARMOMENTUNIT	,LINEARFORCEUNIT	,PLANARFORCEUNIT	,MODULUSOFELASTICITYUNIT	,SHEARMODULUSUNIT	,LINEARSTIFFNESSUNIT	,ROTATIONALSTIFFNESSUNIT	,MODULUSOFSUBGRADEREACTIONUNIT	,ACCELERATIONUNIT	,CURVATUREUNIT	,HEATINGVALUEUNIT	,IONCONCENTRATIONUNIT	,LUMINOUSINTENSITYDISTRIBUTIONUNIT	,MASSPERLENGTHUNIT	,MODULUSOFLINEARSUBGRADEREACTIONUNIT	,MODULUSOFROTATIONALSUBGRADEREACTIONUNIT	,PHUNIT	,ROTATIONALMASSUNIT	,SECTIONAREAINTEGRALUNIT	,SECTIONMODULUSUNIT	,SOUNDPOWERLEVELUNIT	,SOUNDPOWERUNIT	,SOUNDPRESSURELEVELUNIT	,SOUNDPRESSUREUNIT	,TEMPERATUREGRADIENTUNIT	,TEMPERATURERATEOFCHANGEUNIT	,THERMALEXPANSIONCOEFFICIENTUNIT	,WARPINGCONSTANTUNIT	,WARPINGMOMENTUNIT	,USERDEFINED);
class IFCPP_EXPORT IfcDerivedUnitEnum : virtual public IfcPPObject
{
public:
	enum IfcDerivedUnitEnumEnum
	{
		ENUM_ANGULARVELOCITYUNIT,
		ENUM_AREADENSITYUNIT,
		ENUM_COMPOUNDPLANEANGLEUNIT,
		ENUM_DYNAMICVISCOSITYUNIT,
		ENUM_HEATFLUXDENSITYUNIT,
		ENUM_INTEGERCOUNTRATEUNIT,
		ENUM_ISOTHERMALMOISTURECAPACITYUNIT,
		ENUM_KINEMATICVISCOSITYUNIT,
		ENUM_LINEARVELOCITYUNIT,
		ENUM_MASSDENSITYUNIT,
		ENUM_MASSFLOWRATEUNIT,
		ENUM_MOISTUREDIFFUSIVITYUNIT,
		ENUM_MOLECULARWEIGHTUNIT,
		ENUM_SPECIFICHEATCAPACITYUNIT,
		ENUM_THERMALADMITTANCEUNIT,
		ENUM_THERMALCONDUCTANCEUNIT,
		ENUM_THERMALRESISTANCEUNIT,
		ENUM_THERMALTRANSMITTANCEUNIT,
		ENUM_VAPORPERMEABILITYUNIT,
		ENUM_VOLUMETRICFLOWRATEUNIT,
		ENUM_ROTATIONALFREQUENCYUNIT,
		ENUM_TORQUEUNIT,
		ENUM_MOMENTOFINERTIAUNIT,
		ENUM_LINEARMOMENTUNIT,
		ENUM_LINEARFORCEUNIT,
		ENUM_PLANARFORCEUNIT,
		ENUM_MODULUSOFELASTICITYUNIT,
		ENUM_SHEARMODULUSUNIT,
		ENUM_LINEARSTIFFNESSUNIT,
		ENUM_ROTATIONALSTIFFNESSUNIT,
		ENUM_MODULUSOFSUBGRADEREACTIONUNIT,
		ENUM_ACCELERATIONUNIT,
		ENUM_CURVATUREUNIT,
		ENUM_HEATINGVALUEUNIT,
		ENUM_IONCONCENTRATIONUNIT,
		ENUM_LUMINOUSINTENSITYDISTRIBUTIONUNIT,
		ENUM_MASSPERLENGTHUNIT,
		ENUM_MODULUSOFLINEARSUBGRADEREACTIONUNIT,
		ENUM_MODULUSOFROTATIONALSUBGRADEREACTIONUNIT,
		ENUM_PHUNIT,
		ENUM_ROTATIONALMASSUNIT,
		ENUM_SECTIONAREAINTEGRALUNIT,
		ENUM_SECTIONMODULUSUNIT,
		ENUM_SOUNDPOWERLEVELUNIT,
		ENUM_SOUNDPOWERUNIT,
		ENUM_SOUNDPRESSURELEVELUNIT,
		ENUM_SOUNDPRESSUREUNIT,
		ENUM_TEMPERATUREGRADIENTUNIT,
		ENUM_TEMPERATURERATEOFCHANGEUNIT,
		ENUM_THERMALEXPANSIONCOEFFICIENTUNIT,
		ENUM_WARPINGCONSTANTUNIT,
		ENUM_WARPINGMOMENTUNIT,
		ENUM_USERDEFINED
	};

	IfcDerivedUnitEnum();
	IfcDerivedUnitEnum( IfcDerivedUnitEnumEnum e ) { m_enum = e; }
	~IfcDerivedUnitEnum();
	virtual const char* className() const { return "IfcDerivedUnitEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcDerivedUnitEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcDerivedUnitEnumEnum m_enum;
};

