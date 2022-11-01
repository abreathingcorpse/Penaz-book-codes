#include <iostream>
int main() {
	// First of all we get the seed
	unsigned int seed;
	std::cout << "Type the seed: ";
	std::cin >> seed;
	// Now we seed the randomizer
	srand(seed);
	// Small presentation
	std::cout << "This generator will now generate 10 random numbers" << std::endl;
	// Output 10 random numbers
	for (int i = 0; i < 10; ++i {
		std::cout << rand() << std::endl;
	}
	// Finish the program
	return 0;
}
