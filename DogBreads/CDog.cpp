#include "CDog.h"

void CDog::read()
{
	cout << "Enter dog details:" << endl;
	cout << "Name: ";
	cin >> name;
	cout << "Color: ";
	cin >> color;
	cout << "Weight: ";
	cin >> weight;
	cout << "Height: ";
	cin >> height;
	cout << "Age: ";
	cin >> age;
}

void CDog::print()
{
	cout << name << TAB << color << TAB << weight << TAB << height << TAB << age << TAB;
}