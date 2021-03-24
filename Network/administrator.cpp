#include "administrator.h"

bool CAdministrator::read_credentials()
{
	string name, pass;
	bool a = false;
	CNetwork::read_credentials();
	ifstream admin_file("admin.txt");

	if (admin_file.is_open())
	{
		while (!admin_file.eof())
		{
			admin_file>>name>>pass;

			if (name == username && pass == password)
			{
				a = true;
				admin_file.close();
				break;
			}
		}
		admin_file.close();
	}
	else
	{
		cout << "File not found!" << endl;
		exit(0);
	}

	if (a)
		return true;
	else
		return false;
}

void CAdministrator::admin_menu()
{
	cout << "Admin Menu!" << endl;
	cout << "1. View all users" << endl;
	cout << "2. Add a user" << endl;
	cout << "3. Remove a user" << endl;
	cout << "Press any key to exit" << endl;

	int ch;
	cin >> ch;

	if (ch == 1)
	{
		show_users();
	}
	else if (ch == 2)
	{
		add_user();
	}
	else if (ch == 3)
	{
		remove_user();
	}
	else
	{
		cout << "Exiting..." << endl;
		exit(0);
	}
}

void CAdministrator::show_users()
{
	string name, pass;
	ifstream users_file("users.txt");

	if (users_file.is_open())
	{
		while (!users_file.eof())
		{
			users_file >> name >> pass;
			cout << name << "\t" << pass << endl;
		}
		users_file.close();
		admin_menu();
	}
	else
	{
		cout << "File not found!" << endl;
	}
}

void CAdministrator::add_user()
{
	string name, pass;
	cout << "Insert a username: ";
	cin >> name;
	cout << "Insert a password:";
	cin >> pass;

	ofstream users_file("users.txt", ios::app);

	if (users_file.is_open())
	{
		users_file << endl;
		users_file << name << "\t" << pass;
		cout << "User account created succesfully!" << endl;
		users_file.close();
		admin_menu();
	}
	else
	{
		cout << "File not found" << endl;
		exit(0);
	}
}

void CAdministrator::remove_user()
{
	string name, line;

	ifstream users_file;
	users_file.open("users.txt");
	ofstream temp;
	temp.open("temp.txt");
	cout << "Enter user name: ";
	cin >> name;



	while (getline(users_file, line))
	{
		if (line.substr(0, name.size()) != name)
			temp << line << endl;
			
	}

	temp.close();
	users_file.close();
	remove("users.txt");
	rename("temp.txt", "users.txt");
	cout << "User removed successfully!" << endl;
	admin_menu();

}




