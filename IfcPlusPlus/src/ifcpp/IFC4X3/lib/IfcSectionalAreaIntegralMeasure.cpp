/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcSectionalAreaIntegralMeasure.h"

// TYPE IfcSectionalAreaIntegralMeasure = REAL;
IFC4X3::IfcSectionalAreaIntegralMeasure::IfcSectionalAreaIntegralMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IFC4X3::IfcSectionalAreaIntegralMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSectionalAreaIntegralMeasure> copy_self( new IfcSectionalAreaIntegralMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IFC4X3::IfcSectionalAreaIntegralMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSECTIONALAREAINTEGRALMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcSectionalAreaIntegralMeasure> IFC4X3::IfcSectionalAreaIntegralMeasure::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcSectionalAreaIntegralMeasure>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcSectionalAreaIntegralMeasure>(); }
	shared_ptr<IfcSectionalAreaIntegralMeasure> type_object( new IfcSectionalAreaIntegralMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}