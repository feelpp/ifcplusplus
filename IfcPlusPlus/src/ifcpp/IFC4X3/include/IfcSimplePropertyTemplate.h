/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPropertyTemplate.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcSimplePropertyTemplateTypeEnum;
	class IFCQUERY_EXPORT IfcLabel;
	class IFCQUERY_EXPORT IfcPropertyEnumeration;
	class IFCQUERY_EXPORT IfcUnit;
	class IFCQUERY_EXPORT IfcStateEnum;
	//ENTITY
	class IFCQUERY_EXPORT IfcSimplePropertyTemplate : public IfcPropertyTemplate
	{
	public:
		IfcSimplePropertyTemplate() = default;
		IfcSimplePropertyTemplate( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 12; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3663146110; }

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

		// IfcPropertyTemplateDefinition -----------------------------------------------------------

		// IfcPropertyTemplate -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcComplexPropertyTemplate> >	m_PartOfComplexTemplate_inverse;
		//  std::vector<weak_ptr<IfcPropertySetTemplate> >		m_PartOfPsetTemplate_inverse;

		// IfcSimplePropertyTemplate -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcSimplePropertyTemplateTypeEnum>		m_TemplateType;				//optional
		shared_ptr<IfcLabel>								m_PrimaryMeasureType;		//optional
		shared_ptr<IfcLabel>								m_SecondaryMeasureType;		//optional
		shared_ptr<IfcPropertyEnumeration>					m_Enumerators;				//optional
		shared_ptr<IfcUnit>									m_PrimaryUnit;				//optional
		shared_ptr<IfcUnit>									m_SecondaryUnit;			//optional
		shared_ptr<IfcLabel>								m_Expression;				//optional
		shared_ptr<IfcStateEnum>							m_AccessState;				//optional
	};
}
