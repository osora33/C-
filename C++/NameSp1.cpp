#include "헤더.h"

namespace BestComImpl {
	void simpleFunc() {
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImpl {
	void SimpleFunc() {
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

void NameSp1() {
	BestComImpl::simpleFunc();
	ProgComImpl::SimpleFunc();
}