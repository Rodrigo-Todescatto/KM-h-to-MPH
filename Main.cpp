#include <iostream>

using namespace std;

int main() {

	double Kmh;
	double Mph;

	std::cout << "Enter KM/h value:\n";
	std::cin >> Kmh;

	Mph = Kmh / 1.607;

	std::cout << "Result: " << Mph << "MPH\n";

	return 0;

}
