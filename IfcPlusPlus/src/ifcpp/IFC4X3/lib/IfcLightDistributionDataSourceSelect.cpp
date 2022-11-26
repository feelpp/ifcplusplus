/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcLightDistributionDataSourceSelect.h"

// TYPE IfcLightDistributionDataSourceSelect = SELECT	(IfcExternalReference	,IfcLightIntensityDistribution);
shared_ptr<IFC4X3::IfcLightDistributionDataSourceSelect> IFC4X3::IfcLightDistributionDataSourceSelect::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.empty() ){ return shared_ptr<IfcLightDistributionDataSourceSelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcLightDistributionDataSourceSelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcLightDistributionDataSourceSelect>();
	}
	shared_ptr<IfcLightDistributionDataSourceSelect> result_object;
	readSelectType( arg, result_object, map, errorStream );
	return result_object;
}
