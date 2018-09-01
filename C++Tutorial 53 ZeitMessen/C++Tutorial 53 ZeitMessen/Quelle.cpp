#include <iostream>
#include <chrono>

/*Functionprototypes*/
bool isPrime(int);

int main() {

	std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

	int sum = 0;

	for (int i = 2; i < 100000; i++) {
		if (isPrime(i)) {
			sum += i;
		}
	}

	std::cout << sum << std::endl;

	std::chrono::high_resolution_clock::time_point ende = std::chrono::high_resolution_clock::now();
	std::chrono::high_resolution_clock::duration diff = ende - start;
	int timeMilli = std::chrono::duration_cast<std::chrono::milliseconds>(diff).count();

	std::cout << "Verstrichene Zeit in Millisekunden: " << timeMilli << std::endl;

	system("pause");
	return 0;
}

/*Functions*/
bool isPrime(int x) {
	bool isPrime = true;

	if (x < 2) {
		return false;
	}

	for (int i = 2; i < x; i++) {

		if (x % i == 0) {
			isPrime = false;
			break;
		}
	}
	return isPrime;
}