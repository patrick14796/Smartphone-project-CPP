#include "SamsungS1.h"

SamsungS1::SamsungS1(int number)
{
	PhoneNumber = number;
}

string SamsungS1::model()
{
	return "SamsungS1";
}

string SamsungS1::about()
{
	cout << "SamsungS1 Number:" << PhoneNumber << endl;
	cout << "Support:VoiceCall,TextMsg" << endl;
	cout << "MultiMedia Types:" << one.type() << "," << two.type() << "," << Three.type() << endl;
	cout << "WireLessProptocol:" << type1.protocol() << "," << type2.protocol() << endl;
	return string();
}


string SamsungS1::connectWifi()
{
	return type2.protocol();
}

string SamsungS1::connectBlueTooth()
{

	return	type1.protocol();

}
string SamsungS1::format()
{
	return one.format(), two.format(), Three.format();;
}
void SamsungS1::wirelessProperties()
{
	string t1 = type1.protocol();
	string t2 = type2.protocol();
	cout << t1 << " rate=3MBps" << endl;
	cout << t2 << " rate=16MBps" << endl;

}

CSetLinkList SamsungS1::takePicture()
{
	list.append(picNumber);
	++picNumber;
	return list;
}
CSetLinkList SamsungS1::removePicture(int remove)
{
	list.remove(remove);
	return list;
}

 void SamsungS1:: picturesList() {
	 if ((list.length() != 0) == true)
		 for (int i = 1; i < list.length(); ++i)
		 {
			 cout << "picture" << list.at(i) << "." << "jpg" << endl;
		 }
}