#include "divorce.h"

CDivorce::CDivorce(string d_person, string d_release_date, int d_valiabiality, string d_status)
{
	d_person = person;
	d_release_date = release_date;
	d_valiabiality = valiability;
	d_status = status;
}

void CDivorce::get_maritial_status()
{
	cout << "Current relationship status is: " << status << endl;
}

void CDivorce::descentatnts_status()
{
}

void CDivorce::family_relation_status()
{
}



