#include "Multimedia.h"
#pragma once
class Camera :public Multimedia
{
public:
	Camera();
	~Camera();
	string type();
	virtual CSetLinkList takePicture();
	virtual CSetLinkList removePicture(int remove);
	virtual string format();
	virtual void picturesList();
	int picNumber = 1;
	CSetLinkList list;
private:
};

