// SecondApp.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "Person.h" // No tratar de recordar que hay header's que se contienen unos con otros. En ves de eso, usar pragma one en todos los encabezados.
#include "Tweeter.h"
#include "enum.h"

int main()
{
	Person p1("solange", "becerra", 159767434);
	{
		Person p2("fabian", "mancilla", 15840961);
		Person p3;
	}

	std::string name = p1.getName();

	Status s = Pending;
	s = Approved;

	FileError fe = FileError::notFound;
	fe = FileError::ok;

	NetworkError ne = NetworkError::disconected;
	ne = NetworkError::ok;

    return 0;
}

/*
std::cout << "Type your name" << std::endl;
std::string name;
std::cin >> name;
std::cout << "Hello, " << name << std::endl;

*/