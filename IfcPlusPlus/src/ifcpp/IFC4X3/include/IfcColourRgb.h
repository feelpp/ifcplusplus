/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcColourOrFactor.h"
#include "IfcColourSpecification.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcNormalisedRatioMeasure;
	//ENTITY
	class IFCQUERY_EXPORT IfcColourRgb : virtual public IfcColourOrFactor, public IfcColourSpecification
	{ 
	public:
		IfcColourRgb() = default;
		IfcColourRgb( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 4; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 776857604; }

		// IfcPresentationItem -----------------------------------------------------------

		// IfcColourSpecification -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>					m_Name;						//optional

		// IfcColourRgb -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcNormalisedRatioMeasure>	m_Red;
		shared_ptr<IfcNormalisedRatioMeasure>	m_Green;
		shared_ptr<IfcNormalisedRatioMeasure>	m_Blue;
	};
}

