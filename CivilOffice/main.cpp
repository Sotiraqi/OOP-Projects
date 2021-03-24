#include "person.h"

int main()
{
	CPerson* persons[4] = { new CPerson("Saraci Sotiraq", "Saraci Mira", "Saraci Mondi", 2000),
							 new CPerson("Ion Rusu", "Ion Maria", "Ion Roxana", 1983),
							 new CPerson("Copac Andrei", "Copac Miruna", "Copac Marius", 1986),
							 new CPerson("Popa Melina", "Popa Ana", "Popa Marius", 2005) };

	bubble_sort(persons, 4);

	for (int i = 0; i < 4; i++)
	{
		cout << persons[i] << endl;
	}

	delete[] persons;
	return 0;

}