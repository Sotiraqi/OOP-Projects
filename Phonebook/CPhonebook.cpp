#include "CPhonebook.h"

void CPhonebook::read()
{
	cout << "Enter data: " << endl;
	cout << "Surname Name: ";
	cin >> client.name;
	cout << "Phone number: ";
	cin >> client.number;
	cout << "Adress" << endl;
	cout << "Neighborhood: ";
	cin >> client.adress.hood;
	cout << "Street: ";
	cin >> client.adress.street;
	cout << "House nr: ";
	cin >> client.adress.number;
}

void CPhonebook::print()
{
	cout << client.name << TAB << client.number << TAB << client.adress.hood << TAB << client.adress.street << TAB << client.adress.number << endl;

}

bool comparator(const CPhonebook& lhs, const CPhonebook& rhs)
{
	return lhs.client.name < rhs.client.name;
}

void search(vector <CPhonebook> vec, string name_to_search, int number)
{
	bool checker = false;
	for (int i = 0; i < number; i++)
	{
		if (vec[i].client.name == name_to_search)
		{
			vec[i].print();
			checker = true;
			i == number;
		}
		else
		{
			checker = false;;
		}
	}

	if (checker)
	{
		cout << "1 result found!" << endl;

	}
	else
	{
		cout << "No results found" << endl;
	}
}











