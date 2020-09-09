#pragma once
#include "SmartPhone.h"
class SamsungSAdvance :public SmartPhone
{
public:
	SamsungSAdvance(int number = 0);
	string model();
	string about();
	string connectWifi();
	string connectBlueTooth();
	string connectSatellite();
	void wirelessProperties();
	void picturesList();
	CSetLinkList takePicture();
	CSetLinkList removePicture(int remove);
private:
	VideoPlayer one;
	AudioPlayer two;
	Camera Three;
	BlueTooth type1;
	Satellite type3;
	WiFi type2;
	CSetLinkList list;
};