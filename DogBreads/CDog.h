#pragma once

#include <iostream>
#include <string>

using namespace std;

#define MAX_DOGS 10
#define TAB "\t"

class CDog
{
protected:
	string name;
	string color;
	double weight;
	double height;
	int age;
public:
	virtual void read();
	virtual void print();
};



