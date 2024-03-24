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

	/* Get methods
	* methods to retrieve Contact attributes
	*/
	string get_id();

	string get_role();

	string get_company();

	/* Set methods
	* methods to change Contact attributes
	*/
	void set_id(string);

	void set_role(string);

	void set_company(string);
private:
	string id;
	string role;
	string company;
};

