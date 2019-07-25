#pragma once
#include "Person.h"
#include <string>

class Tweeter :
	public Person
{
private:
	std::string twitterHandle;
public:
	Tweeter(std::string first, std::string last, int arbitrary, std::string handle);
	~Tweeter(void);

	std::string getName() const;
};

