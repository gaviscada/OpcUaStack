#ifndef __OpcUaStackCore_AddNodesRequest_h__
#define __OpcUaStackCore_AddNodesRequest_h__

#include <stdint.h>
#include "OpcUaStackCore/Base/ObjectPool.h"
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/BuildInTypes/BuildInTypes.h"
#include "OpcUaStackCore/SecureChannel/RequestHeader.h"
#include "OpcUaStackCore/SecureChannel/ApplicationInstanceCertificate.h"
#include "OpcUaStackCore/ServiceSet/AddNodesItem.h"


namespace OpcUaStackCore
{

	class DLLEXPORT AddNodesRequest : public  ObjectPool<AddNodesRequest>
	{
	  public:
		AddNodesRequest(void);
		virtual ~AddNodesRequest(void);

		void requestHeader(const RequestHeader::SPtr requestHeaderSPtr);
		RequestHeader::SPtr requestHeader(void) const;
		void nodesToAdd(const AddNodesItemArray::SPtr addNodesItemArraySPtr);
		AddNodesItemArray::SPtr nodesToAdd() const;


		void opcUaBinaryEncode(std::ostream& os) const;
		void opcUaBinaryDecode(std::istream& is);

	  private:
		RequestHeader::SPtr requestHeaderSPtr_;
		AddNodesItemArray::SPtr addNodesItemArraySPtr_;
	};

}

#endif
