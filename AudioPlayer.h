#include "Multimedia.h"
#pragma once
class AudioPlayer :virtual public Multimedia
{
public:
	AudioPlayer();
	~AudioPlayer();
	string type();
	virtual string format();
	CSetLinkList addSong();
	bool play(int number);
	CSetLinkList RemoveSong(int number);
	bool stop();
private:
	CSetLinkList list;
	string msg;
};
