#include <iostream>
#include "some_class.h"

int main() {
	parent p;
	p.a = 50;

	std::cout << "Hello! " << p.a << "\n";
	std::cout << "It's me again :)\n";
	return 0;
}