#include <iostream>
#include <chrono>

/*"auto": auto vor einem Variablennamen, brint den Compiler dazu selber nachzugucken, welcher Datentyp in Frage kommt. Kurz, man spart sich lange Typangaben. Vergleich mit Tutorial "53".
*
*Allerdings könnte dies bei primitiven Datentypen, wo der Wert der Variable keinen deutlichen Aufschluss über dessen Typ gibt, zu undurchsichtigem Code führen.
*/

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

int main() {

	auto start = std::chrono::high_resolution_clock::now();

	int sum = 0;

	for (int i = 2; i < 100000; i++) {
		if (isPrime(i)) {
			sum += i;
		}
	}

	std::cout << sum << std::endl;

	auto ende = std::chrono::high_resolution_clock::now();
	auto diff = ende - start;
	int timeMilli = std::chrono::duration_cast<std::chrono::milliseconds>(diff).count();

	std::cout << "Verstrichene Zeit in Millisekunden: " << timeMilli << std::endl;

	system("pause");
	return 0;
}