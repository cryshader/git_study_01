#pragma once

#include "some_class.h"
#include "parent_02.h"

class child : public parent, parent_02 {
public:
	child() {
		std::cout << "child()\n";
	}
};