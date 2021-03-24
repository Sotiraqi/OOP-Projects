#pragma once
#include "Book.h"

class Categories
{
public:
	void read();
	void print();
	void search_by_title();
	void search_by_author();
	void search_by_isbn();
		
private:
	int number;
	Book* book;
	
};






