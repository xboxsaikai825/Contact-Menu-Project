/*
* Name: Vinh Nguyen
* Description: A contact app that holds the contacts of people
* Date: 3/25/2024
*/

#include <iostream>
#include "Contact.h"
#include "DateTime.h"
#include <fstream>
#include "ContactList.h"
#include "LinkedList.h"

int main() {
	//DateTime time(10, 1, 32, 32, 32, 32);
	//Contact test1("1001", "admin", "PG&E", "vinh", "thanh", "nguyen", time, "3245 santa", "union", "alameda", "california", "94587", "510737", "", "he/her", "xbox@gmail.com");
	LinkedList<int> t1;
	t1.push_back(3);
	t1.push_back(1);
	t1.push_back(8);
	t1.push_back(0);
	t1.push_back(-1);
	t1.printLinked();
	cout << endl;
	t1.selectionLinked(false);
	t1.printLinked();


	return 0;
}