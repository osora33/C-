#include "Çì´õ.h"

int Adder(int num1 = 1, int num2 = 2) {
	return num1 + num2;
}

void DefaultValue1() {
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
}