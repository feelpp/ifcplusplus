/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcParameterValue.h"
#include "ifcpp/IFC4X3/include/IfcCurveMeasureSelect.h"

// TYPE IfcCurveMeasureSelect = SELECT	(IfcNonNegativeLengthMeasure	,IfcParameterValue);
shared_ptr<IFC4X3::IfcCurveMeasureSelect> IFC4X3::IfcCurveMeasureSelect::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.empty() ){ return shared_ptr<IfcCurveMeasureSelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcCurveMeasureSelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcCurveMeasureSelect>();
	}
	shared_ptr<IfcCurveMeasureSelect> result_object;
	readSelectType( arg, result_object, map, errorStream );
	return result_object;
}
