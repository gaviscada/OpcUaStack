/*
    ObjectTypeClass: AuditWriteUpdateEventType

    Generated Source Code - please do not change this source code

    ObjectTypeCodeGenerator Version:
        OpcUaStackCore - 4.0.0

    Autor:     Kai Huebl (kai@huebl-sgh.de)
*/

#ifndef __OpcUaStackServer_AuditWriteUpdateEventType_h__
#define __OpcUaStackServer_AuditWriteUpdateEventType_h__

#include "OpcUaStackServer/StandardVariableType/VariableBase.h"
#include "OpcUaStackServer/StandardObjectType/ObjectBase.h"

namespace OpcUaStackServer
{
   
   class DLLEXPORT AuditWriteUpdateEventType
   : public ObjectBase
   {
     public:
       typedef boost::shared_ptr<AuditWriteUpdateEventType> SPtr;
       typedef std::vector<AuditWriteUpdateEventType::SPtr> Vec;
   
       AuditWriteUpdateEventType(void);
       AuditWriteUpdateEventType(const AuditWriteUpdateEventType& value);
       virtual ~AuditWriteUpdateEventType(void);

        //
        // UtcTime
        //
        void actionTimeStamp_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& actionTimeStamp_Variable(void);
        bool get_ActionTimeStamp_Variable(OpcUaDataValue& dataValue);
        bool set_ActionTimeStamp_Variable(const OpcUaDataValue& dataValue);

        //
        // UInt32
        //
        void attributeId_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& attributeId_Variable(void);
        bool get_AttributeId_Variable(OpcUaDataValue& dataValue);
        bool set_AttributeId_Variable(const OpcUaDataValue& dataValue);

        //
        // String
        //
        void clientAuditEntryId_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& clientAuditEntryId_Variable(void);
        bool get_ClientAuditEntryId_Variable(OpcUaDataValue& dataValue);
        bool set_ClientAuditEntryId_Variable(const OpcUaDataValue& dataValue);

        //
        // String
        //
        void clientUserId_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& clientUserId_Variable(void);
        bool get_ClientUserId_Variable(OpcUaDataValue& dataValue);
        bool set_ClientUserId_Variable(const OpcUaDataValue& dataValue);

        //
        // ByteString
        //
        void eventId_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& eventId_Variable(void);
        bool get_EventId_Variable(OpcUaDataValue& dataValue);
        bool set_EventId_Variable(const OpcUaDataValue& dataValue);

        //
        // NodeId
        //
        void eventType_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& eventType_Variable(void);
        bool get_EventType_Variable(OpcUaDataValue& dataValue);
        bool set_EventType_Variable(const OpcUaDataValue& dataValue);

        //
        // NumericRange
        //
        void indexRange_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& indexRange_Variable(void);
        bool get_IndexRange_Variable(OpcUaDataValue& dataValue);
        bool set_IndexRange_Variable(const OpcUaDataValue& dataValue);

        //
        // TimeZoneDataType
        //
        void localTime_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& localTime_Variable(void);
        bool get_LocalTime_Variable(OpcUaDataValue& dataValue);
        bool set_LocalTime_Variable(const OpcUaDataValue& dataValue);

        //
        // LocalizedText
        //
        void message_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& message_Variable(void);
        bool get_Message_Variable(OpcUaDataValue& dataValue);
        bool set_Message_Variable(const OpcUaDataValue& dataValue);

        //
        // Variant
        //
        void newValue_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& newValue_Variable(void);
        bool get_NewValue_Variable(OpcUaDataValue& dataValue);
        bool set_NewValue_Variable(const OpcUaDataValue& dataValue);

        //
        // Variant
        //
        void oldValue_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& oldValue_Variable(void);
        bool get_OldValue_Variable(OpcUaDataValue& dataValue);
        bool set_OldValue_Variable(const OpcUaDataValue& dataValue);

        //
        // UtcTime
        //
        void receiveTime_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& receiveTime_Variable(void);
        bool get_ReceiveTime_Variable(OpcUaDataValue& dataValue);
        bool set_ReceiveTime_Variable(const OpcUaDataValue& dataValue);

        //
        // String
        //
        void serverId_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& serverId_Variable(void);
        bool get_ServerId_Variable(OpcUaDataValue& dataValue);
        bool set_ServerId_Variable(const OpcUaDataValue& dataValue);

        //
        // UInt16
        //
        void severity_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& severity_Variable(void);
        bool get_Severity_Variable(OpcUaDataValue& dataValue);
        bool set_Severity_Variable(const OpcUaDataValue& dataValue);

        //
        // String
        //
        void sourceName_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& sourceName_Variable(void);
        bool get_SourceName_Variable(OpcUaDataValue& dataValue);
        bool set_SourceName_Variable(const OpcUaDataValue& dataValue);

        //
        // NodeId
        //
        void sourceNode_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& sourceNode_Variable(void);
        bool get_SourceNode_Variable(OpcUaDataValue& dataValue);
        bool set_SourceNode_Variable(const OpcUaDataValue& dataValue);

        //
        // Boolean
        //
        void status_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& status_Variable(void);
        bool get_Status_Variable(OpcUaDataValue& dataValue);
        bool set_Status_Variable(const OpcUaDataValue& dataValue);

        //
        // UtcTime
        //
        void time_Variable(ServerVariable::SPtr& serverVariable);
        ServerVariable::SPtr& time_Variable(void);
        bool get_Time_Variable(OpcUaDataValue& dataValue);
        bool set_Time_Variable(const OpcUaDataValue& dataValue);
    
      private:
        ServerVariable::SPtr actionTimeStamp_Variable_;
        ServerVariable::SPtr attributeId_Variable_;
        ServerVariable::SPtr clientAuditEntryId_Variable_;
        ServerVariable::SPtr clientUserId_Variable_;
        ServerVariable::SPtr eventId_Variable_;
        ServerVariable::SPtr eventType_Variable_;
        ServerVariable::SPtr indexRange_Variable_;
        ServerVariable::SPtr localTime_Variable_;
        ServerVariable::SPtr message_Variable_;
        ServerVariable::SPtr newValue_Variable_;
        ServerVariable::SPtr oldValue_Variable_;
        ServerVariable::SPtr receiveTime_Variable_;
        ServerVariable::SPtr serverId_Variable_;
        ServerVariable::SPtr severity_Variable_;
        ServerVariable::SPtr sourceName_Variable_;
        ServerVariable::SPtr sourceNode_Variable_;
        ServerVariable::SPtr status_Variable_;
        ServerVariable::SPtr time_Variable_;
   
   };

}

#endif
