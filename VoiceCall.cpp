#include "VoiceCall.h"
/*TO DIAL SOMEONE*/
void VoiceCall::dial(int number, MobilePhone **arg)
{
	int count = 0;
	for (unsigned int i = 0; i < 5; ++i)
	{
		if (number == arg[i]->number() && PhoneNumber != number)
		{
			arg[i]->acceptCall(anwser);
		}
	}
}
/*ACCEPT OR NOT A VOICE CALL*/
bool VoiceCall::acceptCall(char c)
{
	msg1 = "TO ANWSER OR NOT y-YES";
	msg2 = "TO ANWSER OR NOT n-NO";
	cout << msg1 << endl;
	cout << msg2 << endl;
	cin >> anwser;
	if (anwser == 'Y' || anwser == 'y') {
		cout << "ANWSERED" << endl;
		return true;
	}
	else
	{
		cout << "REJECTED" << endl;
		return false;
	}
}