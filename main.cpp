#include <iostream>
#include "child.h"

int main() {
	child p;
	p.a = 50;

	std::cout << "\nHello! " << p.a << "\n";
	std::cout << "It's me again :)\n";

	getchar();
	return 0;
}