#pragma once
#include <string>
class Resource
{
private:
	std::string name;
public:
	// Constructors
	Resource(std::string n);
	Resource(void);
	~Resource(void);

	// Methods
	std:: string GetName() const{return name;}
};

