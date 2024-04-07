#include "ContactList.h"

// constructor
ContactList::ContactList() 
 : LinkedList() {
}

// sort method
void ContactList::sort(bool ascending) {
	this->selectionLinked(ascending);
}

// search method
int ContactList::search(string id) {
	int position = 0;
	Contact found;
	for (auto iter = this->begin(); iter != this->end(); ++iter) {
		position++;
		if (iter.get().get_id() == id) {
			position--;
			return position;
		}
	}
	return -1;
}