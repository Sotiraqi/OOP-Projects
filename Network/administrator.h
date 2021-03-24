#pragma once
#include "network.h"

class CAdministrator: virtual public CNetwork
{
public:
	bool read_credentials() override;
	void admin_menu();
	void show_users();
	void add_user();
	void remove_user();
};

