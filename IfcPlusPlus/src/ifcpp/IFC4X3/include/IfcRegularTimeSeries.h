/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcTimeSeries.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcTimeMeasure;
	class IFCQUERY_EXPORT IfcTimeSeriesValue;
	//ENTITY
	class IFCQUERY_EXPORT IfcRegularTimeSeries : public IfcTimeSeries
	{
	public:
		IfcRegularTimeSeries() = default;
		IfcRegularTimeSeries( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 10; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3413951693; }

		// IfcTimeSeries -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>										m_Name;
		//  shared_ptr<IfcText>											m_Description;				//optional
		//  shared_ptr<IfcDateTime>										m_StartTime;
		//  shared_ptr<IfcDateTime>										m_EndTime;
		//  shared_ptr<IfcTimeSeriesDataTypeEnum>						m_TimeSeriesDataType;
		//  shared_ptr<IfcDataOriginEnum>								m_DataOrigin;
		//  shared_ptr<IfcLabel>										m_UserDefinedDataOrigin;	//optional
		//  shared_ptr<IfcUnit>											m_Unit;						//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReference_inverse;

		// IfcRegularTimeSeries -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcTimeMeasure>									m_TimeStep;
		std::vector<shared_ptr<IfcTimeSeriesValue> >				m_Values;
	};
}
