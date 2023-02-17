/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcWorkControl.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcWorkPlanTypeEnum;
	//ENTITY
	class IFCQUERY_EXPORT IfcWorkPlan : public IfcWorkControl
	{
	public:
		IfcWorkPlan() = default;
		IfcWorkPlan( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 14; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 4218914973; }

		// IfcRoot -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcGloballyUniqueId>						m_GlobalId;
		//  shared_ptr<IfcOwnerHistory>							m_OwnerHistory;				//optional
		//  shared_ptr<IfcLabel>								m_Name;						//optional
		//  shared_ptr<IfcText>									m_Description;				//optional

		// IfcObjectDefinition -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelAssigns> >				m_HasAssignments_inverse;
		//  std::vector<weak_ptr<IfcRelNests> >					m_Nests_inverse;
		//  std::vector<weak_ptr<IfcRelNests> >					m_IsNestedBy_inverse;
		//  std::vector<weak_ptr<IfcRelDeclares> >				m_HasContext_inverse;
		//  std::vector<weak_ptr<IfcRelAggregates> >			m_IsDecomposedBy_inverse;
		//  std::vector<weak_ptr<IfcRelAggregates> >			m_Decomposes_inverse;
		//  std::vector<weak_ptr<IfcRelAssociates> >			m_HasAssociations_inverse;

		// IfcObject -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>								m_ObjectType;				//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelDefinesByObject> >		m_IsDeclaredBy_inverse;
		//  std::vector<weak_ptr<IfcRelDefinesByObject> >		m_Declares_inverse;
		//  std::vector<weak_ptr<IfcRelDefinesByType> >			m_IsTypedBy_inverse;
		//  std::vector<weak_ptr<IfcRelDefinesByProperties> >	m_IsDefinedBy_inverse;

		// IfcControl -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcIdentifier>							m_Identification;			//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelAssignsToControl> >		m_Controls_inverse;

		// IfcWorkControl -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcDateTime>								m_CreationDate;
		//  std::vector<shared_ptr<IfcPerson> >					m_Creators;					//optional
		//  shared_ptr<IfcLabel>								m_Purpose;					//optional
		//  shared_ptr<IfcDuration>								m_Duration;					//optional
		//  shared_ptr<IfcDuration>								m_TotalFloat;				//optional
		//  shared_ptr<IfcDateTime>								m_StartTime;
		//  shared_ptr<IfcDateTime>								m_FinishTime;				//optional

		// IfcWorkPlan -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcWorkPlanTypeEnum>						m_PredefinedType;			//optional
	};
}
