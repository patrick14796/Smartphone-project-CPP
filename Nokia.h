#include "textMsg.h"
#pragma once
class Nokia :public textMSG
{
public:
	Nokia();
	virtual ~Nokia() = 0;
	void sendMsg(int number, MobilePhone **arg);
};
