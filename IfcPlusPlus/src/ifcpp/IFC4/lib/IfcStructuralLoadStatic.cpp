/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcStructuralLoadStatic.h"

// ENTITY IfcStructuralLoadStatic 
IfcStructuralLoadStatic::IfcStructuralLoadStatic() {}
IfcStructuralLoadStatic::IfcStructuralLoadStatic( int id ) { m_id = id; }
IfcStructuralLoadStatic::~IfcStructuralLoadStatic() {}
shared_ptr<IfcPPObject> IfcStructuralLoadStatic::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcStructuralLoadStatic> copy_self( new IfcStructuralLoadStatic() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	return copy_self;
}
void IfcStructuralLoadStatic::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCSTRUCTURALLOADSTATIC" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ");";
}
void IfcStructuralLoadStatic::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcStructuralLoadStatic::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStructuralLoadStatic, expecting 1, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
}
void IfcStructuralLoadStatic::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcStructuralLoadOrResult::getAttributes( vec_attributes );
}
void IfcStructuralLoadStatic::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcStructuralLoadOrResult::getAttributesInverse( vec_attributes_inverse );
}
void IfcStructuralLoadStatic::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcStructuralLoadOrResult::setInverseCounterparts( ptr_self_entity );
}
void IfcStructuralLoadStatic::unlinkFromInverseCounterparts()
{
	IfcStructuralLoadOrResult::unlinkFromInverseCounterparts();
}
