#include <iostream>;
#include <cmath>;

/*"cmath" ist die Mathematik Bibliothek von C++ und beinhaltet diverse Funktionen, die bei der Lösung von mathematischen Problemen hilfreich sind.
 *"math.h" ist die Mathematik Bibliothek von C.
 *
 *Bei Überlagerungen von Namen, fangen die C++ Bibliotheken immer mit "c" an.
 *
 *Die Headerdateien von C++ sollten immer mit einem ".hpp" gekennzeichnet werden, um dies auch deutlich zu machen.
 *
 */

int main() {

	std::cout << cos(2) << std::endl;							//"cos()" rechnet den cosinus einer beliebigen Zahl aus.
	std::cout << sin(2) << std::endl;							//"sin()" rechnet den sinus einer beliebigen Zahl aus.
	std::cout << tan(2) << std::endl;
	std::cout << acos(0) << std::endl;							//"acos()" rechnet den arcus sinus einer beliebigen Zahl aus.
	std::cout << asin(0) << std::endl;
	std::cout << atan(0) << std::endl;
	std::cout << pow(2, 5) << std::endl;						//"pow()" rechnet die Zahl vor dem Komma hoch die Zahl nach dem Komma. Auch mit Kommazahlen.
	std::cout << abs(-23) << std::endl;							//"abs()" nimmt immer nur den Betrag einer Zahl. Negative Zahlen kommen also nicht vor (Bsp.: Flächeninhalt wird nie negativ.).



	//Programmende
	int end;
	std::cout << "Zahl eingeben + Enter" << std::endl;
	std::cin >> end;
	return 0;
}