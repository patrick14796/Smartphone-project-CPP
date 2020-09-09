#include "MobilePhone.h"
#pragma once
class VoiceCall :virtual public MobilePhone
{
public:
	void dial(int number, MobilePhone **arg);
	bool acceptCall(char anwser);
private:
	string msg1, msg2;
};