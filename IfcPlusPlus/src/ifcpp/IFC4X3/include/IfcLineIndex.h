/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPositiveInteger.h"
#include "IfcSegmentIndexSelect.h"

namespace IFC4X3
{
	// TYPE IfcLineIndex = LIST [2:?] OF IfcPositiveInteger;
	class IFCQUERY_EXPORT IfcLineIndex : public IfcPositiveInteger, public IfcSegmentIndexSelect
	{
	public:
		IfcLineIndex() = default;
		virtual uint32_t classID() const { return 1774176899; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcLineIndex> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		std::vector<shared_ptr<IfcPositiveInteger> > m_vec;
	};
}
