#pragma once
#include "Nokia9101.h"
#include "Nokia3310.h"
#include "SamsungS1.h"
#include "SamsungS9.h"
#include "SamsungSAdvance.h"
class CommunicationSimulator
{
public:
	void SumilatorRun();
	CommunicationSimulator();
	Nokia9101 one;
	Nokia3310 two;
	SamsungS1 three;
	SamsungS9 four;
	SamsungSAdvance five;
};


