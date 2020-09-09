#include "Multimedia.h"
#include "AudioPlayer.h"
#pragma once
class VideoPlayer :virtual public Multimedia, virtual public AudioPlayer
{
public:
	string type();
	string format();
	bool playVideo(int number);
	CSetLinkList addVideo();
	CSetLinkList removeVideo(int number);
	string playSamsung();
	bool stopVideo();
private:
	int video = 1;
	AudioPlayer audio;
	CSetLinkList list;
};
