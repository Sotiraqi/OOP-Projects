#include "matrimonial.h"

CMatrimonial::CMatrimonial(string d_release_date, int d_valiabiality, string m_surname, string f_surname)
{
	d_release_date = release_date;
	d_valiabiality = valiability;
	m_surname = this->m_surname;
	m_surname = this->f_surname;
}

void CMatrimonial::get_maritial_status()
{
	cout << "They are married!" << endl;
}

void CMatrimonial::descentatnts_status()
{
}

void CMatrimonial::family_relation_status()
{
	string exc = "The marriage cannot be done since persons come from the same family tree!";
	try
	{
		if (m_surname != f_surname)
		{
			cout << "Husband and wife come from 2 diferent families" << endl;
		}
		else
		{
			throw exc;
		}
	}
	catch (const std::exception& exc)
	{
		cerr << exc << endl;
	}
}


