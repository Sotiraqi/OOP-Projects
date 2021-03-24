#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <iostream>
#include <string>

using namespace std;

class CDocument
{
protected:
	string person;
	string release_date;
	int valiability; //In months
public:
	CDocument();
	virtual void get_maritial_status();
	virtual void descentatnts_status();
	virtual void family_relation_status();

};

#endif // !DOCUMENT_H



