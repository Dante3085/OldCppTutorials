#include <iostream>;
#include <ctime>;
//#include <cstdlib>; Wird bereits von "iostream" inkludiert. Falls dies nicht vorhanden ist, muss "cstdlib" für rand() etc. inkludiert werden.

/*Zufallszahlen / Zufall: Zufällige Zahlen können vom Computer eigentlich nicht generiert werden. Es gibt lediglich mathematische Funktionen die zufällige Zahlenfolgen vortäuschen können. Kennt man die "Random Seed", 
 *so kann vorausgesagt werden welche Zahlen kommen, da diese für eine Random Seed immer gleich sind.
 *
 *"Random Seed": Eine Zahl, die mithilfe einer mathematischen Funktion eine pseudozufällige Zahlenfolge generiert.
 *Um bei jedem Programmstart eine andere Random Seed zu haben, nutzt man die Systemzeit.
 *
 *"RNG": Random Number Generator (ist die mathematische Funktion, die mit der Random Seed zufällige Zahlen hervorbringt).
 *
 *Die Zufallswerte liegen für "rand()" standardmäßig zwischen "0" und "RAND_MAX" (32767).
 *
 *Da ein Computer keinen richtigen Zufall generieren kann, muss zusätzliche Hardware nachhelfen (Wärmeabhängiger Stromleiter, Webcam die schwarzes Bild aufnimmt [im dunklen Schuhkarton] und minimale Pixelveränderungen
 *durch kosmische Hintergrundstrahlung als Grundlage des Zuffals). 
 *
 *
 *
 *
 *
 */

int main() {

	std::cout << "RAND_MAX: " << RAND_MAX << std::endl;
	std::cout << "Systemzeit: " << time(0) << std::endl;
	srand(time(0));													                    //"srand" seedrandom (time(0)). "time(0)" ist die aktuelle Systemzeit in Sekunden.
	rand();															                    //Einige zufällige Zahlen vor der Ausgabe helfen den Bereich der zufälligen Zahlen zu erhöhen.
	rand();
	rand();
	rand();
	rand();
	std::cout << "Zufallszahl: " << rand() << std::endl;								//Generiert zufällige Zahlen. Die Random Seed ist bei C++ standardmäßig immer "0". Deswegen kommt hier auch immer die 41 raus.
	std::cout << "Zufallszahl zw. 0 u. 100: " << (rand() % 100) << std::endl;			//Gibt zufällige Zahlen zwischen 0 und 100 aus.
	std::cout << "Zufallszahl zw. 1 u. 10: " << 1 + (rand() % 10) << std::endl;			//Zufallszahl zw. 1 u. 100.

	for (int i = 0; i < 100; i++) {
		std::cout << "Zufallszahl zw. 1 u. 10: " << 1 + (rand() % 10) << std::endl;
	}

	system("pause");
	return 0;
}