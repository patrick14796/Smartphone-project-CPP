#include "SamsungS9.h"

SamsungS9::SamsungS9(int number)
{
	PhoneNumber = number;
}

string SamsungS9::model()
{
	return "SamsungS9";
}

string SamsungS9::about()
{
	cout << "SamsungS9 Number:" << PhoneNumber << endl;
	cout << "Support:VoiceCall,TextMsg" << endl;
	cout << "MultiMedia Types:" << one.type() << "," << two.type() << "," << Three.type() << endl;
	cout << "WireLessProptocol:" << type1.protocol() << "," << type2.protocol() << endl;
	return string();
}

string SamsungS9::connectWifi()
{


	return type2.protocol();
}

string SamsungS9::connectBlueTooth()
{

	return type1.protocol();

}

void SamsungS9::wirelessProperties()
{
	string t1 = type1.protocol();
	string t2 = type2.protocol();
	cout << t1 << " rate=5 MBps" << endl;
	cout << t2 << " rate=56 MBps" << endl;

}
CSetLinkList SamsungS9::takePicture()
{
	list.append(picNumber);
	++picNumber;
	return list;
}

CSetLinkList SamsungS9::removePicture(int remove)
{
	list.remove(remove);
	return list;
}

void SamsungS9::picturesList() {
	if ((list.length() != 0) == true)
		for (int i = 1; i < list.length(); ++i)
		{
			cout << "picture" << list.at(i) << "." << "jpg" << endl;
		}
}