#include <iostream>;

//"const" Modifier verhindert, dass Variablen ver�ndert werden k�nnen. PI w�re z.B. ein geeigneter Kandidat.
//"unsigned" verhindert, dass eine Variable negative Werte annehmen kann. Daf�r aber doppelt so viele positive Werte.

int main() {

	//"const" Beispiel
	const double PI = 3.14;
	//PI = 2;

	//"unsigned" Beispiel
	unsigned int x;
	x = -1;
	std::cout << "Fehlerwert: "       << x << std::endl;
	x = 2000000;
	std::cout << "Tats�chlier Wert: " << x << std::endl;

	system("Pause");
	return 0;
}