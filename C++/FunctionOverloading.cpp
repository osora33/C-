#include "Çì´õ.h"

void myFunc() {
	std::cout << "MyFunc() called" << std::endl;
}

void myFunc(char c) {
	std::cout << "MyFunc(char c) called" << std::endl;
}

void myFunc(int a, int b) {
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

void FunctionOverloading() {
	myFunc();
	myFunc('A');
	myFunc(12, 13);
}