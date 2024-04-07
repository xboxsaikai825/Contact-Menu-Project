#include "ContactMenu.h"
#include <fstream>
#include <sstream>
#include <iomanip>

// constants

string const FILENAME = "contacts_data.csv";
int const WIDTH = 30;

// enum for menu selection

enum CONTACT_MENU_OPTION {
	CONTACT_LIST = '1',
	CONTACT_VIEW = '2',
	CONTACT_ADD = '3',
	CONTACT_EDIT = '4',
	CONTACT_DELETE = '5',
	CONTACT_EXIT = 'x'
};

// constructor

ContactMenu::ContactMenu() {
	cout << "***** Contact Menu *****" << endl;
	this->add_option("List of contacts");
	this->add_option("View a contact");
	this->add_option("Add new contact");
	this->add_option("Edit contact");
	this->add_option("Delete contact");
	this->add_option("Exit");
	this->read_csv();
	it = list.begin();
}

// user input selection

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

// doList() method

void ContactMenu::doList() {

	char option;
	cout << "View list ascending or descending order?(A/D): "; cin >> option;
	if (option == 'A')
		list.sort(true);
	else
		list.sort(false);

	cout << setw(WIDTH) << left << "Id";
	cout << setw(WIDTH) << left << "First";
	cout << setw(WIDTH) << left << "Last";
	cout << setw(WIDTH) << left << "Role";
	cout << setw(WIDTH) << left << "Company";
	cout << setw(WIDTH) << left << "Phone 1";
	cout << setw(WIDTH) << left << "Email";
	cout << endl;
	for (auto iter = list.begin(); iter != list.end(); ++iter) {
		Contact contact = iter.get();
		cout << setw(WIDTH) << left << contact.get_id();
		cout << setw(WIDTH) << left << contact.get_first_name();
		cout << setw(WIDTH) << left << contact.get_last_name();
		cout << setw(WIDTH) << left << contact.get_role();
		cout << setw(WIDTH) << left << contact.get_company();
		cout << setw(WIDTH) << left << contact.get_phone1();
		cout << setw(WIDTH) << left << contact.get_email();
		cout << endl;
	}
	cout << endl;
}

// doView() method

void ContactMenu::doView() {
	char option = ' ';
	list.sort(true);

	while (option != 'V') {
		cout << "***** CONTACT *****" << endl;
		cout << it.get().get_id() << " " << it.get().get_first_name() << " " << it.get().get_last_name() << endl << endl;
		cout << "A) for first contact S) for previous contact D) for next contact F) for last contact V) to view contact" << endl;
		cin >> option;
		if (option == 'A') { this->move_first(); }
		if (option == 'S') { this->move_previous(); }
		if (option == 'D') { this->move_next(); }
		if (option == 'F') { this->move_last(); }
	}
	cout << endl;
	it.get().to_string();
	cout << endl << endl;
}

// doAdd() method

void ContactMenu::doAdd() {
	it = list.begin();
	DateTime empty;
	int num_of_contacts = 1000;
	for (it; it != list.end(); ++it) {
		num_of_contacts++;
	}

	
	int ilast_id = num_of_contacts + 1;
	string ro, com, fn, md, ln, ad, ci, co, st, zi, ph1, ph2, pro, em;
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
	cout << "Enter the contact's email: "; cin >> em;

	Contact new_contact(to_string(ilast_id), fn, md, ln, ro, com, empty, ad, ci, co, st, zi, ph1, ph2, pro, em);
	list.push_back(new_contact);
}

// doEdit() method

void ContactMenu::doEdit() {
	it = list.begin();
	string user_id;
	DateTime empty;
	cout << "Enter the contact's id: "; cin >> user_id;
	int found_index = list.search(user_id); // finds the index of the contact in the linked list
	if (found_index == -1) {
		cout << "Contact with this id was not found." << endl;
	}
	else {
		string ro, com, fn, md, ln, ad, ci, co, st, zi, ph1, ph2, pro, em;
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
		cout << "Enter the contact's email: "; cin >> em;

		for (int i = 0; i < found_index; i++) { // moves iterator to the index of the contact
			it++;
		}
		string id = it.get().get_id();
		Contact contact(id, fn, md, ln, ro, com, empty, ad, ci, co, st, zi, ph1, ph2, pro, em);
		list.insert(it, contact);
		cout << "Contact changed. " << endl;
	}
}

// doDelete() method
void ContactMenu::doDelete() {
	it = list.begin();
	string user_id;
	cout << "Enter the contact's id: "; cin >> user_id;
	int found_index = list.search(user_id); // finds the index of the contact in the linked list
	if (found_index == -1) {
		cout << "Contact with this id was not found." << endl;
	}
	else {
		for (int i = 0; i < found_index; i++) { // moves iterator to the index of the contact
			++it;
		}
		list.erase(it);
		cout << "Contact erased." << endl;
	}
}

// doExit() method

void ContactMenu::doExit() { this->write_csv(); }

// read_csv() method

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

// write_csv() method

void ContactMenu::write_csv() {
	ofstream file(FILENAME);

	if (!file) { // outputs error if cannot open file
		cout << "Error opening file: " << FILENAME << endl;
		return;
	}
	file << "id,first_name,middle_name,last_name,role,company_name,address,city,county,state,zip,phone1,phone,email" << endl;
	for (auto iter = list.begin(); iter != list.end(); ++iter) {
		Contact contact = iter.get();
		file << contact.get_id() << ',';
		file << contact.get_first_name() << ',';
		file << contact.get_middle_name() << ',';
		file << contact.get_last_name() << ',';
		file << contact.get_role() << ',';
		file << contact.get_company() << ',';
		file << contact.get_address() << ',';
		file << contact.get_city() << ',';
		file << contact.get_county() << ',';
		file << contact.get_state() << ',';
		file << contact.get_zip() << ',';
		file << contact.get_phone1() << ',';
		file << contact.get_phone2() << ',';
		file << contact.get_email();
		file << endl;
	}
}

//Movement methods
void ContactMenu::move_first() {
	it = list.begin();
}

void ContactMenu::move_next() {
	++it;
}

void ContactMenu::move_previous() {
	--it;
}

void ContactMenu::move_last() {
	it = list.end();
}