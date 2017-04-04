/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcDocumentSelect.h"

// TYPE IfcDocumentSelect = SELECT	(IfcDocumentInformation	,IfcDocumentReference);
shared_ptr<IfcDocumentSelect> IfcDocumentSelect::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.size() == 0 ){ return shared_ptr<IfcDocumentSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcDocumentSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcDocumentSelect>();
	}
	shared_ptr<IfcDocumentSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
