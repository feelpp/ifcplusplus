/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcCardinalPointReference = INTEGER;
	class IFCQUERY_EXPORT IfcCardinalPointReference : public BuildingObject
	{
	public:
		IfcCardinalPointReference() = default;
		IfcCardinalPointReference( int value );
		virtual uint32_t classID() const { return 1683019596; }
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcCardinalPointReference> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		int m_value;
	};
}

