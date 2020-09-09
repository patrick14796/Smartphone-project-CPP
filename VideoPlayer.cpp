#include "VideoPlayer.h"

string VideoPlayer::type()
{
	return "VideoPlayer";
}

string VideoPlayer::format()
{
	audio.format();
	return "VideoPlayer";
}

bool VideoPlayer::playVideo(int number)
{

	if (list.contains(number) == true)
		return true;
	else
		return false;

}

CSetLinkList VideoPlayer::addVideo()
{
	list.append(video);
	++video;
	return list;
}

CSetLinkList VideoPlayer::removeVideo(int number)
{

	list.remove(number);
	return list;

}

string VideoPlayer::playSamsung()
{
	string SamsungMsg = "HELLO SAMSUNG";
	return SamsungMsg;
}

bool VideoPlayer::stopVideo()
{
	return true;
}
