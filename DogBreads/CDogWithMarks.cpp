#include "CDogWithMarks.h"

void CDogWithMarks::read()
{
	cout << "With marks:" << endl;
	CDog::read();
	cout << "Number of marks: ";
	cin >> mark_number;
}

void CDogWithMarks::print()
{
	CDog::print();
	cout << mark_number << endl;
}