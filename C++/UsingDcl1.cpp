#include "Çì´õ.h"

namespace Hybrid {
	void HybFunc() {
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

void UsingDcl1() {
	using Hybrid::HybFunc;
	HybFunc();
}