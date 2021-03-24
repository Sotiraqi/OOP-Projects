#include <iostream>
#include "sort.h"

using namespace std;

int main()
{
	int size;
	int array1[MAX_SIZE];
	char array2[MAX_SIZE];
	int matrix[4][4];

	cout << "Enter arrays size: ";
	cin >> size;

	cout << "Enter some integers: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> array1[i];
	}

	cout << "Enter some characters: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> array2[i];
	}

	cout << "The matrix is: " << endl;
	for (int i = 0; i < 4;i++)
	{
		for (int j = 0; j < 4; i++)
		{
			matrix[i][j] = rand() * 100;
		}
	}

	cout << "Unsorted arrays: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << array1[i] << "\t";
	}

	for (int i = 0; i < size; i++)
	{
		cout << array2[i] << "\t";
	}

	for (int i = 0; i < 4;i++)
	{
		for (int j = 0; j < 4; i++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}

	bubble_sort(array1, size);
	bubble_sort(array2, size);
	//bubble_sort(matrix, 4);

	cout << "Sorted arrays: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << array1[i] << "\t";
	}

	for (int i = 0; i < size; i++)
	{
		cout << array2[i] << "\t" ;
	}

	return 0;
}