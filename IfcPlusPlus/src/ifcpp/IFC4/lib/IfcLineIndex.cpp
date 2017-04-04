/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcSegmentIndexSelect.h"
#include "ifcpp/IFC4/include/IfcLineIndex.h"

// TYPE IfcLineIndex = LIST [2:?] OF IfcPositiveInteger;
IfcLineIndex::IfcLineIndex() {}
IfcLineIndex::~IfcLineIndex() {}
shared_ptr<IfcPPObject> IfcLineIndex::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcLineIndex> copy_self( new IfcLineIndex() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcLineIndex::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLINEINDEX("; }
	//TODO: implement
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcLineIndex> IfcLineIndex::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLineIndex>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLineIndex>(); }
	shared_ptr<IfcLineIndex> type_object( new IfcLineIndex() );
	// read TYPE
	// read TYPE
	readInt( arg, type_object->m_value );
	return type_object;
}
