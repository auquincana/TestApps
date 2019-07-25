#include "StdAfx.h"
#include "Resource.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Resource::Resource(std::string n):name(n)
{
	cout << " constructing " << name << endl;

}

Resource::Resource(void)
{

}


Resource::~Resource(void)
{
		cout << " destructing " << name << endl;
}
