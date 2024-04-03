#include "Person.h"
#include <iomanip>

int const WIDTH = 15;

// constructors

Person::Person() {
	first_name = "";
	middle_name = "";
	last_name = "";
	DateTime empty;
	birthdate = empty;
	address = "";
	city = "";
	county = "";
	state = "";
	zip = "";
	phone1 = "";
	phone2 = "";
	pronouns = "";
	email = "";
}

Person::Person(string fn, string md, string ln, DateTime ti, string ad, string ci, string co, string st, string zi, string ph1, string ph2, string pro, string em) {
	first_name = fn;
	middle_name = md;
	last_name = ln;
	birthdate = ti;
	address = ad;
	city = ci;
	county = co;
	state = st;
	zip = zi;
	phone1 = ph1;
	phone2 = ph2;
	pronouns = pro;
	email = em;
}

// get methods

string Person::get_first_name() { return first_name; }

string Person::get_middle_name() { return middle_name; }

string Person::get_last_name() { return last_name; }

DateTime Person::get_birthdate() { return birthdate; }

string Person::get_address() { return address; }

string Person::get_city() { return city; }

string Person::get_county() { return county; }

string Person::get_state() { return state; }

string Person::get_zip() { return zip; }

string Person::get_phone1() { return phone1; }

string Person::get_phone2() { return phone2; }

string Person::get_pronouns() { return pronouns; }

string Person::get_email() { return email; }

// set methods

void Person::set_first_name(string fn) { first_name = fn; }

void Person::set_middle_name(string mn) { middle_name = mn; }

void Person::set_last_name(string ln) { last_name = ln; }

void Person::set_birthdate(DateTime date) { birthdate = date; }

void Person::set_address(string ad) { address = ad; }

void Person::set_city(string ci) { city = ci; }

void Person::set_county(string co) { county = co; }

void Person::set_state(string st) { state = st; }

void Person::set_zip(string zi) { zip = zi; }

void Person::set_phone1(string ph1) { phone1 = ph1; }

void Person::set_phone2(string ph2) { phone2 = ph2; }

void Person::set_pronouns(string pro) { pronouns = pro; }

void Person::set_email(string em) { email = em; }

// to string method

void Person::to_string() {
	cout << setw(WIDTH) << left << first_name;
	cout << setw(WIDTH) << left << middle_name;
	cout << setw(WIDTH) << left << last_name;
	cout << setw(WIDTH) << left << address;
	cout << setw(WIDTH) << left << city;
	cout << setw(WIDTH) << left << county;
	cout << setw(WIDTH) << left << state;
	cout << setw(WIDTH) << left << zip;
	cout << setw(WIDTH) << left << phone1;
	cout << setw(WIDTH) << left << phone2;
	cout << setw(WIDTH) << left << pronouns;
	cout << setw(WIDTH) << left << email;
}

