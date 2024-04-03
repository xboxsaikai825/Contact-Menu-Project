#include "Contact.h"

// constructors

Contact::Contact()
	:Person() {
	id = "69420";
	role = "";
	company = "";
}

Contact::Contact(string i, string ro, string com, string fn, string md, string ln, DateTime ti, string ad, string ci, string co, string st, string zi, string ph1, string ph2, string pro, string em)
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
	cout << id << endl;
	cout << role << endl;
	cout << company << endl;
	Person::to_string();
}

// operator overloads

bool Contact::operator==(const Contact& other) { return this->id == other.id; }

bool Contact::operator>(const Contact& other) { return this->id > other.id; }

bool Contact::operator<(const Contact& other) { return this->id < other.id; }
