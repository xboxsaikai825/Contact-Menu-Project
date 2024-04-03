#include "ContactMenu.h"
#include <fstream>
#include <sstream>
#include <iomanip>

string const FILENAME = "contacts_data.csv";
int const WIDTH = 15;

enum CONTACT_MENU_OPTION {
	CONTACT_LIST = '1',
	CONTACT_VIEW = '2',
	CONTACT_ADD = '3',
	CONTACT_EDIT = '4',
	CONTACT_DELETE = '5',
	CONTACT_EXIT = 'x'
};
ContactMenu::ContactMenu() {
	cout << "***** Contact Menu *****" << endl;
	this->add_option("List of contacts");
	this->add_option("View a contact");
	this->add_option("Add new contact");
	this->add_option("Edit contact");
	this->add_option("Delete contact");
	this->add_option("Exit");
	this->read_csv();
}

void ContactMenu::get_input() {
	char input = '0';
	while (input != CONTACT_EXIT) {
		this->display();
		cin >> input;

		if (input == CONTACT_LIST) { this->doList(); }

		if (input == CONTACT_VIEW) { this->doView(); }

		if (input == CONTACT_ADD) { this->doAdd(); }

		if (input == CONTACT_EDIT) { this->doEdit(); }

		if (input == CONTACT_DELETE) { this->doDelete(); }

		if (input == CONTACT_EXIT) { this->doExit(); }
	}
}

void ContactMenu::doList() {

	cout << setw(WIDTH) << left << "Id";
	cout << setw(WIDTH) << left << "First";
	cout << setw(WIDTH) << left << "Middle";
	cout << setw(WIDTH) << left << "Last";
	cout << setw(WIDTH) << left << "Role";
	cout << setw(WIDTH) << left << "Company";
	cout << setw(WIDTH) << left << "Address";
	cout << setw(WIDTH) << left << "City";
	cout << setw(WIDTH) << left << "County";
	cout << setw(WIDTH) << left << "State";
	cout << setw(WIDTH) << left << "Zip";
	cout << setw(WIDTH) << left << "Phone 1";
	cout << setw(WIDTH) << left << "Phone 2";
	cout << setw(WIDTH) << left << "Email" << endl;
	Iterator<Contact> iter = list.begin();
	iter.get().to_string();
	for (iter; iter < list.end(); ++iter) {
		Contact contact = iter.get();
		contact.to_string();
	}
	cout << endl;
}

void ContactMenu::doView() {}

void ContactMenu::doAdd() {
	string ro, com, fn, md, ln, ad, ci, co, st, zi, ph1, ph2, pro, em;
	DateTime ti;
	cout << "Enter the contact's role: "; cin >> ro;
	cin.ignore();
	cout << "Enter the contact's company: "; getline(cin, com);
	cout << "Enter the contact's first name: "; cin >> fn;
	cout << "Enter the contact's middle name: "; cin >> md;
	cout << "Enter the contact's last name: "; cin >> ln;
	cin.ignore();
	cout << "Enter the contact's address: "; getline(cin, ad);
	cout << "Enter the contact's city: "; getline(cin, ci);
	cout << "Enter the contact's county: "; getline(cin, co);
	cout << "Enter the contact's state: "; getline(cin, st);
	cout << "Enter the contact's zip code: "; cin >> zi;
	cout << "Enter the contact's primary phone number ###-###-####: "; cin >> ph1;
	cout << "Enter the contact's secondary phone number ###-###-####: "; cin >> ph2;
	cout << "Enter the contact's pronouns:"; cin >> pro;
	cout << "Enter the contact's email: "; cin >> em;

	DateTime empty;

	Contact new_contact("1000", fn, md, ln, ro, com, empty, ad, ci, co, st, zi, ph1, ph2, pro, em);
	list.push_back(new_contact);

}

void ContactMenu::doEdit() {}

void ContactMenu::doDelete() {}

void ContactMenu::doExit() {}

void ContactMenu::read_csv() {
	ifstream file(FILENAME);

	if (!file) { // outputs error if cannot open file
		cout << "Error opening file: " << FILENAME << endl;
		return;
	}

	// reads line by line from the csv file
	string line;
	getline(file, line);
	while (getline(file, line)) {

		// retrieves the respective info from the line
		string i, ro, com, fn, md, ln, ad, ci, co, st, zi, ph1, ph2, pro, em;
		istringstream ss(line);

		getline(ss, i, ',');
		getline(ss, fn, ',');
		getline(ss, md, ',');
		getline(ss, ln, ',');
		getline(ss, ro, ',');
		getline(ss, com, ',');
		getline(ss, ad, ',');
		getline(ss, ci, ',');
		getline(ss, co, ',');
		getline(ss, st, ',');
		getline(ss, zi, ',');
		getline(ss, ph1, ',');
		getline(ss, ph2, ',');
		getline(ss, em, ',');

		DateTime empty;
		Contact contact(i, fn, md, ln, ro, com, empty, ad, ci, co, st, zi, ph1, ph2, pro, em);
		list.push_back(contact);
	}
}