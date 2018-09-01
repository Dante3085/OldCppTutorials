#include <iostream>;
#include <ctime>;
//#include <cstdlib>; Wird bereits von "iostream" inkludiert. Falls dies nicht vorhanden ist, muss "cstdlib" f�r rand() etc. inkludiert werden.

/*Zufallszahlen / Zufall: Zuf�llige Zahlen k�nnen vom Computer eigentlich nicht generiert werden. Es gibt lediglich mathematische Funktionen die zuf�llige Zahlenfolgen vort�uschen k�nnen. Kennt man die "Random Seed", 
 *so kann vorausgesagt werden welche Zahlen kommen, da diese f�r eine Random Seed immer gleich sind.
 *
 *"Random Seed": Eine Zahl, die mithilfe einer mathematischen Funktion eine pseudozuf�llige Zahlenfolge generiert.
 *Um bei jedem Programmstart eine andere Random Seed zu haben, nutzt man die Systemzeit.
 *
 *"RNG": Random Number Generator (ist die mathematische Funktion, die mit der Random Seed zuf�llige Zahlen hervorbringt).
 *
 *Die Zufallswerte liegen f�r "rand()" standardm��ig zwischen "0" und "RAND_MAX" (32767).
 *
 *Da ein Computer keinen richtigen Zufall generieren kann, muss zus�tzliche Hardware nachhelfen (W�rmeabh�ngiger Stromleiter, Webcam die schwarzes Bild aufnimmt [im dunklen Schuhkarton] und minimale Pixelver�nderungen
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
	rand();															                    //Einige zuf�llige Zahlen vor der Ausgabe helfen den Bereich der zuf�lligen Zahlen zu erh�hen.
	rand();
	rand();
	rand();
	rand();
	std::cout << "Zufallszahl: " << rand() << std::endl;								//Generiert zuf�llige Zahlen. Die Random Seed ist bei C++ standardm��ig immer "0". Deswegen kommt hier auch immer die 41 raus.
	std::cout << "Zufallszahl zw. 0 u. 100: " << (rand() % 100) << std::endl;			//Gibt zuf�llige Zahlen zwischen 0 und 100 aus.
	std::cout << "Zufallszahl zw. 1 u. 10: " << 1 + (rand() % 10) << std::endl;			//Zufallszahl zw. 1 u. 100.

	for (int i = 0; i < 100; i++) {
		std::cout << "Zufallszahl zw. 1 u. 10: " << 1 + (rand() % 10) << std::endl;
	}

	system("pause");
	return 0;
}