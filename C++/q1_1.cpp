#include "헤더.h"

void q1_1() {
	int input[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		std::cout << i << "번째 정수 입력 : ";
		std::cin >> input[i];
		sum += input[i];
	}
	std::cout << "합계 : " << sum;
}