#pragma once
#include <string>
#include <iostream>

class Person
{
private:

	std::string firstName;
	std::string lastName;
	int arbitraryNumber;

public:

	std::string getName() const;
	
	Person(std::string first, std::string last, int arbitrary);
	Person() = default; // Default constructor means that constructors doesn't take any parameters. El compilador genera por defecto el constructor por mi.
    ~Person(void);


	int GetNumber() const { return arbitraryNumber;}
	void SetNumber(int number) {arbitraryNumber = number;}
	void SetFirstName(std::string name) {firstName = name;}
};


/*
	//Person(const Person& p); 
	//bool operator<(Person& p);
	//bool operator<(int i);
	//Person& operator=(const Person& p);
	//friend bool operator<(int i, Person& p);
	//void addResource();
	//std::string GetResourceName() const {return pResource->GetName();}
	
bool operator<(int i, Person& p);
*/