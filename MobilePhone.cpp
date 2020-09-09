#include "MobilePhone.h"
/*DEFAULT CONSTRUCTOR*/
MobilePhone::MobilePhone()
{
	this->anwser = '\0';
	this->PhoneNumber = 0;
}
/*DESTRUCTOR*/
MobilePhone::~MobilePhone()
{
}
string MobilePhone::model()
{
	return string();
}
/*PHONE NUMBER*/
int MobilePhone::number()
{
	return PhoneNumber;
}

void MobilePhone::dial(int number, MobilePhone **arg)
{
	int count = 0;
	int p = 1;
	while (p != '\0') {
		p = (int)arg[count];
		++count;
	}
	for (unsigned int i = 0; i<count - 17; ++i)
	{
		if (number == arg[i]->number() && PhoneNumber != number)
		{
			arg[i]->acceptCall(anwser);
		}
	}
}

bool MobilePhone::acceptCall(char c)
{

	cin >> anwser;
	if (anwser == 'y')
		return true;
	else
		return false;
}

void MobilePhone::sendMsg(int number, MobilePhone **arg)
{
	string msg;
	int count = 0;
	int p = 1;
	while (p != '\0') {
		p = (int)arg[count];
		++count;
	}
	for (unsigned int i = 0; i < count - 17; ++i)
	{
		if (number == arg[i]->number() && PhoneNumber != number)
		{
			getline(cin, msg);
			arg[i]->acceptMsg(anwser);
		}
	}
}

bool MobilePhone::acceptMsg(char c)
{

	cin >> anwser;
	if (anwser == 'y')
		return true;
	else
		return false;
}

string MobilePhone::about()
{
	return "NO INFORMATION";
}
