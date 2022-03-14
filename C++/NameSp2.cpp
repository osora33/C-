#include "헤더.h"

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
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl2::simpleFunc() {
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}