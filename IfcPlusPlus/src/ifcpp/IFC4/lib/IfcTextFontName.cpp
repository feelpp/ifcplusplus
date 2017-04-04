/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcTextFontName.h"

// TYPE IfcTextFontName = STRING;
IfcTextFontName::IfcTextFontName() {}
IfcTextFontName::IfcTextFontName( std::wstring value ) { m_value = value; }
IfcTextFontName::~IfcTextFontName() {}
shared_ptr<IfcPPObject> IfcTextFontName::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTextFontName> copy_self( new IfcTextFontName() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcTextFontName::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTEXTFONTNAME("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcTextFontName> IfcTextFontName::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTextFontName>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTextFontName>(); }
	shared_ptr<IfcTextFontName> type_object( new IfcTextFontName() );
	readString( arg, type_object->m_value );
	return type_object;
}
