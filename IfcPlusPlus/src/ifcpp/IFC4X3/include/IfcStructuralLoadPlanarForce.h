/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcStructuralLoadStatic.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcPlanarForceMeasure;
	//ENTITY
	class IFCQUERY_EXPORT IfcStructuralLoadPlanarForce : public IfcStructuralLoadStatic
	{
	public:
		IfcStructuralLoadPlanarForce() = default;
		IfcStructuralLoadPlanarForce( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 4; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2668620305; }

		// IfcStructuralLoad -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>				m_Name;						//optional

		// IfcStructuralLoadOrResult -----------------------------------------------------------

		// IfcStructuralLoadStatic -----------------------------------------------------------

		// IfcStructuralLoadPlanarForce -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcPlanarForceMeasure>	m_PlanarForceX;				//optional
		shared_ptr<IfcPlanarForceMeasure>	m_PlanarForceY;				//optional
		shared_ptr<IfcPlanarForceMeasure>	m_PlanarForceZ;				//optional
	};
}
