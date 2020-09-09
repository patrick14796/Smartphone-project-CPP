#include "AudioPlayer.h"

AudioPlayer::AudioPlayer()
{
	CSetLinkList();
}
AudioPlayer::~AudioPlayer()
{

}

string AudioPlayer::type()
{
	return "AudioPlayer";
}
string AudioPlayer::format()
{
	return "(i.e. mp3, wav, acc, etc.)";
}
CSetLinkList AudioPlayer::addSong()
{
	int data = 1;
	++data;
	list.append(data);
	return list;
}
bool AudioPlayer::play(int number)
{
	if (list.contains(number) == true)
		return true;
	else
		return false;
}
bool AudioPlayer::stop()
{
	return true;
}
CSetLinkList AudioPlayer::RemoveSong(int number)
{

	list.remove(number);

	return list;
}