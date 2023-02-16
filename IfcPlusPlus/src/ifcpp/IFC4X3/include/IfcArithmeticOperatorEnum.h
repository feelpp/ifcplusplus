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
	// TYPE IfcArithmeticOperatorEnum = ENUMERATION OF	(ADD	,DIVIDE	,MULTIPLY	,SUBTRACT);
	class IFCQUERY_EXPORT IfcArithmeticOperatorEnum : virtual public BuildingObject
	{
	public:
		enum IfcArithmeticOperatorEnumEnum
		{
			ENUM_ADD,
			ENUM_DIVIDE,
			ENUM_MULTIPLY,
			ENUM_SUBTRACT
		};

		IfcArithmeticOperatorEnum() = default;
		IfcArithmeticOperatorEnum( IfcArithmeticOperatorEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 373436428; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcArithmeticOperatorEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcArithmeticOperatorEnumEnum m_enum;
	};
}
