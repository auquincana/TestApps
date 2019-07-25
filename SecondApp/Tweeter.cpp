
#include "Tweeter.h"


Tweeter::Tweeter(std::string first, std::string last, int arbitrary, std::string handle):Person(first, last, arbitrary), twitterHandle(handle)
{
	std::cout << " constructing Tweeter " << std::endl;
}


Tweeter::~Tweeter(void)
{
	std::cout << " destructing Tweeter " << std::endl;
}

std::string Tweeter::getName() const
{
	return Person::getName() + " " + twitterHandle;
}
