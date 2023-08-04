/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcProductRepresentationSelect.h"
#include "IfcProductRepresentation.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcProduct;
	class IFCQUERY_EXPORT IfcShapeAspect;
	//ENTITY
	class IFCQUERY_EXPORT IfcProductDefinitionShape : virtual public IfcProductRepresentationSelect, public IfcProductRepresentation
	{
	public:
		IfcProductDefinitionShape() = default;
		IfcProductDefinitionShape( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 3; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 673634403; }

		// IfcProductRepresentation -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>						m_Name;						//optional
		//  shared_ptr<IfcText>							m_Description;				//optional
		//  std::vector<shared_ptr<IfcRepresentation> >	m_Representations;

		// IfcProductDefinitionShape -----------------------------------------------------------
		// inverse attributes:
		std::vector<weak_ptr<IfcProduct> >			m_ShapeOfProduct_inverse;
		std::vector<weak_ptr<IfcShapeAspect> >		m_HasShapeAspects_inverse;
	};
}
