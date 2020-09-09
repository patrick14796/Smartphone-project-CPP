#include "SamsungSAdvance.h"

SamsungSAdvance::SamsungSAdvance(int number)
{
	PhoneNumber = number;
}

string SamsungSAdvance::model()
{
	return "SamsungSAdvance";
}

string SamsungSAdvance::about()
{
	cout << "SamsungSAdvance Number:" << PhoneNumber << endl;
	cout << "Support:VoiceCall,TextMsg" << endl;
	cout << "MultiMedia Types:" << one.type() << "," << two.type() << "," << Three.type() << endl;
	cout << "WireLessProptocol:" << type1.protocol() << "," << type2.protocol() << "," << type3.protocol() << endl;
	return string();
}

string SamsungSAdvance::connectWifi()
{
	return type2.protocol();

}

string SamsungSAdvance::connectBlueTooth()
{

	return type1.protocol();

}

string SamsungSAdvance::connectSatellite()
{
	return type3.protocol();
}

void SamsungSAdvance::wirelessProperties()
{
	string t1 = type1.protocol();
	string t2 = type2.protocol();
	cout << t1 << " rate=5 MBps" << endl;
	cout << t2 << " rate=56 MBps" << endl;
}
CSetLinkList SamsungSAdvance::takePicture()
{
	list.append(picNumber);
	++picNumber;
	return list;
}

CSetLinkList SamsungSAdvance::removePicture(int remove)
{
	list.remove(remove);
	return list;
}

void SamsungSAdvance::picturesList() {
	if ((list.length() != 0) == true)
		for (int i = 1; i < list.length(); ++i)
		{
			cout << "picture" << list.at(i) << "." << "jpg" << endl;
		}
}
