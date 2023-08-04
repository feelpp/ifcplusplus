/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcCurveOnSurface.h"
#include "IfcCurve.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcCurve;
	class IFCQUERY_EXPORT IfcPcurve;
	class IFCQUERY_EXPORT IfcPreferredSurfaceCurveRepresentation;
	//ENTITY
	class IFCQUERY_EXPORT IfcSurfaceCurve : virtual public IfcCurveOnSurface, public IfcCurve
	{
	public:
		IfcSurfaceCurve() = default;
		IfcSurfaceCurve( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 3; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 699246055; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcCurve -----------------------------------------------------------

		// IfcSurfaceCurve -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcCurve>									m_Curve3D;
		std::vector<shared_ptr<IfcPcurve> >						m_AssociatedGeometry;
		shared_ptr<IfcPreferredSurfaceCurveRepresentation>		m_MasterRepresentation;
	};
}
