#pragma once
#include "WireLess.h"

class Satellite :public WireLess
{
public:
	string protocol();
	string scan();
};
