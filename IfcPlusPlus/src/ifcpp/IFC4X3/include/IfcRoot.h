/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcGloballyUniqueId;
	class IFCQUERY_EXPORT IfcOwnerHistory;
	class IFCQUERY_EXPORT IfcLabel;
	class IFCQUERY_EXPORT IfcText;
	//ENTITY
	class IFCQUERY_EXPORT IfcRoot : public BuildingEntity
	{
	public:
		IfcRoot() = default;
		IfcRoot( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 4; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2341007311; }

		// IfcRoot -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcGloballyUniqueId>	m_GlobalId;
		shared_ptr<IfcOwnerHistory>		m_OwnerHistory;				//optional
		shared_ptr<IfcLabel>			m_Name;						//optional
		shared_ptr<IfcText>				m_Description;				//optional
	};
}
