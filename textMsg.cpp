#include "textMsg.h"
void textMSG::sendMsg(int number, MobilePhone ** arg)
{
	string msg;
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
}
bool textMSG::acceptMsg(char c)
{
	//	cout << "TO ANWSER OR NOT y-YES" << endl;
	//	cout << "TO ANWSER OR NOT n-NO" << endl;
	cin >> anwser;
	if (anwser == 'Y') {
		//	cout << "ACCEPTED" << endl;
		return true;
	}
	else
	{
		//	cout << "REJECTED" << endl;
		return false;
	}
}