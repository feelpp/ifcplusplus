/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcBooleanOperator = ENUMERATION OF	(UNION	,INTERSECTION	,DIFFERENCE);
class IFCPP_EXPORT IfcBooleanOperator : virtual public IfcPPObject
{
public:
	enum IfcBooleanOperatorEnum
	{
		ENUM_UNION,
		ENUM_INTERSECTION,
		ENUM_DIFFERENCE
	};

	IfcBooleanOperator();
	IfcBooleanOperator( IfcBooleanOperatorEnum e ) { m_enum = e; }
	~IfcBooleanOperator();
	virtual const char* className() const { return "IfcBooleanOperator"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcBooleanOperator> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcBooleanOperatorEnum m_enum;
};

