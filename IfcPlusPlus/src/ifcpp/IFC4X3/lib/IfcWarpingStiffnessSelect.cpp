/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcWarpingMomentMeasure.h"
#include "ifcpp/IFC4X3/include/IfcWarpingStiffnessSelect.h"

// TYPE IfcWarpingStiffnessSelect = SELECT	(IfcBoolean	,IfcWarpingMomentMeasure);
shared_ptr<IFC4X3::IfcWarpingStiffnessSelect> IFC4X3::IfcWarpingStiffnessSelect::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.empty() ){ return shared_ptr<IfcWarpingStiffnessSelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcWarpingStiffnessSelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcWarpingStiffnessSelect>();
	}
	shared_ptr<IfcWarpingStiffnessSelect> result_object;
	readSelectType( arg, result_object, map, errorStream );
	return result_object;
}
