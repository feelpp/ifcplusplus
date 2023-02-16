/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcParameterizedProfileDef.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcPositiveLengthMeasure;
	class IFCQUERY_EXPORT IfcNonNegativeLengthMeasure;
	//ENTITY
	class IFCQUERY_EXPORT IfcCShapeProfileDef : public IfcParameterizedProfileDef
	{
	public:
		IfcCShapeProfileDef() = default;
		IfcCShapeProfileDef( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 8; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2898889636; }

		// IfcProfileDef -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcProfileTypeEnum>								m_ProfileType;
		//  shared_ptr<IfcLabel>										m_ProfileName;				//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReference_inverse;
		//  std::vector<weak_ptr<IfcProfileProperties> >				m_HasProperties_inverse;

		// IfcParameterizedProfileDef -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcAxis2Placement2D>								m_Position;					//optional

		// IfcCShapeProfileDef -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcPositiveLengthMeasure>						m_Depth;
		shared_ptr<IfcPositiveLengthMeasure>						m_Width;
		shared_ptr<IfcPositiveLengthMeasure>						m_WallThickness;
		shared_ptr<IfcPositiveLengthMeasure>						m_Girth;
		shared_ptr<IfcNonNegativeLengthMeasure>						m_InternalFilletRadius;		//optional
	};
}
