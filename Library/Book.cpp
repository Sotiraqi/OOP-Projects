#include "Book.h"
#include "Categories.h"

void Book::AddBook()
{
	cout << "Add book:" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Title : ";
	getline(cin, title);
	cout << "Author: ";
	getline(cin, author);
	cout << "Publisher: ";
	getline(cin, publisher);
	cout << "ISBN: ";
	getline(cin, ISBN);
	cout << "Year: ";
	cin >> year;
	cout << "Price: ";
	cin >> price;
}

void Book::PrintBooks()
{
	cout << title << "\t" << author << "\t" << publisher << "\t" << ISBN << "\t" << year << "\t" << price << endl;
}



