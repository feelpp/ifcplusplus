/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcTextFontSelect.h"

// TYPE IfcTextFontSelect = SELECT	(IfcExternallyDefinedTextFont	,IfcPreDefinedTextFont);
shared_ptr<IfcTextFontSelect> IfcTextFontSelect::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.size() == 0 ){ return shared_ptr<IfcTextFontSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcTextFontSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcTextFontSelect>();
	}
	shared_ptr<IfcTextFontSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
