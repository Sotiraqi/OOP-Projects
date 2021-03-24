#ifndef BIRTHCERTIFICATE_H
#define BIRTHCERTIFICATE_H

#include "document.h"
class CBirthCertificate : public CDocument
{
protected:
	string desc_surname;
public:
	CBirthCertificate(string d_person, string d_release_date, int d_valiabiality, string d_surname);
	void get_maritial_status() override;
	void descentatnts_status() override;
	void family_relation_status() override;
};

#endif