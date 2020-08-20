/*
   Copyright 2015-2020 Kai Huebl (kai@huebl-sgh.de)

   Lizenziert gemäß Apache Licence Version 2.0 (die „Lizenz“); Nutzung dieser
   Datei nur in Übereinstimmung mit der Lizenz erlaubt.
   Eine Kopie der Lizenz erhalten Sie auf http://www.apache.org/licenses/LICENSE-2.0.

   Sofern nicht gemäß geltendem Recht vorgeschrieben oder schriftlich vereinbart,
   erfolgt die Bereitstellung der im Rahmen der Lizenz verbreiteten Software OHNE
   GEWÄHR ODER VORBEHALTE – ganz gleich, ob ausdrücklich oder stillschweigend.

   Informationen über die jeweiligen Bedingungen für Genehmigungen und Einschränkungen
   im Rahmen der Lizenz finden Sie in der Lizenz.

   Autor: Kai Huebl (kai@huebl-sgh.de)
 */

#include "OpcUaStackCore/SecureChannel/SecurityHeader.h"

namespace OpcUaStackCore
{

	bool
	SecurityHeader::opcUaBinaryEncode(
		std::ostream& os,
		OpcUaByteString& securityPolicyUri,
		CertificateChain& certificateChain,
		OpcUaByteString& receiverCertificateThumbprint
	)
	{
		// encode security header
		securityPolicyUri.opcUaBinaryEncode(os);
		certificateChain.opcUaBinaryEncode(os);
		receiverCertificateThumbprint.opcUaBinaryEncode(os);
		return true;
	}

	bool
	SecurityHeader::opcUaBinaryDecode(
		std::istream& is,
		OpcUaByteString& securityPolicyUri,
		CertificateChain& certificateChain,
		OpcUaByteString& receiverCertificateThumbprint
	)
	{
		// decode
		securityPolicyUri.opcUaBinaryDecode(is);
		certificateChain.opcUaBinaryDecode(is);
		receiverCertificateThumbprint.opcUaBinaryDecode(is);
		return true;
	}

}	
