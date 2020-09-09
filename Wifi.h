#pragma once
#include "WireLess.h"
class WiFi :virtual public WireLess
{
public:
	string  protocol();
	string scan();
};
