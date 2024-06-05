/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSpiral.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcLengthMeasure;
	//ENTITY
	class IFCQUERY_EXPORT IfcSeventhOrderPolynomialSpiral : public IfcSpiral
	{
	public:
		IfcSeventhOrderPolynomialSpiral() = default;
		IfcSeventhOrderPolynomialSpiral( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 9; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1027922057; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcCurve -----------------------------------------------------------

		// IfcSpiral -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcAxis2Placement>							m_Position;

		// IfcSeventhOrderPolynomialSpiral -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcLengthMeasure>							m_SepticTerm;
		shared_ptr<IfcLengthMeasure>							m_SexticTerm;				//optional
		shared_ptr<IfcLengthMeasure>							m_QuinticTerm;				//optional
		shared_ptr<IfcLengthMeasure>							m_QuarticTerm;				//optional
		shared_ptr<IfcLengthMeasure>							m_CubicTerm;				//optional
		shared_ptr<IfcLengthMeasure>							m_QuadraticTerm;			//optional
		shared_ptr<IfcLengthMeasure>							m_LinearTerm;				//optional
		shared_ptr<IfcLengthMeasure>							m_ConstantTerm;				//optional
	};
}
