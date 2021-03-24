#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class CPerson
{
private:
	string name_surname;
	string m_name_surname;
    string f_name_surname;
    int birth_day; //Birthday is represented in by year
public:
	CPerson();
	CPerson(string p_data, string pm_data, string pf_data, long int birthday);

	bool operator<(const CPerson& stud);
	friend ostream& operator<< (ostream& os, const CPerson& pers);
	


};

void bubble_sort(CPerson* arr[], int size);

#endif