#include <iostream>
#include "iter.hpp"

void	printInt(int &val) {
	std::cout << val << std::endl;
}

void	doubleInt(int &val) {
	val *= 2;
}

void	printStr(std::string &val) {
	std::cout << val << std::endl;
}

int main() {
	int intArr[] = { 1, 2, 3, 4, 5 };
	std::string stringArr[] = { "Hello", "There", "General", "Kenobi"};

	iter(intArr, 5, printInt);
	iter(intArr, 5, doubleInt);
	iter(intArr, 5, printInt);
	iter(stringArr, 4, printStr);
}
