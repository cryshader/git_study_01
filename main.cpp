#include <iostream>
#include "some_class.h"

int main() {
	parent p;
	p.a = 5;

	std::cout << "Hello! " << p.a << "\n";
	return 0;
}