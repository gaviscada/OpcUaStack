/*
    DataTypeClass: SubscribedDataSetDataType

    Generated Source Code - please do not change this source code

    DataTypeCodeGenerator Version:
        OpcUaStackCore - 4.1.0

    Autor:     Kai Huebl (kai@huebl-sgh.de)
*/

#ifndef __OpcUaStackCore_SubscribedDataSetDataType_h__
#define __OpcUaStackCore_SubscribedDataSetDataType_h__

#include <boost/shared_ptr.hpp>
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/Base/ObjectPool.h"
#include "OpcUaStackCore/BuildInTypes/BuildInTypes.h"

namespace OpcUaStackCore
{
    
    class DLLEXPORT SubscribedDataSetDataType
    : public Object
    , public ExtensionObjectBase
    {
      public:
        typedef boost::shared_ptr<SubscribedDataSetDataType> SPtr;
        typedef std::vector<SubscribedDataSetDataType::SPtr> Vec;
    
        SubscribedDataSetDataType(void);
        SubscribedDataSetDataType(const SubscribedDataSetDataType& value);
        virtual ~SubscribedDataSetDataType(void);
        
        
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
        
        void copyTo(SubscribedDataSetDataType& value);
        bool operator==(const SubscribedDataSetDataType& value);
        bool operator!=(const SubscribedDataSetDataType& value);
        SubscribedDataSetDataType& operator=(const SubscribedDataSetDataType& value);
    
      private:
    
    };
    
    class DLLEXPORT SubscribedDataSetDataTypeArray
    : public OpcUaArray<SubscribedDataSetDataType::SPtr, SPtrTypeCoder<SubscribedDataSetDataType> >
    , public Object
    {
      public:
    	   typedef boost::shared_ptr<SubscribedDataSetDataTypeArray> SPtr;
    };

}

#endif