#pragma once
#include "SmartPhone.h"
class SamsungS9 :public SmartPhone
{
public:
	SamsungS9(int number = 0);
	string model();
	string about();
	string connectWifi();
	string connectBlueTooth();
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
