/*
    DataTypeClass: StatusChangeNotification

    Generated Source Code - please do not change this source code

    DataTypeCodeGenerator Version:
        OpcUaStackCore - 4.1.0

    Autor:     Kai Huebl (kai@huebl-sgh.de)
*/

#ifndef __OpcUaStackCore_StatusChangeNotification_h__
#define __OpcUaStackCore_StatusChangeNotification_h__

#include <boost/shared_ptr.hpp>
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/Base/ObjectPool.h"
#include "OpcUaStackCore/BuildInTypes/BuildInTypes.h"
#include "OpcUaStackCore/StandardDataTypes/NotificationData.h"

namespace OpcUaStackCore
{
    
    class DLLEXPORT StatusChangeNotification
    : public NotificationData
    {
      public:
        typedef boost::shared_ptr<StatusChangeNotification> SPtr;
        typedef std::vector<StatusChangeNotification::SPtr> Vec;
    
        StatusChangeNotification(void);
        StatusChangeNotification(const StatusChangeNotification& value);
        virtual ~StatusChangeNotification(void);
        
        OpcUaStatus& status(void);
        OpcUaDiagnosticInfo& diagnosticInfo(void);
        
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
        
        void copyTo(StatusChangeNotification& value);
        bool operator==(const StatusChangeNotification& value);
        bool operator!=(const StatusChangeNotification& value);
        StatusChangeNotification& operator=(const StatusChangeNotification& value);
    
      private:
        OpcUaStatus status_;
        OpcUaDiagnosticInfo diagnosticInfo_;
    
    };
    
    class DLLEXPORT StatusChangeNotificationArray
    : public OpcUaArray<StatusChangeNotification::SPtr, SPtrTypeCoder<StatusChangeNotification> >
    , public Object
    {
      public:
    	   typedef boost::shared_ptr<StatusChangeNotificationArray> SPtr;
    };

}

#endif