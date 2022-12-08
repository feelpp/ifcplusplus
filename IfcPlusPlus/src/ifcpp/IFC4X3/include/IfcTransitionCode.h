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
	// TYPE IfcTransitionCode = ENUMERATION OF	(CONTINUOUS	,CONTSAMEGRADIENT	,CONTSAMEGRADIENTSAMECURVATURE	,DISCONTINUOUS);
	class IFCQUERY_EXPORT IfcTransitionCode : virtual public BuildingObject
	{
	public:
		enum IfcTransitionCodeEnum
		{
			ENUM_CONTINUOUS,
			ENUM_CONTSAMEGRADIENT,
			ENUM_CONTSAMEGRADIENTSAMECURVATURE,
			ENUM_DISCONTINUOUS
		};

		IfcTransitionCode() = default;
		IfcTransitionCode( IfcTransitionCodeEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1914407012; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcTransitionCode> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcTransitionCodeEnum m_enum;
	};
}

