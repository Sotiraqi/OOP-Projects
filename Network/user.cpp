#include "user.h"

bool CUser::read_credentials()
{
	string name, pass;

	bool a = false;
	CNetwork::read_credentials();
	ifstream users_file("users.txt");

	if (users_file.is_open())
	{
		while (!users_file.eof())
		{
			users_file >> name >> pass;

			if (name == username && pass == password)
			{
				a = true;
				users_file.close();
				break;
			}
		}
		users_file.close();
	}
	else
	{
		cout << "File not found!" << endl;
		exit(0);
	}

	if (a)
	{
		return true;
	}
	else
		return false;
}
