#pragma once
#include "network.h"

class CUser : virtual public CNetwork
{
public:
	bool read_credentials() override;
};

