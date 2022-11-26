/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPreDefinedPropertySet.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcPositiveLengthMeasure;
	class IFCQUERY_EXPORT IfcNonNegativeLengthMeasure;
	class IFCQUERY_EXPORT IfcNormalisedRatioMeasure;
	class IFCQUERY_EXPORT IfcShapeAspect;
	class IFCQUERY_EXPORT IfcLengthMeasure;
	//ENTITY
	class IFCQUERY_EXPORT IfcWindowLiningProperties : public IfcPreDefinedPropertySet
	{ 
	public:
		IfcWindowLiningProperties() = default;
		IfcWindowLiningProperties( int id );
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 16; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 336235671; }

		// IfcRoot -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcGloballyUniqueId>						m_GlobalId;
		//  shared_ptr<IfcOwnerHistory>							m_OwnerHistory;				//optional
		//  shared_ptr<IfcLabel>								m_Name;						//optional
		//  shared_ptr<IfcText>									m_Description;				//optional

		// IfcPropertyDefinition -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelDeclares> >				m_HasContext_inverse;
		//  std::vector<weak_ptr<IfcRelAssociates> >			m_HasAssociations_inverse;

		// IfcPropertySetDefinition -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcTypeObject> >				m_DefinesType_inverse;
		//  std::vector<weak_ptr<IfcRelDefinesByTemplate> >		m_IsDefinedBy_inverse;
		//  std::vector<weak_ptr<IfcRelDefinesByProperties> >	m_DefinesOccurrence_inverse;

		// IfcPreDefinedPropertySet -----------------------------------------------------------

		// IfcWindowLiningProperties -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcPositiveLengthMeasure>				m_LiningDepth;				//optional
		shared_ptr<IfcNonNegativeLengthMeasure>				m_LiningThickness;			//optional
		shared_ptr<IfcNonNegativeLengthMeasure>				m_TransomThickness;			//optional
		shared_ptr<IfcNonNegativeLengthMeasure>				m_MullionThickness;			//optional
		shared_ptr<IfcNormalisedRatioMeasure>				m_FirstTransomOffset;		//optional
		shared_ptr<IfcNormalisedRatioMeasure>				m_SecondTransomOffset;		//optional
		shared_ptr<IfcNormalisedRatioMeasure>				m_FirstMullionOffset;		//optional
		shared_ptr<IfcNormalisedRatioMeasure>				m_SecondMullionOffset;		//optional
		shared_ptr<IfcShapeAspect>							m_ShapeAspectStyle;			//optional
		shared_ptr<IfcLengthMeasure>						m_LiningOffset;				//optional
		shared_ptr<IfcLengthMeasure>						m_LiningToPanelOffsetX;		//optional
		shared_ptr<IfcLengthMeasure>						m_LiningToPanelOffsetY;		//optional
	};
}

