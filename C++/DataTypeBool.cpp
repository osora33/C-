#include "Çì´õ.h"
using namespace std;

bool IsPositive(int num) {
	if (num <= 0) {
		return false;
	}
	else {
		return true;
	}
}

void DataTypeBool() {
	bool isPos;
	int num;
	cout << "Input number : ";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos) {
		cout << "Positive number" << endl;
	}
	else {
		cout << "Negative number" << endl;
	}
}