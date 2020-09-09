#include "AudioPlayer.h"
#include "VideoPlayer.h"
#include "Camera.h"
#pragma once
class Samsung :virtual public AudioPlayer, public VideoPlayer, virtual public Camera
{
public:
	string format();
	void helloMovie();
	//friend ostream& operator<<(ostream& out, const Samsung& other);
private:
	VideoPlayer SamsungMovie;
};
