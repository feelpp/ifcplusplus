/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcNormalisedRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcColourOrFactor.h"

// TYPE IfcColourOrFactor = SELECT	(IfcColourRgb	,IfcNormalisedRatioMeasure);
shared_ptr<IfcColourOrFactor> IfcColourOrFactor::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.size() == 0 ){ return shared_ptr<IfcColourOrFactor>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcColourOrFactor>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcColourOrFactor>();
	}
	shared_ptr<IfcColourOrFactor> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
