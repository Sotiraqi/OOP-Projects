#include "administrator.h"
#include "user.h"

int main()
{
	CNetwork* client;
	CAdministrator* client_is_admin;

	cout << "Welcome. Please select your profile: " << endl;
	cout << "1. Administrator" << endl;
	cout << "2. User" << endl;
	cout << "Press any key to exit" << endl;

	char ch;
	bool v;
	ch = getchar();

	if (ch == '1')
	{
		client = new CAdministrator();
		v = client->read_credentials();

		if (v == true)
		{
			cout << "Welcome! You are now logged in!" << endl;
			client_is_admin = dynamic_cast<CAdministrator*>(client);
			client_is_admin->admin_menu();
		}
		else
		{
			cout << "Invalid credentials!" << endl;
		}
		
	}
	else if (ch == '2')
	{
		client = new CUser();
		v = client->read_credentials();

		if (v == true)
		{
			cout << "Welcome! You are now logged in!" << endl;
		}
		else
		{
			cout << "Invalid credentials!" << endl;
		}
	}
	else
	{
		cout << "Exiting..." << endl;
		exit(0);
	}

	return 0;

}