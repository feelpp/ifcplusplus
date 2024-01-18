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
	// TYPE IfcKerbTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcKerbTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcKerbTypeEnumEnum
		{
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcKerbTypeEnum() = default;
		IfcKerbTypeEnum( IfcKerbTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2615076639; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcKerbTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcKerbTypeEnumEnum m_enum;
	};
}