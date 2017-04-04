/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcBinary.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcDate.h"
#include "ifcpp/IFC4/include/IfcDateTime.h"
#include "ifcpp/IFC4/include/IfcDuration.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcInteger.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLogical.h"
#include "ifcpp/IFC4/include/IfcPositiveInteger.h"
#include "ifcpp/IFC4/include/IfcReal.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcTime.h"
#include "ifcpp/IFC4/include/IfcTimeStamp.h"
#include "ifcpp/IFC4/include/IfcValue.h"
#include "ifcpp/IFC4/include/IfcSimpleValue.h"

// TYPE IfcSimpleValue = SELECT	(IfcBinary	,IfcBoolean	,IfcDate	,IfcDateTime	,IfcDuration	,IfcIdentifier	,IfcInteger	,IfcLabel	,IfcLogical	,IfcPositiveInteger	,IfcReal	,IfcText	,IfcTime	,IfcTimeStamp);
shared_ptr<IfcSimpleValue> IfcSimpleValue::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.size() == 0 ){ return shared_ptr<IfcSimpleValue>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcSimpleValue>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcSimpleValue>();
	}
	shared_ptr<IfcSimpleValue> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
