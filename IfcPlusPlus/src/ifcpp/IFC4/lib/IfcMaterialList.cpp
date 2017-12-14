/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcMaterial.h"
#include "ifcpp/IFC4/include/IfcMaterialList.h"

// ENTITY IfcMaterialList 
IfcMaterialList::IfcMaterialList() {}
IfcMaterialList::IfcMaterialList( int id ) { m_entity_id = id; }
IfcMaterialList::~IfcMaterialList() {}
shared_ptr<IfcPPObject> IfcMaterialList::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcMaterialList> copy_self( new IfcMaterialList() );
	for( size_t ii=0; ii<m_Materials.size(); ++ii )
	{
		auto item_ii = m_Materials[ii];
		if( item_ii )
		{
			copy_self->m_Materials.push_back( dynamic_pointer_cast<IfcMaterial>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcMaterialList::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCMATERIALLIST" << "(";
	writeEntityList( stream, m_Materials );
	stream << ");";
}
void IfcMaterialList::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcMaterialList::toString() const { return L"IfcMaterialList"; }
void IfcMaterialList::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMaterialList, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_Materials, map );
}
void IfcMaterialList::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	if( m_Materials.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> Materials_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_Materials.begin(), m_Materials.end(), std::back_inserter( Materials_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "Materials", Materials_vec_object ) );
	}
}
void IfcMaterialList::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
}
void IfcMaterialList::setInverseCounterparts( shared_ptr<IfcPPEntity> )
{
}
void IfcMaterialList::unlinkFromInverseCounterparts()
{
}