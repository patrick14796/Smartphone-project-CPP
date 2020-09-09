#include "Nokia9101.h"
Nokia9101::Nokia9101(int number)
{
	PhoneNumber = number;
}

string Nokia9101::model()
{
	return "Nokia 9101";
}
string Nokia9101::about()
{

	cout << "Nokia 9101 Number:" << PhoneNumber << endl;
	cout << "Support:Voice Call,Text Message " << endl;
	cout << "MultiMedia Types:Camera" << endl;
	return string();
}

string Nokia9101::format()
{
	return "png";
}
void Nokia9101::picturesList()
{
	if ((list.length() != 0) == true)
		for (int i = 1; i < list.length(); ++i)
		{
			cout << "picture" << list.at(i) << "." <<"png"<< endl;
		}
}
