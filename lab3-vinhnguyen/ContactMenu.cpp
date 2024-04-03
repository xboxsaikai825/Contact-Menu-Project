#include "ContactMenu.h"

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
	Contact t1;
	this->list.push_back(t1);
	Iterator<Contact> iter = this->list.begin();
	for (iter; !iter.equals(list.end()); iter++) {
		Contact found = iter.get();
		found.to_string();
	}
}

void ContactMenu::doView() {}

void ContactMenu::doAdd() {}

void ContactMenu::doEdit() {}

void ContactMenu::doDelete() {}

void ContactMenu::doExit() {}