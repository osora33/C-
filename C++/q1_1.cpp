#include "���.h"

void q1_1() {
	int input[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		std::cout << i << "��° ���� �Է� : ";
		std::cin >> input[i];
		sum += input[i];
	}
	std::cout << "�հ� : " << sum;
}