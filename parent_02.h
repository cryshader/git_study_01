#pragma once

#include "base_class.h"

class parent_02 : virtual public base_class {
public:
	parent_02() {
		std::cout << "parent_02\n";
	}
};