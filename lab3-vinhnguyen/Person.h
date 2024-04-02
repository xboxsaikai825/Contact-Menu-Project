#pragma once
#include <string>
#include "DateTime.h"

using namespace std;

class Person
{
public:
	
	/* Constructors
	* default constructor and constructor to declare attributes
	*/
	Person();

	Person(string, string, string, string, string, string, string, string, string, string, string, string);

	/* Get methods
	* methods to retrieve all attributes of Person
	*/
	string get_first_name();

	string get_middle_name();

	string get_last_name();

	string get_address();

	string get_city();

	string get_county();

	string get_state();

	string get_zip();

	string get_phone1();

	string get_phone2();

	string get_pronouns();

	string get_email();

	/* Set methods
	* methods to change all attributes of person
	*/
	void set_first_name(string);

	void set_middle_name(string);

	void set_last_name(string);

	void set_address(string);

	void set_city(string);

	void set_county(string);

	void set_state(string);

	void set_zip(string);

	void set_phone1(string);

	void set_phone2(string);

	void set_pronouns(string);

	void set_email(string);

	/* ToString method
	* method to print out all information of person
	*/
	void to_string();

private:
	string first_name;
	string middle_name;
	string last_name;
	string address;
	string city;
	string county;
	string state;
	string zip;
	string phone1;
	string phone2;
	string pronouns;
	string email;
};

