/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPreDefinedPropertySet.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcPositiveLengthMeasure;
	class IFCQUERY_EXPORT IfcNonNegativeLengthMeasure;
	class IFCQUERY_EXPORT IfcLengthMeasure;
	class IFCQUERY_EXPORT IfcShapeAspect;
	//ENTITY
	class IFCQUERY_EXPORT IfcDoorLiningProperties : public IfcPreDefinedPropertySet
	{
	public:
		IfcDoorLiningProperties() = default;
		IfcDoorLiningProperties( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 17; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2963535650; }

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

		// IfcDoorLiningProperties -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcPositiveLengthMeasure>				m_LiningDepth;				//optional
		shared_ptr<IfcNonNegativeLengthMeasure>				m_LiningThickness;			//optional
		shared_ptr<IfcPositiveLengthMeasure>				m_ThresholdDepth;			//optional
		shared_ptr<IfcNonNegativeLengthMeasure>				m_ThresholdThickness;		//optional
		shared_ptr<IfcNonNegativeLengthMeasure>				m_TransomThickness;			//optional
		shared_ptr<IfcLengthMeasure>						m_TransomOffset;			//optional
		shared_ptr<IfcLengthMeasure>						m_LiningOffset;				//optional
		shared_ptr<IfcLengthMeasure>						m_ThresholdOffset;			//optional
		shared_ptr<IfcPositiveLengthMeasure>				m_CasingThickness;			//optional
		shared_ptr<IfcPositiveLengthMeasure>				m_CasingDepth;				//optional
		shared_ptr<IfcShapeAspect>							m_ShapeAspectStyle;			//optional
		shared_ptr<IfcLengthMeasure>						m_LiningToPanelOffsetX;		//optional
		shared_ptr<IfcLengthMeasure>						m_LiningToPanelOffsetY;		//optional
	};
}
