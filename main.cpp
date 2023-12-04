// main.cpp
#include <iostream>
#include "math_operations.hpp"

int main(){
	std::cout << "Add 5 + 6 = " << add(5,6) << std::endl;
	std::cout << "Add 50 + 46 = " << add(50,46) << std::endl;
	std::cout << "Add 8 + 136 = " << add(8,136) << std::endl;
	return 0;
}

int add(int a, int b) {
    return a + b;
}
