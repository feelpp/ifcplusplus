/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcFontWeight.h"

// TYPE IfcFontWeight = STRING;
IfcFontWeight::IfcFontWeight() {}
IfcFontWeight::IfcFontWeight( std::wstring value ) { m_value = value; }
IfcFontWeight::~IfcFontWeight() {}
shared_ptr<IfcPPObject> IfcFontWeight::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcFontWeight> copy_self( new IfcFontWeight() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcFontWeight::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFONTWEIGHT("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcFontWeight> IfcFontWeight::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcFontWeight>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcFontWeight>(); }
	shared_ptr<IfcFontWeight> type_object( new IfcFontWeight() );
	readString( arg, type_object->m_value );
	return type_object;
}
