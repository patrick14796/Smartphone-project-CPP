#pragma once
#include <iostream>
#include <string>
using namespace std;
class WireLess
{
public:

	virtual string protocol() = 0;
	virtual string scan() = 0;
	virtual string connected();
	virtual void wirelessProperties();

};
