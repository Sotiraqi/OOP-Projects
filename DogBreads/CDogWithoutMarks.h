#pragma once
#include "CDog.h"

class CDogWithoutMarks : public CDog
{
public:
	void read() override;
	void print() override;

};