#include "���.h"

namespace BestComImpl2 {
	void simpleFunc();
}

namespace ProgComImpl2 {
	void simpleFunc();
}

void NameSp2() {
	BestComImpl2::simpleFunc();
	ProgComImpl2::simpleFunc();
}

void BestComImpl2::simpleFunc() {
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
}

void ProgComImpl2::simpleFunc() {
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}