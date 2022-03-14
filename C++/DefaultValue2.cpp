#include "Çì´õ.h"

int Adder2(int num1 = 1, int num2 = 2);

void DefaultValue2() {
	std::cout << Adder2() << std::endl;
	std::cout << Adder2(5) << std::endl;
	std::cout << Adder2(3, 5) << std::endl;
}

int Adder2(int num1, int num2) {
	return num1 + num2;
}