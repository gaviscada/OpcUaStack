#include "OpcUaStackServer/AddressSpaceModel/DummyNodeClass.h"

namespace OpcUaStackServer
{

	DummyNodeClass::DummyNodeClass(void)
	: BaseNodeClass(NodeClassType_Dummy)
	{
	}

	DummyNodeClass::~DummyNodeClass(void)
	{
	}

	void
	DummyNodeClass::copyTo(DummyNodeClass::SPtr dummyNodeClass)
	{
		copyTo(*dummyNodeClass);
	}

	void
	DummyNodeClass::copyTo(DummyNodeClass& dummyNodeClass)
	{
		BaseNodeClass::copyTo(dummyNodeClass);
	}

	BaseNodeClass::SPtr
	DummyNodeClass::clone(void)
	{
		DummyNodeClass::SPtr dummyNodeClass = DummyNodeClass::construct();
		copyTo(dummyNodeClass);
		return dummyNodeClass;
	}

}
