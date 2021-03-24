#pragma once
#include <iostream>
#include <vector>
#include "CClient.h"

#define TAB "\t"

class CPhonebook
{
	friend class CClient;
	
public:
	CClient client;
	void read();
	void print();
};

bool comparator(const CPhonebook& lhs, const CPhonebook& rhs);
void search(vector <CPhonebook> vec, string name_to_search, int number);

