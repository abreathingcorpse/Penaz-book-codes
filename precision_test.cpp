#include <iostream>
#include <iomanip>

int main()
{
	// This will reduce and fix the computer's precision for this execution
	std::cout << std::setprecision(20);

	float d1(1.0);
	std::cout << "This should be 1.0 " << d1 << std::endl;

	float d2(0.1);
	std::cout << "This should be 0.1 " << d2 << std::endl;

	float d2(0.1*0.1);
	std::cout << "This should be 0.01 " << d3 << std::endl;

	bool x (0.1 + 0.1 + 0.1 == 0.3);
	std::cout << "This should be true (1): " << x << std::endl;

	return 0;
}
