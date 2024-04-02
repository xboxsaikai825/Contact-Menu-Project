#include "ContactList.h"

ContactList::ContactList() 
: LinkedList() {
}

void ContactList::sort(bool ascending) {
	this->selectionLinked(ascending);
}

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