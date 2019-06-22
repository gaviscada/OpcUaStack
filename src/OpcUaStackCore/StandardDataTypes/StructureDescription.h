/*
    DataTypeClass: StructureDescription

    Generated Source Code - please do not change this source code

    DataTypeCodeGenerator Version:
        OpcUaStackCore - 4.1.0

    Autor:     Kai Huebl (kai@huebl-sgh.de)
*/

#ifndef __OpcUaStackCore_StructureDescription_h__
#define __OpcUaStackCore_StructureDescription_h__

#include <boost/shared_ptr.hpp>
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/Base/ObjectPool.h"
#include "OpcUaStackCore/BuildInTypes/BuildInTypes.h"
#include "OpcUaStackCore/StandardDataTypes/DataTypeDescription.h"
#include "OpcUaStackCore/StandardDataTypes/StructureDefinition.h"

namespace OpcUaStackCore
{
    
    class DLLEXPORT StructureDescription
    : public DataTypeDescription
    {
      public:
        typedef boost::shared_ptr<StructureDescription> SPtr;
        typedef std::vector<StructureDescription::SPtr> Vec;
    
        StructureDescription(void);
        StructureDescription(const StructureDescription& value);
        virtual ~StructureDescription(void);
        
        StructureDefinition& structureDefinition(void);
        
        //- ExtensionObjectBase -----------------------------------------------
        virtual ExtensionObjectBase::SPtr factory(void);
        virtual std::string namespaceName(void);
        virtual std::string typeName(void);
        virtual OpcUaNodeId typeId(void);
        virtual OpcUaNodeId binaryTypeId(void);
        virtual OpcUaNodeId xmlTypeId(void);
        virtual OpcUaNodeId jsonTypeId(void);
        virtual void opcUaBinaryEncode(std::ostream& os) const;
        virtual void opcUaBinaryDecode(std::istream& is);
        virtual bool xmlEncode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns);
        virtual bool xmlEncode(boost::property_tree::ptree& pt, Xmlns& xmlns);
        virtual bool xmlDecode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns);
        virtual bool xmlDecode(boost::property_tree::ptree& pt, Xmlns& xmlns);
        virtual void copyTo(ExtensionObjectBase& extensionObjectBase);
        virtual bool equal(ExtensionObjectBase& extensionObjectBase) const;
        virtual void out(std::ostream& os);
        //- ExtensionObjectBase -----------------------------------------------
        
        virtual bool jsonEncodeImpl(boost::property_tree::ptree& pt) const;
        virtual bool jsonDecodeImpl(const boost::property_tree::ptree& pt);
        
        void copyTo(StructureDescription& value);
        bool operator==(const StructureDescription& value);
        bool operator!=(const StructureDescription& value);
        StructureDescription& operator=(const StructureDescription& value);
    
      private:
        StructureDefinition structureDefinition_;
    
    };
    
    class DLLEXPORT StructureDescriptionArray
    : public OpcUaArray<StructureDescription::SPtr, SPtrTypeCoder<StructureDescription> >
    , public Object
    {
      public:
    	   typedef boost::shared_ptr<StructureDescriptionArray> SPtr;
    };

}

#endif