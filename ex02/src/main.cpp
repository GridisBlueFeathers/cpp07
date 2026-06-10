#include "Array.hpp"
#include <iostream>

int main() {
	Array<int> lol;
	Array<int> a(5);
	Array<int> b(a);
	
	std::cout << "lol size: " << lol.size() << std::endl;
	try {
		lol[0];
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "a size: " << a.size() << std::endl;
	for (int i = 0; i < 5; i++) {
		a[i] = i;
		std::cout << "a" << a[i] << std::endl;
		std::cout << "b" << b[i] << std::endl;
	}

	std::cout << "c size: " << a.size() << std::endl;
	Array<int> c = a;
	for (int i = 0; i < 5; i++)
		std::cout << "c" << c[i] << std::endl;

	const Array<int> d(5);
	std::cout << d[0] << std::endl;
}
