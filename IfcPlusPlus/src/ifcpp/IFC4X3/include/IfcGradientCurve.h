/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcCompositeCurve.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcBoundedCurve;
	class IFCQUERY_EXPORT IfcPlacement;
	//ENTITY
	class IFCQUERY_EXPORT IfcGradientCurve : public IfcCompositeCurve
	{
	public:
		IfcGradientCurve() = default;
		IfcGradientCurve( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 4; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2898700619; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcCurve -----------------------------------------------------------

		// IfcBoundedCurve -----------------------------------------------------------

		// IfcCompositeCurve -----------------------------------------------------------
		// attributes:
		//  std::vector<shared_ptr<IfcSegment> >					m_Segments;
		//  shared_ptr<IfcLogical>									m_SelfIntersect;

		// IfcGradientCurve -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcBoundedCurve>								m_BaseCurve;
		shared_ptr<IfcPlacement>								m_EndPoint;					//optional
	};
}
