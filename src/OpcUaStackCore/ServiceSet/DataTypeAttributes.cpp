/*
   Copyright 2015 Kai Huebl (kai@huebl-sgh.de)

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

#include "OpcUaStackCore/ServiceSet/DataTypeAttributes.h"

namespace OpcUaStackCore
{

	// ------------------------------------------------------------------------
	// ------------------------------------------------------------------------
	//
	// DataTypeAttributes
	//
	// ------------------------------------------------------------------------
	// ------------------------------------------------------------------------
	DataTypeAttributes::DataTypeAttributes(void)
	: Object()
	, ExtensionObjectBase()
	, specifiedAttributes_()
	, displayName_(constructSPtr<OpcUaLocalizedText>())
	, description_(constructSPtr<OpcUaLocalizedText>())
	, isAbstract_(false)
	, writeMask_()
	, userWriteMask_()
	{
		specifiedAttributes_ |= SpecifiedAttributes_Description;
		specifiedAttributes_ |= SpecifiedAttributes_DisplayName;
		specifiedAttributes_ |= SpecifiedAttributes_IsAbstract;
		specifiedAttributes_ |= SpecifiedAttributes_WriteMask;
		specifiedAttributes_ |= SpecifiedAttributes_UserWriteMask;
	}

	DataTypeAttributes::~DataTypeAttributes(void)
	{
	}

	 OpcUaUInt32
     DataTypeAttributes::specifiedAttributes(void) const
	 {
		 return specifiedAttributes_;
	 }

	void
	DataTypeAttributes::displayName(
		const OpcUaLocalizedText::SPtr displayNameSPtr)
	{
		displayName_ = displayNameSPtr;		
	}

    OpcUaLocalizedText::SPtr
	DataTypeAttributes::displayName(void) const
	{
		return displayName_;
	}

	void
	DataTypeAttributes::description(
		const OpcUaLocalizedText::SPtr descriptionSPtr)
	{
		description_ = descriptionSPtr;
	}

    OpcUaLocalizedText::SPtr
	DataTypeAttributes::description(void) const
	{
		return description_;
	}

	void DataTypeAttributes::isAbstract(
		const OpcUaBoolean isAbstract)
	{
		isAbstract_ = isAbstract;
	}

    OpcUaBoolean
	DataTypeAttributes::isAbstract(void) const
	{
		return isAbstract_;
	}

	void DataTypeAttributes::writeMask(
		const WriteableAttribute writeMask)
	{
		writeMask_ |= writeMask;
	}

    OpcUaUInt32
	DataTypeAttributes::writeMask(void) const
	{
		return writeMask_;
	}

	
	void DataTypeAttributes::userWriteMask(
		const WriteableAttribute userWriteMask)
	{
		userWriteMask_ |= userWriteMask;
	}

    OpcUaUInt32
	DataTypeAttributes::userWriteMask(void) const
	{
		return userWriteMask_;
	}

	void
	DataTypeAttributes::copyTo(DataTypeAttributes& dataTypeAttributes)
	{
		specifiedAttributes_ = dataTypeAttributes.specifiedAttributes_;
		displayName_->copyTo(*dataTypeAttributes.displayName_);
		description_->copyTo(*dataTypeAttributes.description_);
		isAbstract_ = dataTypeAttributes.isAbstract_;
		writeMask_ = dataTypeAttributes.writeMask_;
		userWriteMask_ = dataTypeAttributes.userWriteMask_;
	}

	bool
	DataTypeAttributes::operator==(const DataTypeAttributes& dataTypeAttributes) const
	{
		return specifiedAttributes_ == dataTypeAttributes.specifiedAttributes_ &&
			*displayName_ == *dataTypeAttributes.displayName_ &&
			*description_ == *dataTypeAttributes.description_ &&
			isAbstract_ == dataTypeAttributes.isAbstract_ &&
			writeMask_ == dataTypeAttributes.writeMask_ &&
			userWriteMask_ == dataTypeAttributes.userWriteMask_;
	}

	ExtensionObjectBase::SPtr
	DataTypeAttributes::factory(void)
	{
		return constructSPtr<DataTypeAttributes>();
	}
			
	void 
	DataTypeAttributes::opcUaBinaryEncode(
		std::ostream& os) const
	{
		OpcUaNumber::opcUaBinaryEncode(os, specifiedAttributes_);
		displayName_->opcUaBinaryEncode(os);
		description_->opcUaBinaryEncode(os);
		OpcUaNumber::opcUaBinaryEncode(os, isAbstract_);
		OpcUaNumber::opcUaBinaryEncode(os, writeMask_);
		OpcUaNumber::opcUaBinaryEncode(os, userWriteMask_);
	}
	
	void 
	DataTypeAttributes::opcUaBinaryDecode(
		std::istream& is)
	{
		OpcUaNumber::opcUaBinaryDecode(is, specifiedAttributes_);
		displayName_->opcUaBinaryDecode(is);
		description_->opcUaBinaryDecode(is);
		OpcUaNumber::opcUaBinaryDecode(is, isAbstract_);
		OpcUaNumber::opcUaBinaryDecode(is, writeMask_);
		OpcUaNumber::opcUaBinaryDecode(is, userWriteMask_);
	}

	void
	DataTypeAttributes::copyTo(ExtensionObjectBase& extensionObjectBase)
	{
		DataTypeAttributes* dst = dynamic_cast<DataTypeAttributes*>(&extensionObjectBase);
		copyTo(*dst);
	}

	bool
	DataTypeAttributes::equal(ExtensionObjectBase& extensionObjectBase) const
	{
		DataTypeAttributes* dst = dynamic_cast<DataTypeAttributes*>(&extensionObjectBase);
		return *this == *dst;
	}

	void
	DataTypeAttributes::out(std::ostream& os)
	{
		os << "SpecificAttributes=" << specifiedAttributes_;
		os << ", DisplayName="; displayName_->out(os);
		os << ", Description="; description_->out(os);
		os << ", IsAbstract=" <<  isAbstract_;
		os << ", WriteMask=" << writeMask_;
		os << ", UserWriteMask=" << userWriteMask_;
	}

}
