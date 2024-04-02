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
	this->display();
}