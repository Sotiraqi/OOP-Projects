#ifndef MATRIMONIAL_H
#define MATRIMONIAL_H

#include "document.h"

class CMatrimonial : public CDocument
{
protected:
	string m_surname;
	string f_surname;
public:
	CMatrimonial(string d_release_date, int d_valiabiality, string m_surname, string f_surname);
	void get_maritial_status() override;
	void descentatnts_status() override;
	void family_relation_status() override;
};


#endif
