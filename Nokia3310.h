#include "AudioPlayer.h"
#include "Nokia.h"
#pragma once
class Nokia3310 :virtual public Nokia, public AudioPlayer
{
public:
	Nokia3310(int number = 0);
	string model();
	bool acceptMsg(char c);
	void sendMsg(int number, MobilePhone **arg);
	string about();
	string format();

private:

};