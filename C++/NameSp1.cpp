#include "���.h"

namespace BestComImpl {
	void simpleFunc() {
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}

namespace ProgComImpl {
	void SimpleFunc() {
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
	}
}

void NameSp1() {
	BestComImpl::simpleFunc();
	ProgComImpl::SimpleFunc();
}