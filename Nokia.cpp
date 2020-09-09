#include "Nokia.h"
Nokia::Nokia()
{
}
Nokia::~Nokia()
{
}
void Nokia::sendMsg(int number, MobilePhone ** arg)
{

	string msg;
	string msg1 = "Sent from my Nokia";
	int count = 0;
	for (unsigned int i = 0; i < 5; ++i)
	{
		if (number == arg[i]->number() && PhoneNumber != number)
		{
			cout << "Write Message" << endl;
			getline(cin, msg);
			arg[i]->acceptMsg(anwser);
		}
	}
	cout << msg1 << endl;
}