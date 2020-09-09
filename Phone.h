#pragma once
#include "textMsg.h"
#include "VoiceCall.h"
#pragma once
class Phone :virtual public textMSG, virtual public VoiceCall
{
public:
	Phone();
	~Phone();

private:

};

