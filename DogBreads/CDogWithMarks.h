#pragma once
#include "CDog.h"

class CDogWithMarks : public CDog
{
	int mark_number;
public:
	void read() override;
	void print() override;

};

