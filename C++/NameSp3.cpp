#include "헤더.h"

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
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();
	ProgComImpl3::SimpleFunc();
}

void BestComImpl3::PrettyFunc() {
	std::cout << "So Pretty!" << std::endl;
}

void ProgComImpl3::SimpleFunc() {
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}