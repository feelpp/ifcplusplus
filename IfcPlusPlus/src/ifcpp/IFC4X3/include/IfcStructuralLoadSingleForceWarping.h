/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcStructuralLoadSingleForce.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcWarpingMomentMeasure;
	//ENTITY
	class IFCQUERY_EXPORT IfcStructuralLoadSingleForceWarping : public IfcStructuralLoadSingleForce
	{
	public:
		IfcStructuralLoadSingleForceWarping() = default;
		IfcStructuralLoadSingleForceWarping( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 8; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1190533807; }

		// IfcStructuralLoad -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>				m_Name;						//optional

		// IfcStructuralLoadOrResult -----------------------------------------------------------

		// IfcStructuralLoadStatic -----------------------------------------------------------

		// IfcStructuralLoadSingleForce -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcForceMeasure>			m_ForceX;					//optional
		//  shared_ptr<IfcForceMeasure>			m_ForceY;					//optional
		//  shared_ptr<IfcForceMeasure>			m_ForceZ;					//optional
		//  shared_ptr<IfcTorqueMeasure>		m_MomentX;					//optional
		//  shared_ptr<IfcTorqueMeasure>		m_MomentY;					//optional
		//  shared_ptr<IfcTorqueMeasure>		m_MomentZ;					//optional

		// IfcStructuralLoadSingleForceWarping -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcWarpingMomentMeasure>	m_WarpingMoment;			//optional
	};
}
