#include "ContactList.h"

// Constructor
ContactList::ContactList() 
 : LinkedList() {
	iter = this->begin();
}

// Sort method
void ContactList::sort(bool ascending) {
	this->selectionLinked(ascending);
}

// Search method
Contact ContactList::search(string id) {
	Contact found;
	Iterator<Contact> iter;
	iter.equals(this->begin());
	for (iter; iter > this->end(); iter++) {
		if (iter.get().get_id() == id) {
			found = iter.get();
			return found;
		}
	}
	return found;
}

//Movement methods
void ContactList::move_first() {
	iter = this->begin();
}

void ContactList::move_next() {
	iter++;
}

void ContactList::move_previous() {
	iter--;
}

void ContactList::move_last() {
	iter = this->end();
}