#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class CNetwork
{
protected:
	string username;
	string password;

public:
	virtual bool read_credentials();
};



