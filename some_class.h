#pragma once

#include "base_class.h"

class parent : virtual public base_class {
public:
	int a, b, c;

	parent() {
		std::cout << "parent\n";
	}
};
