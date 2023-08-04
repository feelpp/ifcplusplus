/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcClassificationReferenceSelect.h"
#include "IfcClassificationSelect.h"
#include "IfcExternalInformation.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcLabel;
	class IFCQUERY_EXPORT IfcDate;
	class IFCQUERY_EXPORT IfcText;
	class IFCQUERY_EXPORT IfcURIReference;
	class IFCQUERY_EXPORT IfcIdentifier;
	class IFCQUERY_EXPORT IfcRelAssociatesClassification;
	class IFCQUERY_EXPORT IfcClassificationReference;
	//ENTITY
	class IFCQUERY_EXPORT IfcClassification : virtual public IfcClassificationReferenceSelect, virtual public IfcClassificationSelect, public IfcExternalInformation
	{
	public:
		IfcClassification() = default;
		IfcClassification( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 7; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 747523909; }

		// IfcExternalInformation -----------------------------------------------------------

		// IfcClassification -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcLabel>									m_Source;					//optional
		shared_ptr<IfcLabel>									m_Edition;					//optional
		shared_ptr<IfcDate>										m_EditionDate;				//optional
		shared_ptr<IfcLabel>									m_Name;
		shared_ptr<IfcText>										m_Description;				//optional
		shared_ptr<IfcURIReference>								m_Specification;			//optional
		std::vector<shared_ptr<IfcIdentifier> >					m_ReferenceTokens;			//optional
		// inverse attributes:
		std::vector<weak_ptr<IfcRelAssociatesClassification> >	m_ClassificationForObjects_inverse;
		std::vector<weak_ptr<IfcClassificationReference> >		m_HasReferences_inverse;
	};
}
