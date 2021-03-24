#include "Book.h"
#include "Categories.h"

int main()
{
	Categories history;
	

	history.read();
	history.print();
	history.search_by_isbn();
	
	return 0;
}