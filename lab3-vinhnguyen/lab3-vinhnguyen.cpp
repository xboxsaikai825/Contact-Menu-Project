#include <iostream>
#include "Person.h"
#include "DateTime.h"

int main() {
	DateTime time(10, 1, 32, 32, 32, 32);
	Person test1("vinh", "thanh", "nguyen", time, "3245 santa", "union", "alameda", "california", "94587", "510737", "", "he/her", "xbox@gmail.com");
	cout << test1;
	return 0;
}