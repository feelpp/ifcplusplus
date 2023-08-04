/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcMaterialDefinition.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcLabel;
	class IFCQUERY_EXPORT IfcText;
	class IFCQUERY_EXPORT IfcMaterial;
	class IFCQUERY_EXPORT IfcNormalisedRatioMeasure;
	class IFCQUERY_EXPORT IfcMaterialConstituentSet;
	//ENTITY
	class IFCQUERY_EXPORT IfcMaterialConstituent : public IfcMaterialDefinition
	{
	public:
		IfcMaterialConstituent() = default;
		IfcMaterialConstituent( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 5; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3708119000; }

		// IfcMaterialDefinition -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelAssociatesMaterial> >			m_AssociatedTo_inverse;
		//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;
		//  std::vector<weak_ptr<IfcMaterialProperties> >				m_HasProperties_inverse;

		// IfcMaterialConstituent -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcLabel>										m_Name;						//optional
		shared_ptr<IfcText>											m_Description;				//optional
		shared_ptr<IfcMaterial>										m_Material;
		shared_ptr<IfcNormalisedRatioMeasure>						m_Fraction;					//optional
		shared_ptr<IfcLabel>										m_Category;					//optional
		// inverse attributes:
		weak_ptr<IfcMaterialConstituentSet>							m_ToMaterialConstituentSet_inverse;
	};
}
