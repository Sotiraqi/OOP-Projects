#include "student.h"

int main()
{
	CStudent* students[4] = { new CStudent("Sotir", "Calculatoare", 2, 7.3), 
							 new CStudent("Andreea", "Drept", 2, 8.2),
							 new CStudent("Ion", "Sport", 3, 6.6),
							 new CStudent("Maria", "Agricultura", 1, 8)};
	CStudent* student5(students[3]);
	 
	for (int i = 0; i < 4; i++)
	{
		cout << students[i] << endl;
	}

	bubble_sort(students, 4);

	for (int i = 0; i < 4; i++)
	{
		cout << students[i] << endl;
	}


	return 0;
	
						  
}