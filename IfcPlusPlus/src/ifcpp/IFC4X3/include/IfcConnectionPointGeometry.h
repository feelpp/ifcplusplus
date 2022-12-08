/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcConnectionGeometry.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcPointOrVertexPoint;
	//ENTITY
	class IFCQUERY_EXPORT IfcConnectionPointGeometry : public IfcConnectionGeometry
	{ 
	public:
		IfcConnectionPointGeometry() = default;
		IfcConnectionPointGeometry( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 2; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2614616156; }

		// IfcConnectionGeometry -----------------------------------------------------------

		// IfcConnectionPointGeometry -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcPointOrVertexPoint>	m_PointOnRelatingElement;
		shared_ptr<IfcPointOrVertexPoint>	m_PointOnRelatedElement;	//optional
	};
}

