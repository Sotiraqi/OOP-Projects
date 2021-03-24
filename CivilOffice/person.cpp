#include "person.h"

CPerson::CPerson()
{
	name_surname = "";
	m_name_surname = "";
	f_name_surname = "";
	birth_day = 0;
}

CPerson::CPerson(string p_data, string pm_data, string pf_data, long int birthday)
{
	p_data = name_surname;
	pm_data = m_name_surname;
	pf_data = f_name_surname;
	birthday = birth_day;
}

bool CPerson::operator<(const CPerson& stud)
{
	if (birth_day < stud.birth_day)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

ostream& operator<<(ostream& os, const CPerson& pers)
{
	cout << "Surname/Name: " << pers.name_surname << endl;
	cout << "Father's Surname/Name: " << pers.f_name_surname << endl;
	cout << "Mother's Surname/Name: " << pers.m_name_surname << endl;
	cout << "Birthday: " << pers.birth_day << endl;
	// TODO: insert return statement here
	return os;
}

void bubble_sort(CPerson* arr[], int size)
{
	CPerson* temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				// swap the elements
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
