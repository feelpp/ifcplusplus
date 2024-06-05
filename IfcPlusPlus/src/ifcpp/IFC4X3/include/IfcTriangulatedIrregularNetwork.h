/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcTriangulatedFaceSet.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcInteger;
	//ENTITY
	class IFCQUERY_EXPORT IfcTriangulatedIrregularNetwork : public IfcTriangulatedFaceSet
	{
	public:
		IfcTriangulatedIrregularNetwork() = default;
		IfcTriangulatedIrregularNetwork( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 6; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1229763772; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcTessellatedItem -----------------------------------------------------------

		// IfcTessellatedFaceSet -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcCartesianPointList3D>						m_Coordinates;
		// inverse attributes:
		//  std::vector<weak_ptr<IfcIndexedColourMap> >				m_HasColours_inverse;
		//  std::vector<weak_ptr<IfcIndexedTextureMap> >			m_HasTextures_inverse;

		// IfcTriangulatedFaceSet -----------------------------------------------------------
		// attributes:
		//  std::vector<std::vector<shared_ptr<IfcParameterValue> > >	m_Normals;					//optional
		//  shared_ptr<IfcBoolean>									m_Closed;					//optional
		//  std::vector<std::vector<shared_ptr<IfcPositiveInteger> > >	m_CoordIndex;
		//  std::vector<shared_ptr<IfcPositiveInteger> >			m_PnIndex;					//optional

		// IfcTriangulatedIrregularNetwork -----------------------------------------------------------
		// attributes:
		std::vector<shared_ptr<IfcInteger> >					m_Flags;
	};
}
