#include "Samsung.h"
#include "BlueTooth.h"
#include "Satellite.h"
#include "WiFi.h"
#pragma once
class SmartPhone :virtual public Samsung, virtual public BlueTooth, virtual public Satellite, virtual public WiFi
{
public:
	virtual string connectWifi() = 0;
	virtual string connectBlueTooth() = 0;
	virtual void wirelessProperties() = 0;
};
