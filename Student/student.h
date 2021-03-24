#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class CStudent
{
private:
	string name;
	string specialization;
	int year;
	double median;
public:
	CStudent();
	CStudent(string name, string specialization, int year, double median);
	CStudent(const CStudent& stud);
	bool operator <(const CStudent& stud);
	friend ostream& operator<<(ostream& os, const CStudent& stud);
	
};

void bubble_sort(CStudent* arr[], int size);


#endif
