/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcRelConnects.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcInterferenceSelect;
	class IFCQUERY_EXPORT IfcConnectionGeometry;
	class IFCQUERY_EXPORT IfcSpatialZone;
	class IFCQUERY_EXPORT IfcIdentifier;
	class IFCQUERY_EXPORT IfcLogical;
	//ENTITY
	class IFCQUERY_EXPORT IfcRelInterferesElements : public IfcRelConnects
	{
	public:
		IfcRelInterferesElements() = default;
		IfcRelInterferesElements( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 10; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 427948657; }

		// IfcRoot -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcGloballyUniqueId>		m_GlobalId;
		//  shared_ptr<IfcOwnerHistory>			m_OwnerHistory;				//optional
		//  shared_ptr<IfcLabel>				m_Name;						//optional
		//  shared_ptr<IfcText>					m_Description;				//optional

		// IfcRelationship -----------------------------------------------------------

		// IfcRelConnects -----------------------------------------------------------

		// IfcRelInterferesElements -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcInterferenceSelect>	m_RelatingElement;
		shared_ptr<IfcInterferenceSelect>	m_RelatedElement;
		shared_ptr<IfcConnectionGeometry>	m_InterferenceGeometry;		//optional
		shared_ptr<IfcSpatialZone>			m_InterferenceSpace;		//optional
		shared_ptr<IfcIdentifier>			m_InterferenceType;			//optional
		shared_ptr<IfcLogical>				m_ImpliedOrder;
	};
}
