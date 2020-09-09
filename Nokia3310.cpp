#include "Nokia3310.h"

Nokia3310::Nokia3310(int number)
{
	PhoneNumber = number;
}

string Nokia3310::model()
{
	return "Nokia3310";
}

void Nokia3310::sendMsg(int number, MobilePhone ** arg)
{
	cout << "ERROR 55" << endl;
}

bool Nokia3310::acceptMsg(char c)
{
	cout << "ERROR 55" << endl;
	return false;
}

string Nokia3310::about()
{
	cout << "Nokia3101 Number:" << PhoneNumber << endl;
	cout << "Support:VoiceCall" << endl;
	cout << "MultiMedia Types:AudioPlayer" << endl;
	return string();
}

string Nokia3310::format()
{
	return "wav";
}
