#pragma once
#include "MobilePhone.h"
class textMSG :virtual public MobilePhone
{
public:
	virtual	void sendMsg(int number, MobilePhone **arg);
	virtual bool acceptMsg(char c);

};
