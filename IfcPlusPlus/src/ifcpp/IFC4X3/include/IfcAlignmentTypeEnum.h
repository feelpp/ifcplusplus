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
	// TYPE IfcAlignmentTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcAlignmentTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcAlignmentTypeEnumEnum
		{
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcAlignmentTypeEnum() = default;
		IfcAlignmentTypeEnum( IfcAlignmentTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2326367582; }
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcAlignmentTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcAlignmentTypeEnumEnum m_enum;
	};
}

