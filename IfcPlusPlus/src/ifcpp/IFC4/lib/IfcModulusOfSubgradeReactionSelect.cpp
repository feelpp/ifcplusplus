/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcModulusOfSubgradeReactionMeasure.h"
#include "ifcpp/IFC4/include/IfcModulusOfSubgradeReactionSelect.h"

// TYPE IfcModulusOfSubgradeReactionSelect = SELECT	(IfcBoolean	,IfcModulusOfSubgradeReactionMeasure);
shared_ptr<IfcModulusOfSubgradeReactionSelect> IfcModulusOfSubgradeReactionSelect::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.size() == 0 ){ return shared_ptr<IfcModulusOfSubgradeReactionSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcModulusOfSubgradeReactionSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcModulusOfSubgradeReactionSelect>();
	}
	shared_ptr<IfcModulusOfSubgradeReactionSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
