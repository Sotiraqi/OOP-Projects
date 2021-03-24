#include "matrimonial.h"
#include "birthcertificate.h"
#include "divorce.h"

int main()
{
	CDocument* documents[] =
	{
		new CBirthCertificate("SaraciSotiraq", "2/2/2021", 3, "Saraci"),
		new CDivorce("IonAlin", "2/6/2020", 3, "Divorced"),
		new CMatrimonial("3/4/2019", 3, "Saraci", "Saraci")
	};

	for (int i = 0; i < 3; i++)
	{
		documents[i]->descentatnts_status();
		documents[i]->family_relation_status();
		documents[i]->get_maritial_status();
	}

	delete[] documents;
	return 0;
}