#ifndef BOOKS_H
#define BOOKS_H

#include <iostream>
#include <string>

using namespace std;

class Book
{
	
public:
	friend class Categories;
	void AddBook();
	void PrintBooks();
		
private:
	string publisher;
	string ISBN;
	string title;
	string author;
	int year;
	int price;
	
};




#endif