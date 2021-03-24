#include "birthcertificate.h"

CBirthCertificate::CBirthCertificate(string d_person, string d_release_date, int d_valiabiality, string d_surname)
{
	d_person = person;
	d_release_date = release_date;
	d_valiabiality = valiability;
	d_surname = desc_surname;
}

void CBirthCertificate::get_maritial_status()
{

}

void CBirthCertificate::descentatnts_status()
{
	cout << person << " is a descendant of the " << desc_surname << " family!" << endl;
}

void CBirthCertificate::family_relation_status()
{
	cout << person << " is the son of the " << desc_surname << " family!" << endl;
}
