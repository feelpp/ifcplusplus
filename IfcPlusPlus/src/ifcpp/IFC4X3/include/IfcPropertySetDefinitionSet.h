/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPropertySetDefinitionSelect.h"

namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcPropertySetDefinition;
	// TYPE IfcPropertySetDefinitionSet = SET [1:?] OF IfcPropertySetDefinition;
	class IFCQUERY_EXPORT IfcPropertySetDefinitionSet : public IfcPropertySetDefinitionSelect
	{
	public:
		IfcPropertySetDefinitionSet() = default;
		virtual uint32_t classID() const { return 2798247006; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcPropertySetDefinitionSet> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		std::vector<shared_ptr<IfcPropertySetDefinition> > m_vec;
	};
}
