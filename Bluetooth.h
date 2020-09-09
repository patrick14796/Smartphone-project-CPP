#pragma once
#include "WireLess.h"

using namespace std;
class BlueTooth :public WireLess
{
public:
	string protocol();
	string scan();
};
