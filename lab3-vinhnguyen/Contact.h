#pragma once
#include "Person.h"
class Contact : public Person
{
public:
	/* Constructors
	* constructor to initialize contact and person attributes
	*/
	Contact();

	Contact(string, string, string, string, string, string, DateTime, string, string, string, string, string, string, string, string, string);
private:
	string id;
	string role;
	string company;
};

