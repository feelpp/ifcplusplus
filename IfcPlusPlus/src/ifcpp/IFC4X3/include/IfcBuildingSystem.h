/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSystem.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcBuildingSystemTypeEnum;
	class IFCQUERY_EXPORT IfcLabel;
	//ENTITY
	class IFCQUERY_EXPORT IfcBuildingSystem : public IfcSystem
	{ 
	public:
		IfcBuildingSystem() = default;
		IfcBuildingSystem( int id );
		virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 7; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1177604601; }

		// IfcRoot -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcGloballyUniqueId>								m_GlobalId;
		//  shared_ptr<IfcOwnerHistory>									m_OwnerHistory;				//optional
		//  shared_ptr<IfcLabel>										m_Name;						//optional
		//  shared_ptr<IfcText>											m_Description;				//optional

		// IfcObjectDefinition -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelAssigns> >						m_HasAssignments_inverse;
		//  std::vector<weak_ptr<IfcRelNests> >							m_Nests_inverse;
		//  std::vector<weak_ptr<IfcRelNests> >							m_IsNestedBy_inverse;
		//  std::vector<weak_ptr<IfcRelDeclares> >						m_HasContext_inverse;
		//  std::vector<weak_ptr<IfcRelAggregates> >					m_IsDecomposedBy_inverse;
		//  std::vector<weak_ptr<IfcRelAggregates> >					m_Decomposes_inverse;
		//  std::vector<weak_ptr<IfcRelAssociates> >					m_HasAssociations_inverse;

		// IfcObject -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>										m_ObjectType;				//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelDefinesByObject> >				m_IsDeclaredBy_inverse;
		//  std::vector<weak_ptr<IfcRelDefinesByObject> >				m_Declares_inverse;
		//  std::vector<weak_ptr<IfcRelDefinesByType> >					m_IsTypedBy_inverse;
		//  std::vector<weak_ptr<IfcRelDefinesByProperties> >			m_IsDefinedBy_inverse;

		// IfcGroup -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelAssignsToGroup> >				m_IsGroupedBy_inverse;
		//  std::vector<weak_ptr<IfcRelReferencedInSpatialStructure> >	m_ReferencedInStructures_inverse;

		// IfcSystem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelServicesBuildings> >				m_ServicesBuildings_inverse;
		//  std::vector<weak_ptr<IfcRelReferencedInSpatialStructure> >	m_ServicesFacilities_inverse;

		// IfcBuildingSystem -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcBuildingSystemTypeEnum>						m_PredefinedType;			//optional
		shared_ptr<IfcLabel>										m_LongName;					//optional
	};
}

