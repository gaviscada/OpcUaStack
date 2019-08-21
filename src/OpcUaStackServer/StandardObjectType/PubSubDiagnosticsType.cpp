/*
    VariableTypeClass: PubSubDiagnosticsType

    Generated Source Code - please do not change this source code

    VariableTypeCodeGenerator Version:
        OpcUaStackCore - 4.0.0

    Autor: Kai Huebl (kai@huebl-sgh.de)
*/

#include "OpcUaStackServer/StandardObjectType/PubSubDiagnosticsType.h"

namespace OpcUaStackServer
{
    
    PubSubDiagnosticsType::PubSubDiagnosticsType(void)
    : ObjectBase()
    , counters_StateDisabledByMethod_Active_Variable_(boost::make_shared<ServerVariable>("Counters_StateDisabledByMethod_Active_Variable"))
    , counters_StateDisabledByMethod_Classification_Variable_(boost::make_shared<ServerVariable>("Counters_StateDisabledByMethod_Classification_Variable"))
    , counters_StateDisabledByMethod_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("Counters_StateDisabledByMethod_DiagnosticsLevel_Variable"))
    , counters_StateDisabledByMethod_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("Counters_StateDisabledByMethod_TimeFirstChange_Variable"))
    , counters_StateDisabledByMethod_Variable_(boost::make_shared<ServerVariable>("Counters_StateDisabledByMethod_Variable"))
    , counters_StateError_Active_Variable_(boost::make_shared<ServerVariable>("Counters_StateError_Active_Variable"))
    , counters_StateError_Classification_Variable_(boost::make_shared<ServerVariable>("Counters_StateError_Classification_Variable"))
    , counters_StateError_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("Counters_StateError_DiagnosticsLevel_Variable"))
    , counters_StateError_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("Counters_StateError_TimeFirstChange_Variable"))
    , counters_StateError_Variable_(boost::make_shared<ServerVariable>("Counters_StateError_Variable"))
    , counters_StateOperationalByMethod_Active_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByMethod_Active_Variable"))
    , counters_StateOperationalByMethod_Classification_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByMethod_Classification_Variable"))
    , counters_StateOperationalByMethod_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByMethod_DiagnosticsLevel_Variable"))
    , counters_StateOperationalByMethod_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByMethod_TimeFirstChange_Variable"))
    , counters_StateOperationalByMethod_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByMethod_Variable"))
    , counters_StateOperationalByParent_Active_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByParent_Active_Variable"))
    , counters_StateOperationalByParent_Classification_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByParent_Classification_Variable"))
    , counters_StateOperationalByParent_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByParent_DiagnosticsLevel_Variable"))
    , counters_StateOperationalByParent_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByParent_TimeFirstChange_Variable"))
    , counters_StateOperationalByParent_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByParent_Variable"))
    , counters_StateOperationalFromError_Active_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalFromError_Active_Variable"))
    , counters_StateOperationalFromError_Classification_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalFromError_Classification_Variable"))
    , counters_StateOperationalFromError_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalFromError_DiagnosticsLevel_Variable"))
    , counters_StateOperationalFromError_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalFromError_TimeFirstChange_Variable"))
    , counters_StateOperationalFromError_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalFromError_Variable"))
    , counters_StatePausedByParent_Active_Variable_(boost::make_shared<ServerVariable>("Counters_StatePausedByParent_Active_Variable"))
    , counters_StatePausedByParent_Classification_Variable_(boost::make_shared<ServerVariable>("Counters_StatePausedByParent_Classification_Variable"))
    , counters_StatePausedByParent_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("Counters_StatePausedByParent_DiagnosticsLevel_Variable"))
    , counters_StatePausedByParent_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("Counters_StatePausedByParent_TimeFirstChange_Variable"))
    , counters_StatePausedByParent_Variable_(boost::make_shared<ServerVariable>("Counters_StatePausedByParent_Variable"))
    , diagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("DiagnosticsLevel_Variable"))
    , subError_Variable_(boost::make_shared<ServerVariable>("SubError_Variable"))
    , totalError_Active_Variable_(boost::make_shared<ServerVariable>("TotalError_Active_Variable"))
    , totalError_Classification_Variable_(boost::make_shared<ServerVariable>("TotalError_Classification_Variable"))
    , totalError_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("TotalError_DiagnosticsLevel_Variable"))
    , totalError_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("TotalError_TimeFirstChange_Variable"))
    , totalError_Variable_(boost::make_shared<ServerVariable>("TotalError_Variable"))
    , totalInformation_Active_Variable_(boost::make_shared<ServerVariable>("TotalInformation_Active_Variable"))
    , totalInformation_Classification_Variable_(boost::make_shared<ServerVariable>("TotalInformation_Classification_Variable"))
    , totalInformation_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("TotalInformation_DiagnosticsLevel_Variable"))
    , totalInformation_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("TotalInformation_TimeFirstChange_Variable"))
    , totalInformation_Variable_(boost::make_shared<ServerVariable>("TotalInformation_Variable"))
    , reset_Method_(boost::make_shared<ServerMethod>("Reset_Method"))
    {
        objectTypeNamespaceName("http://opcfoundation.org/UA/");
        objectTypeNodeId((OpcUaUInt32)19677);
        setServerVariable(counters_StateDisabledByMethod_Active_Variable_);
        setServerVariable(counters_StateDisabledByMethod_Classification_Variable_);
        setServerVariable(counters_StateDisabledByMethod_DiagnosticsLevel_Variable_);
        setServerVariable(counters_StateDisabledByMethod_TimeFirstChange_Variable_);
        setServerVariable(counters_StateDisabledByMethod_Variable_);
        setServerVariable(counters_StateError_Active_Variable_);
        setServerVariable(counters_StateError_Classification_Variable_);
        setServerVariable(counters_StateError_DiagnosticsLevel_Variable_);
        setServerVariable(counters_StateError_TimeFirstChange_Variable_);
        setServerVariable(counters_StateError_Variable_);
        setServerVariable(counters_StateOperationalByMethod_Active_Variable_);
        setServerVariable(counters_StateOperationalByMethod_Classification_Variable_);
        setServerVariable(counters_StateOperationalByMethod_DiagnosticsLevel_Variable_);
        setServerVariable(counters_StateOperationalByMethod_TimeFirstChange_Variable_);
        setServerVariable(counters_StateOperationalByMethod_Variable_);
        setServerVariable(counters_StateOperationalByParent_Active_Variable_);
        setServerVariable(counters_StateOperationalByParent_Classification_Variable_);
        setServerVariable(counters_StateOperationalByParent_DiagnosticsLevel_Variable_);
        setServerVariable(counters_StateOperationalByParent_TimeFirstChange_Variable_);
        setServerVariable(counters_StateOperationalByParent_Variable_);
        setServerVariable(counters_StateOperationalFromError_Active_Variable_);
        setServerVariable(counters_StateOperationalFromError_Classification_Variable_);
        setServerVariable(counters_StateOperationalFromError_DiagnosticsLevel_Variable_);
        setServerVariable(counters_StateOperationalFromError_TimeFirstChange_Variable_);
        setServerVariable(counters_StateOperationalFromError_Variable_);
        setServerVariable(counters_StatePausedByParent_Active_Variable_);
        setServerVariable(counters_StatePausedByParent_Classification_Variable_);
        setServerVariable(counters_StatePausedByParent_DiagnosticsLevel_Variable_);
        setServerVariable(counters_StatePausedByParent_TimeFirstChange_Variable_);
        setServerVariable(counters_StatePausedByParent_Variable_);
        setServerVariable(diagnosticsLevel_Variable_);
        setServerVariable(subError_Variable_);
        setServerVariable(totalError_Active_Variable_);
        setServerVariable(totalError_Classification_Variable_);
        setServerVariable(totalError_DiagnosticsLevel_Variable_);
        setServerVariable(totalError_TimeFirstChange_Variable_);
        setServerVariable(totalError_Variable_);
        setServerVariable(totalInformation_Active_Variable_);
        setServerVariable(totalInformation_Classification_Variable_);
        setServerVariable(totalInformation_DiagnosticsLevel_Variable_);
        setServerVariable(totalInformation_TimeFirstChange_Variable_);
        setServerVariable(totalInformation_Variable_);
        setServerMethod(reset_Method_);
        reset_Method_->registerMethod(boost::bind(&PubSubDiagnosticsType::call_Reset_Method, this, _1));
    }
    
    PubSubDiagnosticsType::PubSubDiagnosticsType(const PubSubDiagnosticsType& value)
    : ObjectBase()
    , counters_StateDisabledByMethod_Active_Variable_(boost::make_shared<ServerVariable>("Counters_StateDisabledByMethod_Active_Variable"))
    , counters_StateDisabledByMethod_Classification_Variable_(boost::make_shared<ServerVariable>("Counters_StateDisabledByMethod_Classification_Variable"))
    , counters_StateDisabledByMethod_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("Counters_StateDisabledByMethod_DiagnosticsLevel_Variable"))
    , counters_StateDisabledByMethod_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("Counters_StateDisabledByMethod_TimeFirstChange_Variable"))
    , counters_StateDisabledByMethod_Variable_(boost::make_shared<ServerVariable>("Counters_StateDisabledByMethod_Variable"))
    , counters_StateError_Active_Variable_(boost::make_shared<ServerVariable>("Counters_StateError_Active_Variable"))
    , counters_StateError_Classification_Variable_(boost::make_shared<ServerVariable>("Counters_StateError_Classification_Variable"))
    , counters_StateError_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("Counters_StateError_DiagnosticsLevel_Variable"))
    , counters_StateError_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("Counters_StateError_TimeFirstChange_Variable"))
    , counters_StateError_Variable_(boost::make_shared<ServerVariable>("Counters_StateError_Variable"))
    , counters_StateOperationalByMethod_Active_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByMethod_Active_Variable"))
    , counters_StateOperationalByMethod_Classification_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByMethod_Classification_Variable"))
    , counters_StateOperationalByMethod_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByMethod_DiagnosticsLevel_Variable"))
    , counters_StateOperationalByMethod_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByMethod_TimeFirstChange_Variable"))
    , counters_StateOperationalByMethod_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByMethod_Variable"))
    , counters_StateOperationalByParent_Active_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByParent_Active_Variable"))
    , counters_StateOperationalByParent_Classification_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByParent_Classification_Variable"))
    , counters_StateOperationalByParent_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByParent_DiagnosticsLevel_Variable"))
    , counters_StateOperationalByParent_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByParent_TimeFirstChange_Variable"))
    , counters_StateOperationalByParent_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalByParent_Variable"))
    , counters_StateOperationalFromError_Active_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalFromError_Active_Variable"))
    , counters_StateOperationalFromError_Classification_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalFromError_Classification_Variable"))
    , counters_StateOperationalFromError_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalFromError_DiagnosticsLevel_Variable"))
    , counters_StateOperationalFromError_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalFromError_TimeFirstChange_Variable"))
    , counters_StateOperationalFromError_Variable_(boost::make_shared<ServerVariable>("Counters_StateOperationalFromError_Variable"))
    , counters_StatePausedByParent_Active_Variable_(boost::make_shared<ServerVariable>("Counters_StatePausedByParent_Active_Variable"))
    , counters_StatePausedByParent_Classification_Variable_(boost::make_shared<ServerVariable>("Counters_StatePausedByParent_Classification_Variable"))
    , counters_StatePausedByParent_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("Counters_StatePausedByParent_DiagnosticsLevel_Variable"))
    , counters_StatePausedByParent_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("Counters_StatePausedByParent_TimeFirstChange_Variable"))
    , counters_StatePausedByParent_Variable_(boost::make_shared<ServerVariable>("Counters_StatePausedByParent_Variable"))
    , diagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("DiagnosticsLevel_Variable"))
    , subError_Variable_(boost::make_shared<ServerVariable>("SubError_Variable"))
    , totalError_Active_Variable_(boost::make_shared<ServerVariable>("TotalError_Active_Variable"))
    , totalError_Classification_Variable_(boost::make_shared<ServerVariable>("TotalError_Classification_Variable"))
    , totalError_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("TotalError_DiagnosticsLevel_Variable"))
    , totalError_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("TotalError_TimeFirstChange_Variable"))
    , totalError_Variable_(boost::make_shared<ServerVariable>("TotalError_Variable"))
    , totalInformation_Active_Variable_(boost::make_shared<ServerVariable>("TotalInformation_Active_Variable"))
    , totalInformation_Classification_Variable_(boost::make_shared<ServerVariable>("TotalInformation_Classification_Variable"))
    , totalInformation_DiagnosticsLevel_Variable_(boost::make_shared<ServerVariable>("TotalInformation_DiagnosticsLevel_Variable"))
    , totalInformation_TimeFirstChange_Variable_(boost::make_shared<ServerVariable>("TotalInformation_TimeFirstChange_Variable"))
    , totalInformation_Variable_(boost::make_shared<ServerVariable>("TotalInformation_Variable"))
    , reset_Method_(boost::make_shared<ServerMethod>("Reset_Method"))
    {
        objectTypeNamespaceName("http://opcfoundation.org/UA/");
        objectTypeNodeId((OpcUaUInt32)19677);
        setServerVariable(counters_StateDisabledByMethod_Active_Variable_);
        setServerVariable(counters_StateDisabledByMethod_Classification_Variable_);
        setServerVariable(counters_StateDisabledByMethod_DiagnosticsLevel_Variable_);
        setServerVariable(counters_StateDisabledByMethod_TimeFirstChange_Variable_);
        setServerVariable(counters_StateDisabledByMethod_Variable_);
        setServerVariable(counters_StateError_Active_Variable_);
        setServerVariable(counters_StateError_Classification_Variable_);
        setServerVariable(counters_StateError_DiagnosticsLevel_Variable_);
        setServerVariable(counters_StateError_TimeFirstChange_Variable_);
        setServerVariable(counters_StateError_Variable_);
        setServerVariable(counters_StateOperationalByMethod_Active_Variable_);
        setServerVariable(counters_StateOperationalByMethod_Classification_Variable_);
        setServerVariable(counters_StateOperationalByMethod_DiagnosticsLevel_Variable_);
        setServerVariable(counters_StateOperationalByMethod_TimeFirstChange_Variable_);
        setServerVariable(counters_StateOperationalByMethod_Variable_);
        setServerVariable(counters_StateOperationalByParent_Active_Variable_);
        setServerVariable(counters_StateOperationalByParent_Classification_Variable_);
        setServerVariable(counters_StateOperationalByParent_DiagnosticsLevel_Variable_);
        setServerVariable(counters_StateOperationalByParent_TimeFirstChange_Variable_);
        setServerVariable(counters_StateOperationalByParent_Variable_);
        setServerVariable(counters_StateOperationalFromError_Active_Variable_);
        setServerVariable(counters_StateOperationalFromError_Classification_Variable_);
        setServerVariable(counters_StateOperationalFromError_DiagnosticsLevel_Variable_);
        setServerVariable(counters_StateOperationalFromError_TimeFirstChange_Variable_);
        setServerVariable(counters_StateOperationalFromError_Variable_);
        setServerVariable(counters_StatePausedByParent_Active_Variable_);
        setServerVariable(counters_StatePausedByParent_Classification_Variable_);
        setServerVariable(counters_StatePausedByParent_DiagnosticsLevel_Variable_);
        setServerVariable(counters_StatePausedByParent_TimeFirstChange_Variable_);
        setServerVariable(counters_StatePausedByParent_Variable_);
        setServerVariable(diagnosticsLevel_Variable_);
        setServerVariable(subError_Variable_);
        setServerVariable(totalError_Active_Variable_);
        setServerVariable(totalError_Classification_Variable_);
        setServerVariable(totalError_DiagnosticsLevel_Variable_);
        setServerVariable(totalError_TimeFirstChange_Variable_);
        setServerVariable(totalError_Variable_);
        setServerVariable(totalInformation_Active_Variable_);
        setServerVariable(totalInformation_Classification_Variable_);
        setServerVariable(totalInformation_DiagnosticsLevel_Variable_);
        setServerVariable(totalInformation_TimeFirstChange_Variable_);
        setServerVariable(totalInformation_Variable_);
        setServerMethod(reset_Method_);
        reset_Method_->registerMethod(boost::bind(&PubSubDiagnosticsType::call_Reset_Method, this, _1));
    }
    
    PubSubDiagnosticsType::~PubSubDiagnosticsType(void)
    {
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateDisabledByMethod_Active_Variable(void)
    {
        return counters_StateDisabledByMethod_Active_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateDisabledByMethod_Classification_Variable(void)
    {
        return counters_StateDisabledByMethod_Classification_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateDisabledByMethod_DiagnosticsLevel_Variable(void)
    {
        return counters_StateDisabledByMethod_DiagnosticsLevel_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateDisabledByMethod_TimeFirstChange_Variable(void)
    {
        return counters_StateDisabledByMethod_TimeFirstChange_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateDisabledByMethod_Variable(void)
    {
        return counters_StateDisabledByMethod_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateError_Active_Variable(void)
    {
        return counters_StateError_Active_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateError_Classification_Variable(void)
    {
        return counters_StateError_Classification_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateError_DiagnosticsLevel_Variable(void)
    {
        return counters_StateError_DiagnosticsLevel_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateError_TimeFirstChange_Variable(void)
    {
        return counters_StateError_TimeFirstChange_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateError_Variable(void)
    {
        return counters_StateError_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalByMethod_Active_Variable(void)
    {
        return counters_StateOperationalByMethod_Active_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalByMethod_Classification_Variable(void)
    {
        return counters_StateOperationalByMethod_Classification_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalByMethod_DiagnosticsLevel_Variable(void)
    {
        return counters_StateOperationalByMethod_DiagnosticsLevel_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalByMethod_TimeFirstChange_Variable(void)
    {
        return counters_StateOperationalByMethod_TimeFirstChange_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalByMethod_Variable(void)
    {
        return counters_StateOperationalByMethod_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalByParent_Active_Variable(void)
    {
        return counters_StateOperationalByParent_Active_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalByParent_Classification_Variable(void)
    {
        return counters_StateOperationalByParent_Classification_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalByParent_DiagnosticsLevel_Variable(void)
    {
        return counters_StateOperationalByParent_DiagnosticsLevel_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalByParent_TimeFirstChange_Variable(void)
    {
        return counters_StateOperationalByParent_TimeFirstChange_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalByParent_Variable(void)
    {
        return counters_StateOperationalByParent_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalFromError_Active_Variable(void)
    {
        return counters_StateOperationalFromError_Active_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalFromError_Classification_Variable(void)
    {
        return counters_StateOperationalFromError_Classification_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalFromError_DiagnosticsLevel_Variable(void)
    {
        return counters_StateOperationalFromError_DiagnosticsLevel_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalFromError_TimeFirstChange_Variable(void)
    {
        return counters_StateOperationalFromError_TimeFirstChange_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StateOperationalFromError_Variable(void)
    {
        return counters_StateOperationalFromError_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StatePausedByParent_Active_Variable(void)
    {
        return counters_StatePausedByParent_Active_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StatePausedByParent_Classification_Variable(void)
    {
        return counters_StatePausedByParent_Classification_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StatePausedByParent_DiagnosticsLevel_Variable(void)
    {
        return counters_StatePausedByParent_DiagnosticsLevel_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StatePausedByParent_TimeFirstChange_Variable(void)
    {
        return counters_StatePausedByParent_TimeFirstChange_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::counters_StatePausedByParent_Variable(void)
    {
        return counters_StatePausedByParent_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::diagnosticsLevel_Variable(void)
    {
        return diagnosticsLevel_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::subError_Variable(void)
    {
        return subError_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::totalError_Active_Variable(void)
    {
        return totalError_Active_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::totalError_Classification_Variable(void)
    {
        return totalError_Classification_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::totalError_DiagnosticsLevel_Variable(void)
    {
        return totalError_DiagnosticsLevel_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::totalError_TimeFirstChange_Variable(void)
    {
        return totalError_TimeFirstChange_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::totalError_Variable(void)
    {
        return totalError_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::totalInformation_Active_Variable(void)
    {
        return totalInformation_Active_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::totalInformation_Classification_Variable(void)
    {
        return totalInformation_Classification_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::totalInformation_DiagnosticsLevel_Variable(void)
    {
        return totalInformation_DiagnosticsLevel_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::totalInformation_TimeFirstChange_Variable(void)
    {
        return totalInformation_TimeFirstChange_Variable_;
    }

    ServerVariable::SPtr&
    PubSubDiagnosticsType::totalInformation_Variable(void)
    {
        return totalInformation_Variable_;
    }

    void
    PubSubDiagnosticsType::counters_StateDisabledByMethod_Active_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateDisabledByMethod_Active_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateDisabledByMethod_Classification_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateDisabledByMethod_Classification_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateDisabledByMethod_DiagnosticsLevel_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateDisabledByMethod_DiagnosticsLevel_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateDisabledByMethod_TimeFirstChange_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateDisabledByMethod_TimeFirstChange_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateDisabledByMethod_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateDisabledByMethod_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateError_Active_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateError_Active_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateError_Classification_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateError_Classification_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateError_DiagnosticsLevel_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateError_DiagnosticsLevel_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateError_TimeFirstChange_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateError_TimeFirstChange_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateError_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateError_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalByMethod_Active_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalByMethod_Active_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalByMethod_Classification_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalByMethod_Classification_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalByMethod_DiagnosticsLevel_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalByMethod_DiagnosticsLevel_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalByMethod_TimeFirstChange_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalByMethod_TimeFirstChange_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalByMethod_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalByMethod_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalByParent_Active_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalByParent_Active_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalByParent_Classification_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalByParent_Classification_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalByParent_DiagnosticsLevel_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalByParent_DiagnosticsLevel_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalByParent_TimeFirstChange_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalByParent_TimeFirstChange_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalByParent_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalByParent_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalFromError_Active_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalFromError_Active_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalFromError_Classification_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalFromError_Classification_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalFromError_DiagnosticsLevel_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalFromError_DiagnosticsLevel_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalFromError_TimeFirstChange_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalFromError_TimeFirstChange_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StateOperationalFromError_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StateOperationalFromError_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StatePausedByParent_Active_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StatePausedByParent_Active_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StatePausedByParent_Classification_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StatePausedByParent_Classification_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StatePausedByParent_DiagnosticsLevel_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StatePausedByParent_DiagnosticsLevel_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StatePausedByParent_TimeFirstChange_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StatePausedByParent_TimeFirstChange_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::counters_StatePausedByParent_Variable(ServerVariable::SPtr& serverVariable)
    {
        counters_StatePausedByParent_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::diagnosticsLevel_Variable(ServerVariable::SPtr& serverVariable)
    {
        diagnosticsLevel_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::subError_Variable(ServerVariable::SPtr& serverVariable)
    {
        subError_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::totalError_Active_Variable(ServerVariable::SPtr& serverVariable)
    {
        totalError_Active_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::totalError_Classification_Variable(ServerVariable::SPtr& serverVariable)
    {
        totalError_Classification_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::totalError_DiagnosticsLevel_Variable(ServerVariable::SPtr& serverVariable)
    {
        totalError_DiagnosticsLevel_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::totalError_TimeFirstChange_Variable(ServerVariable::SPtr& serverVariable)
    {
        totalError_TimeFirstChange_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::totalError_Variable(ServerVariable::SPtr& serverVariable)
    {
        totalError_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::totalInformation_Active_Variable(ServerVariable::SPtr& serverVariable)
    {
        totalInformation_Active_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::totalInformation_Classification_Variable(ServerVariable::SPtr& serverVariable)
    {
        totalInformation_Classification_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::totalInformation_DiagnosticsLevel_Variable(ServerVariable::SPtr& serverVariable)
    {
        totalInformation_DiagnosticsLevel_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::totalInformation_TimeFirstChange_Variable(ServerVariable::SPtr& serverVariable)
    {
        totalInformation_TimeFirstChange_Variable_ = serverVariable;
    }

    void
    PubSubDiagnosticsType::totalInformation_Variable(ServerVariable::SPtr& serverVariable)
    {
        totalInformation_Variable_ = serverVariable;
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateDisabledByMethod_Active_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateDisabledByMethod_Active_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateDisabledByMethod_Classification_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateDisabledByMethod_Classification_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateDisabledByMethod_DiagnosticsLevel_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateDisabledByMethod_DiagnosticsLevel_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateDisabledByMethod_TimeFirstChange_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateDisabledByMethod_TimeFirstChange_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateDisabledByMethod_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateDisabledByMethod_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateError_Active_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateError_Active_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateError_Classification_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateError_Classification_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateError_DiagnosticsLevel_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateError_DiagnosticsLevel_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateError_TimeFirstChange_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateError_TimeFirstChange_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateError_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateError_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalByMethod_Active_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByMethod_Active_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalByMethod_Classification_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByMethod_Classification_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalByMethod_DiagnosticsLevel_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByMethod_DiagnosticsLevel_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalByMethod_TimeFirstChange_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByMethod_TimeFirstChange_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalByMethod_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByMethod_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalByParent_Active_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByParent_Active_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalByParent_Classification_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByParent_Classification_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalByParent_DiagnosticsLevel_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByParent_DiagnosticsLevel_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalByParent_TimeFirstChange_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByParent_TimeFirstChange_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalByParent_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByParent_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalFromError_Active_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalFromError_Active_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalFromError_Classification_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalFromError_Classification_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalFromError_DiagnosticsLevel_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalFromError_DiagnosticsLevel_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalFromError_TimeFirstChange_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalFromError_TimeFirstChange_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StateOperationalFromError_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalFromError_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StatePausedByParent_Active_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StatePausedByParent_Active_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StatePausedByParent_Classification_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StatePausedByParent_Classification_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StatePausedByParent_DiagnosticsLevel_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StatePausedByParent_DiagnosticsLevel_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StatePausedByParent_TimeFirstChange_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StatePausedByParent_TimeFirstChange_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_Counters_StatePausedByParent_Variable(OpcUaDataValue& dataValue)
    {
        return counters_StatePausedByParent_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_DiagnosticsLevel_Variable(OpcUaDataValue& dataValue)
    {
        return diagnosticsLevel_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_SubError_Variable(OpcUaDataValue& dataValue)
    {
        return subError_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_TotalError_Active_Variable(OpcUaDataValue& dataValue)
    {
        return totalError_Active_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_TotalError_Classification_Variable(OpcUaDataValue& dataValue)
    {
        return totalError_Classification_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_TotalError_DiagnosticsLevel_Variable(OpcUaDataValue& dataValue)
    {
        return totalError_DiagnosticsLevel_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_TotalError_TimeFirstChange_Variable(OpcUaDataValue& dataValue)
    {
        return totalError_TimeFirstChange_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_TotalError_Variable(OpcUaDataValue& dataValue)
    {
        return totalError_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_TotalInformation_Active_Variable(OpcUaDataValue& dataValue)
    {
        return totalInformation_Active_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_TotalInformation_Classification_Variable(OpcUaDataValue& dataValue)
    {
        return totalInformation_Classification_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_TotalInformation_DiagnosticsLevel_Variable(OpcUaDataValue& dataValue)
    {
        return totalInformation_DiagnosticsLevel_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_TotalInformation_TimeFirstChange_Variable(OpcUaDataValue& dataValue)
    {
        return totalInformation_TimeFirstChange_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::get_TotalInformation_Variable(OpcUaDataValue& dataValue)
    {
        return totalInformation_Variable_->getDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateDisabledByMethod_Active_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateDisabledByMethod_Active_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateDisabledByMethod_Classification_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateDisabledByMethod_Classification_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateDisabledByMethod_DiagnosticsLevel_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateDisabledByMethod_DiagnosticsLevel_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateDisabledByMethod_TimeFirstChange_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateDisabledByMethod_TimeFirstChange_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateDisabledByMethod_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateDisabledByMethod_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateError_Active_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateError_Active_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateError_Classification_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateError_Classification_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateError_DiagnosticsLevel_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateError_DiagnosticsLevel_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateError_TimeFirstChange_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateError_TimeFirstChange_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateError_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateError_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalByMethod_Active_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByMethod_Active_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalByMethod_Classification_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByMethod_Classification_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalByMethod_DiagnosticsLevel_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByMethod_DiagnosticsLevel_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalByMethod_TimeFirstChange_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByMethod_TimeFirstChange_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalByMethod_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByMethod_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalByParent_Active_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByParent_Active_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalByParent_Classification_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByParent_Classification_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalByParent_DiagnosticsLevel_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByParent_DiagnosticsLevel_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalByParent_TimeFirstChange_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByParent_TimeFirstChange_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalByParent_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalByParent_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalFromError_Active_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalFromError_Active_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalFromError_Classification_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalFromError_Classification_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalFromError_DiagnosticsLevel_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalFromError_DiagnosticsLevel_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalFromError_TimeFirstChange_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalFromError_TimeFirstChange_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StateOperationalFromError_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StateOperationalFromError_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StatePausedByParent_Active_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StatePausedByParent_Active_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StatePausedByParent_Classification_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StatePausedByParent_Classification_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StatePausedByParent_DiagnosticsLevel_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StatePausedByParent_DiagnosticsLevel_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StatePausedByParent_TimeFirstChange_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StatePausedByParent_TimeFirstChange_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_Counters_StatePausedByParent_Variable(const OpcUaDataValue& dataValue)
    {
        return counters_StatePausedByParent_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_DiagnosticsLevel_Variable(const OpcUaDataValue& dataValue)
    {
        return diagnosticsLevel_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_SubError_Variable(const OpcUaDataValue& dataValue)
    {
        return subError_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_TotalError_Active_Variable(const OpcUaDataValue& dataValue)
    {
        return totalError_Active_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_TotalError_Classification_Variable(const OpcUaDataValue& dataValue)
    {
        return totalError_Classification_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_TotalError_DiagnosticsLevel_Variable(const OpcUaDataValue& dataValue)
    {
        return totalError_DiagnosticsLevel_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_TotalError_TimeFirstChange_Variable(const OpcUaDataValue& dataValue)
    {
        return totalError_TimeFirstChange_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_TotalError_Variable(const OpcUaDataValue& dataValue)
    {
        return totalError_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_TotalInformation_Active_Variable(const OpcUaDataValue& dataValue)
    {
        return totalInformation_Active_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_TotalInformation_Classification_Variable(const OpcUaDataValue& dataValue)
    {
        return totalInformation_Classification_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_TotalInformation_DiagnosticsLevel_Variable(const OpcUaDataValue& dataValue)
    {
        return totalInformation_DiagnosticsLevel_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_TotalInformation_TimeFirstChange_Variable(const OpcUaDataValue& dataValue)
    {
        return totalInformation_TimeFirstChange_Variable_->setDataValue(dataValue);
    }

    bool
    PubSubDiagnosticsType::set_TotalInformation_Variable(const OpcUaDataValue& dataValue)
    {
        return totalInformation_Variable_->setDataValue(dataValue);
    }

    void
    PubSubDiagnosticsType::call_Reset_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

}
