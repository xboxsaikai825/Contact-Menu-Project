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
	cout << "Id: " << id << endl;
	cout << "First name: " << first_name << endl;
	cout << "Middle Name: " << middle_name << endl;
	cout << "Last Name: " << last_name << endl;
	cout << "Role: " << role << endl;
	cout << "Company: " << company << endl;
	cout << "Address: " << address << endl;
	cout << "City: " << city << endl;
	cout << "County: " << county << endl;
	cout << "State: " << state << endl;
	cout << "Zip: " << zip << endl;
	cout << "Primary Phone: " << phone1 << endl;
	cout << "Secondary Phone: " << phone2 << endl;
	cout << pronouns;
	cout << "Email: " << email << endl;
}

// operator overloads

bool Contact::operator==(const Contact& other) { return this->id == other.id; }

bool Contact::operator>(const Contact& other) { return this->id > other.id; }

bool Contact::operator<(const Contact& other) { return this->id < other.id; }
