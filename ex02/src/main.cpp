#include "Array.hpp"
#include <iostream>

int main() {
	Array<int> a(5);
	Array<int> b(a);
	
	for (int i = 0; i < 5; i++) {
		a[i] = i;
		std::cout << "a" << a[i] << std::endl;
		std::cout << "b" << b[i] << std::endl;
	}

	Array<int> c = a;
	for (int i = 0; i < 5; i++)
		std::cout << "c" << c[i] << std::endl;
}
