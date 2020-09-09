#include "Camera.h"
Camera::Camera()
{
	CSetLinkList();
	picNumber = 0;
}
Camera::~Camera()
{
}
string Camera::type()
{
	return "Camera";
}
CSetLinkList Camera::takePicture()
{
	list.append(picNumber);
	++picNumber;
	return list;
}
CSetLinkList Camera::removePicture(int remove)
{
	list.remove(remove);
	return list;
}
string Camera::format()
{
	return "i.e. jpg,png,gif,etc";
}
void Camera::picturesList()
{
	if ((list.length() != 0)== true)
		for (int i = 1; i < list.length(); ++i)
		{
			cout << "picture"<<list.at(i) <<"."<< endl;
		}
}