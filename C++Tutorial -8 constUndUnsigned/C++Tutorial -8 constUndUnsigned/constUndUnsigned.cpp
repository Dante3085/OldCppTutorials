#include <iostream>;

//"const" Modifier verhindert, dass Variablen verändert werden können. PI wäre z.B. ein geeigneter Kandidat.
//"unsigned" verhindert, dass eine Variable negative Werte annehmen kann. Dafür aber doppelt so viele positive Werte.

int main() {

	//"const" Beispiel
	const double PI = 3.14;
	//PI = 2;

	//"unsigned" Beispiel
	unsigned int x;
	x = -1;
	std::cout << "Fehlerwert: "       << x << std::endl;
	x = 2000000;
	std::cout << "Tatsächlier Wert: " << x << std::endl;

	system("Pause");
	return 0;
}