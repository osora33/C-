#include "Çì´õ.h"
using namespace std;

void Referen() {
	int num1 = 1020;
	int& num2 = num1;

	num2 = 3047;
	cout << "VAL : " << num1 << endl;
	cout << "REF : " << num2 << endl;

	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &num2 << endl;
}