#include "���.h"

namespace BestComImpl3 {
	void SimpleFunc();
}

namespace BestComImpl3 {
	void PrettyFunc();
}

namespace ProgComImpl3 {
	void SimpleFunc();
}

void NameSp3() {
	BestComImpl3::SimpleFunc();
}

void BestComImpl3::SimpleFunc() {
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();
	ProgComImpl3::SimpleFunc();
}

void BestComImpl3::PrettyFunc() {
	std::cout << "So Pretty!" << std::endl;
}

void ProgComImpl3::SimpleFunc() {
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}