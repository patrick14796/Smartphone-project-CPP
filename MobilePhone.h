#pragma once
#include<iostream>
#include<string>
#include "CSetLinkList.h"
using namespace std;
class MobilePhone
{
public:
	MobilePhone();//CTOR
	~MobilePhone();//DTOR
	virtual	string model();
	int number();
	virtual void dial(int number, MobilePhone **arg);
	virtual bool acceptCall(char c);
	virtual void sendMsg(int number, MobilePhone **arg);
	virtual bool acceptMsg(char c);
	virtual string about();
	int PhoneNumber;
	char anwser;
private:

};

