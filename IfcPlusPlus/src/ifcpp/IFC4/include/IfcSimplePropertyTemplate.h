/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcPropertyTemplate.h"
class IFCPP_EXPORT IfcSimplePropertyTemplateTypeEnum;
class IFCPP_EXPORT IfcLabel;
class IFCPP_EXPORT IfcPropertyEnumeration;
class IFCPP_EXPORT IfcUnit;
class IFCPP_EXPORT IfcStateEnum;
//ENTITY
class IFCPP_EXPORT IfcSimplePropertyTemplate : public IfcPropertyTemplate
{ 
public:
	IfcSimplePropertyTemplate();
	IfcSimplePropertyTemplate( int id );
	~IfcSimplePropertyTemplate();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 12; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcSimplePropertyTemplate"; }


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

