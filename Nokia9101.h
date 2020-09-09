#include "Camera.h"
#include "Nokia.h"
#pragma once
class Nokia9101 :public Nokia, virtual public Camera
{
public:
	Nokia9101(int number = 0);

	string model();
	string about();
	string format();
	void picturesList();
};
