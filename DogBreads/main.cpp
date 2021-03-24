#include "CDogWithMarks.h"
#include "CDogWithoutMarks.h"

int main()
{
	CDog* dogs[] = { new CDogWithMarks(),  new CDogWithMarks(),  new CDogWithMarks(),
					new CDogWithoutMarks(), new CDogWithoutMarks(), new CDogWithoutMarks(), new CDogWithoutMarks() };
	
	cout << sizeof(dogs)/sizeof(int) << endl;
	for (int i = 0; i < sizeof(dogs)/sizeof(int); i++)
	{
		dogs[i]->read();
	}

	for (int i = 0; i < sizeof(dogs)/sizeof(int); i++)
	{
		dogs[i]->print();
	}

	delete[] dogs;

	return 0;
}

