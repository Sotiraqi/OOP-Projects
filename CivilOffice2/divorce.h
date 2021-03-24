#ifndef DIVORCE_H
#define DIVORCE_H

#include "document.h"

class CDivorce : public CDocument
{
protected:
	string status;
public:
	CDivorce(string d_person, string d_release_date, int d_valiabiality, string d_status);
	void get_maritial_status() override;
	void descentatnts_status() override;
	void family_relation_status() override;

};

#endif 