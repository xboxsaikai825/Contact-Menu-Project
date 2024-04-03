#include "Contact.h"
#include <iomanip>

int const WIDTH = 15;

// constructors

Contact::Contact()
	:Person() {
	id = "0";
	role = "";
	company = "";
}

Contact::Contact(string i, string fn, string md, string ln, string ro, string com, DateTime ti, string ad, string ci, string co, string st, string zi, string ph1, string ph2, string pro, string em)
	:Person(fn, md, ln, ti, ad, ci, co, st, zi, ph1, ph2, pro, em) {
	id = i;
	role = ro;
	company = com;
}

// get methods

string Contact::get_id() { return id; }

string Contact::get_role() { return role; }

string Contact::get_company() { return company; }

// set methods

void Contact::set_id(string i) { id = i; }

void Contact::set_role(string ro) { role = ro; }

void Contact::set_company(string comp) { company = comp; }

// to string method

void Contact::to_string() {
	cout << setw(WIDTH) << left << id;
	cout << setw(WIDTH) << left << first_name;
	cout << setw(WIDTH) << left << middle_name;
	cout << setw(WIDTH) << left << last_name;
	cout << setw(WIDTH) << left << role;
	cout << setw(WIDTH) << left << company;
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

// operator overloads

bool Contact::operator==(const Contact& other) { return this->id == other.id; }

bool Contact::operator>(const Contact& other) { return this->id > other.id; }

bool Contact::operator<(const Contact& other) { return this->id < other.id; }
