/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcCoordinateReferenceSystemSelect.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcLabel;
	class IFCQUERY_EXPORT IfcText;
	class IFCQUERY_EXPORT IfcIdentifier;
	class IFCQUERY_EXPORT IfcCoordinateOperation;
	//ENTITY
	class IFCQUERY_EXPORT IfcCoordinateReferenceSystem : virtual public IfcCoordinateReferenceSystemSelect, public BuildingEntity
	{
	public:
		IfcCoordinateReferenceSystem() = default;
		IfcCoordinateReferenceSystem( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 4; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1466758467; }

		// IfcCoordinateReferenceSystem -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcLabel>							m_Name;
		shared_ptr<IfcText>								m_Description;				//optional
		shared_ptr<IfcIdentifier>						m_GeodeticDatum;			//optional
		shared_ptr<IfcIdentifier>						m_VerticalDatum;			//optional
		// inverse attributes:
		std::vector<weak_ptr<IfcCoordinateOperation> >	m_HasCoordinateOperation_inverse;
	};
}
