#include "Phone.h"
#pragma once
class Multimedia :public Phone
{
public:
	Multimedia();
	~Multimedia();
	virtual string type() = 0;
	virtual string format() = 0;
};

