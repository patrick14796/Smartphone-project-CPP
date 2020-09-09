#pragma once
#include "SmartPhone.h"
class SamsungS1 :public SmartPhone
{
public:
	SamsungS1(int number = 0);
	string model();
	string about();
	string connectWifi();
	string connectBlueTooth();
	string format();
	void wirelessProperties();
	void picturesList();
	CSetLinkList takePicture();
	CSetLinkList removePicture(int remove);
private:
	VideoPlayer one;
	AudioPlayer two;
	Camera Three;
	BlueTooth type1;
	WiFi type2;
	CSetLinkList list;
};