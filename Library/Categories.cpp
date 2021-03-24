#include "Categories.h"

void Categories::read()
{
	string copy;
	bool checker = false;
	cout << "Number of books: ";
	cin >> number;

	book = new Book[number];

	for (int i = 0; i < number; i++)
	{
		book[i].AddBook();
	}
	int position = -1;

	for (int i = 0; i < number; i++)
	{
		for (int j = 1; j < number; j++)
		{
			if (book[j].ISBN == book[i].ISBN)
			{
				checker = true;
				position = j;
			}
		}
	}

	if (checker)
	{
		cout << "Two books cant have the same ISBN!" << endl;
		cout << "Please re-add your book!" << endl;
		
		book[position].AddBook();
		
	}

}

void Categories::print()
{
	for (int i = 0; i < number; i++)
	{
		book[i].PrintBooks();
	}
}

void Categories::search_by_title()
{
	string name;
	bool checker = false;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Enter book's title: " << endl;
	getline(cin, name);

	int i = 0;

	while (i != number)
	{
		if (book[i].title == name)
		{
			book[i].PrintBooks();
			checker = true;
		}
		i++;
	}

	if (checker)
	{
		cout << "1 result found!" << endl;
	}
	else
	{
		cout << "No results were found!" << endl;
	}

	delete[number]book;
}

void Categories::search_by_author()
{
	string auth;
	bool checker = false;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Enter author's name: " << endl;
	getline(cin, auth);

	int i = 0;

	while (i != number)
	{
		if (book[i].author == auth)
		{
			book[i].PrintBooks();			
			checker = true;
		}
		i++;
	}

	if (checker)
	{
		cout << "1 result found!" << endl;
	}
	else
	{
		cout << "No results were found!" << endl;
	}

	delete[number]book;
}

void Categories::search_by_isbn()
{
	string isbn;
	bool checker = false;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Enter the ISBN number: ";
	getline(cin, isbn);

	int i = 0;
	
	while (i != number)
	{
		if (book[i].ISBN == isbn)
		{
			book[i].PrintBooks();
			checker = true;
		}
		i++;
	}

	if (checker)
	{
		cout << "1 result found!" << endl;
	}
	else
	{
		cout << "No results were found!" << endl;
	}

	delete[number]book;
}


