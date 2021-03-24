#include "student.h"

CStudent::CStudent() : name(""), specialization(""), year(0), median(0)
{
}

CStudent::CStudent(string name, string specialization, int year, double median)
{
	name = this->name;
	specialization = this->specialization;
	year = this->year;
	median = this->median;
}

CStudent::CStudent(const CStudent& stud)
{
	name = stud.name;
	specialization = stud.specialization;
	year = stud.year;
	median = stud.median;
}

bool CStudent::operator<(const CStudent& stud)
{
	if (median < stud.median)
	{
		return true;
	}
	else
	{
		return false;
	}	
}

ostream& operator<<(ostream& os, const CStudent& stud)
{
	os << "Name: " << stud.name << endl;
	os << "Specialization: " << stud.specialization << endl;
	os << "Year: " << stud.year << endl;
	os << "Median: " << stud.median << endl;

	// TODO: insert return statement here
	return os;
}

void bubble_sort(CStudent* arr[], int size)
{
	CStudent* temp;
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
