#include <algorithm>
#include "CPhonebook.h"

int main()
{
	int nr;
	cout << "Add clients" << endl;
	cin >> nr;
	vector<CPhonebook> list(nr);
	
	for (int i = 0; i < nr; i++)
	{
		list[i].read();
	}

	sort(list.begin(), list.end(), &comparator);

	for (int i = 0; i < nr; i++)
	{
		list[i].print();
	}

	string surname;
	cout << "Enter client info: " << endl;
	cin >> surname;

	search(list, surname, nr);	
	
	return 0;
}