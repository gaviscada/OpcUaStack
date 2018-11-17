/*
    DataTypeClass: JsonDataSetReaderMessageDataType

    Generated Source Code - please do not change this source code

    DataTypeCodeGenerator Version:
        OpcUaStackCore - 4.1.0

    Autor: Kai Huebl (kai@huebl-sgh.de)
*/

#include "OpcUaStackCore/StandardDataTypes/JsonDataSetReaderMessageDataType.h"

namespace OpcUaStackCore
{
    
    JsonDataSetReaderMessageDataType::JsonDataSetReaderMessageDataType(void)
    : DataSetReaderMessageDataType()
    , networkMessageContentMask_()
    , dataSetMessageContentMask_()
    {
    }
    
    JsonDataSetReaderMessageDataType::~JsonDataSetReaderMessageDataType(void)
    {
    }
    
    OpcUaJsonNetworkMessageContentMask&
    JsonDataSetReaderMessageDataType::networkMessageContentMask(void)
    {
        return networkMessageContentMask_;
    }
    
    OpcUaJsonDataSetMessageContentMask&
    JsonDataSetReaderMessageDataType::dataSetMessageContentMask(void)
    {
        return dataSetMessageContentMask_;
    }
    
    bool
    JsonDataSetReaderMessageDataType::operator==(const JsonDataSetReaderMessageDataType& value)
    {
        JsonDataSetReaderMessageDataType* dst = const_cast<JsonDataSetReaderMessageDataType*>(&value);
        if (networkMessageContentMask_ != dst->networkMessageContentMask()) return false;
        if (dataSetMessageContentMask_ != dst->dataSetMessageContentMask()) return false;
        return true;
    }
    
    bool
    JsonDataSetReaderMessageDataType::operator!=(const JsonDataSetReaderMessageDataType& value)
    {
        return !this->operator==(value);
    }
    
    void
    JsonDataSetReaderMessageDataType::copyTo(JsonDataSetReaderMessageDataType& value)
    {
        value.networkMessageContentMask_ = networkMessageContentMask_;
        value.dataSetMessageContentMask_ = dataSetMessageContentMask_;
    }
    
    JsonDataSetReaderMessageDataType&
    JsonDataSetReaderMessageDataType::operator=(const JsonDataSetReaderMessageDataType& value)
    {
        const_cast<JsonDataSetReaderMessageDataType*>(&value)->copyTo(*this);
        return *this;
    }
    
    // ------------------------------------------------------------------------
    // ------------------------------------------------------------------------
    //
    // ExtensionObjectBase
    //
    // ------------------------------------------------------------------------
    // ------------------------------------------------------------------------
    
    ExtensionObjectBase::SPtr
    JsonDataSetReaderMessageDataType::factory(void)
    {
    	return constructSPtr<JsonDataSetReaderMessageDataType>();
    }
    
    std::string
    JsonDataSetReaderMessageDataType::namespaceName(void)
    {
    	return "http://opcfoundation.org/UA/";
    }
    
    std::string
    JsonDataSetReaderMessageDataType::typeName(void)
    {
    	return "JsonDataSetReaderMessageDataType";
    }
    
    OpcUaNodeId
    JsonDataSetReaderMessageDataType::typeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)15665,0);
    }
    
    OpcUaNodeId
    JsonDataSetReaderMessageDataType::binaryTypeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)15725, 0);
    }
    
    OpcUaNodeId
    JsonDataSetReaderMessageDataType::xmlTypeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)16019, 0);
    }
    
    OpcUaNodeId
    JsonDataSetReaderMessageDataType::jsonTypeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)16404, 0);
    }
    
    void
    JsonDataSetReaderMessageDataType::opcUaBinaryEncode(std::ostream& os) const
    {
        OpcUaNumber::opcUaBinaryEncode(os,networkMessageContentMask_);
        OpcUaNumber::opcUaBinaryEncode(os,dataSetMessageContentMask_);
    }
    
    void
    JsonDataSetReaderMessageDataType::opcUaBinaryDecode(std::istream& is)
    {
        OpcUaNumber::opcUaBinaryDecode(is,networkMessageContentMask_);
        OpcUaNumber::opcUaBinaryDecode(is,dataSetMessageContentMask_);
    }
    
    bool
    JsonDataSetReaderMessageDataType::encode(boost::property_tree::ptree& pt, Xmlns& xmlns) const
    {
    }
    
    bool
    JsonDataSetReaderMessageDataType::decode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
    }
    
    bool
    JsonDataSetReaderMessageDataType::xmlEncode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns)
    {
        boost::property_tree::ptree elementTree;
        if (!xmlEncode(elementTree, xmlns)) return false;
        pt.push_back(std::make_pair(element, elementTree));
        return true;
    }
    
    bool
    JsonDataSetReaderMessageDataType::xmlEncode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
        boost::property_tree::ptree elementTree;
    
        elementTree.clear();
        if(!XmlNumber::xmlEncode(elementTree, networkMessageContentMask_)) return false;
        pt.push_back(std::make_pair("NetworkMessageContentMask", elementTree));
    
        elementTree.clear();
        if(!XmlNumber::xmlEncode(elementTree, dataSetMessageContentMask_)) return false;
        pt.push_back(std::make_pair("DataSetMessageContentMask", elementTree));
    
        return true;
    }
    
    bool
    JsonDataSetReaderMessageDataType::xmlDecode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns)
    {
        boost::optional<boost::property_tree::ptree&> tree = pt.get_child_optional(element);
        if (!tree) return false;
        return xmlDecode(*tree, xmlns);
    }
    
    bool
    JsonDataSetReaderMessageDataType::xmlDecode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
        boost::optional<boost::property_tree::ptree&> tree;
    
        tree = pt.get_child_optional("NetworkMessageContentMask");
        if (!tree) return false;
        if(!XmlNumber::xmlDecode(*tree, networkMessageContentMask_)) return false;
    
        tree = pt.get_child_optional("DataSetMessageContentMask");
        if (!tree) return false;
        if(!XmlNumber::xmlDecode(*tree, dataSetMessageContentMask_)) return false;
    
        return true;
    }
    
    bool
    JsonDataSetReaderMessageDataType::jsonEncode(boost::property_tree::ptree& pt, const std::string& element)
    {
        return true;
    }
    
    bool
    JsonDataSetReaderMessageDataType::jsonEncode(boost::property_tree::ptree& pt)
    {
        return true;
    }
    
    bool
    JsonDataSetReaderMessageDataType::jsonDecode(boost::property_tree::ptree& pt, const std::string& element)
    {
    }
    
    bool
    JsonDataSetReaderMessageDataType::jsonDecode(boost::property_tree::ptree& pt)
    {
    }
    
    void
    JsonDataSetReaderMessageDataType::copyTo(ExtensionObjectBase& extensionObjectBase)
    {
    	JsonDataSetReaderMessageDataType* dst = dynamic_cast<JsonDataSetReaderMessageDataType*>(&extensionObjectBase);
    	copyTo(*dst);
    }
    
    bool
    JsonDataSetReaderMessageDataType::equal(ExtensionObjectBase& extensionObjectBase) const
    {
    	JsonDataSetReaderMessageDataType* dst = dynamic_cast<JsonDataSetReaderMessageDataType*>(&extensionObjectBase);
    	return *const_cast<JsonDataSetReaderMessageDataType*>(this) == *dst;
    }
    
    void
    JsonDataSetReaderMessageDataType::out(std::ostream& os)
    {
        os << "NetworkMessageContentMask=" << networkMessageContentMask_;
        os << ", DataSetMessageContentMask=" << dataSetMessageContentMask_;
    }

}
