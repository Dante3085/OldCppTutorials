#include <iostream>;

/*Im "Stack" befindet sich auch die "R�cksprungadresse" von Funktionen. Die R�cksprungadresse ist der Ort, wo der Code weitermachen soll nachdem die Funktion ausgef�hrt wurde.
 *
 *Es sei also allgemein davon abgeraten �ber die initialisierte Gr��e eines Arrays hinaus zu gehen, weil unvorhersehbare �nderungen im Programmverhalten auftreten k�nnen.
 *In Arrayklammern k�nnen keine Variablen reingesetzt werden. x = 3; int zahlen[x] = {}; ist nicht m�glich. Wenn vor dem x ein "const" steht, ist dies m�glich.
*/

void doSmth() {
	int zahlen[5] = {};
	zahlen[10] = 10;									//Wenn ich Pech hatte, habe ich hier die R�cksprungadresse meiner Funktion "doSmth()" �berschrieben und mein Code wird nach Funktionsdurchf�hrung an irgendeiner unvorhersehbaren Stelle wieder fortgef�hrt.
	//zahlen[-10] = 10;									//Negative Indizes sind auch m�glich, aber wieder sehr unvorhersehbar und so gut wie nie von Nutzen.
}

int main() {

	//int zahlen [100];									//Erschafft ein int-Array mit 100 Variablen in sich.
	//int zahlen [100] = {};							//Initialisiert das Array "zahlen" an jedem Index mit einer 0.
	//int zahlen[100] = { 1, 2, 3 };					//Initialisiert das Array "zahlen" an Stellen "0, 1, 2" mit "1, 2, 3" und an allen restlichen Stellen mit einer 0.
	//zahlen[150] = 100;								//Ist m�glich obwohl eigentlich nur 100 Stellen initialisiert wurden. Die meisten Compiler gehen z.B. bei int (4 Bytes) in diesem Fall 4 * 50 Bytes im Arbeitsspeicher weiter und schreiben dort den Wert rein. SEHR GEF�HRLICH! Im besten Fall crasht das Programm. Im schlechtesten Fall werden irgendwelche Variablen �berschrieben. Welche dies sind ist komplett unvorhersehbar.
	//int zahlen[2] = {};
	const int x = 100;									//Durch "const" kann das x in die Arrayklammern gesetzt werden. Allerdings kann die Gr��e von x jetzt nicht mehr durch eine Benutzereingabe definiert werden.
	int zahlen[x] = {};

	/*for (int i = 0; i < 100; i++) {					//Gibt den gesamten Inhalt des Arrays "zahlen" aus.
		std::cout << zahlen[i] << std::endl;			//Falls das Array nicht sofort belegt wird, kommen hier irgendwelche zuf�lligen Werte raus. Das k�nnte unter Umst�nden Probleme verursachen. Also erst das Array untersuchen.
	}*/

	for (int i = 0; i < 18; i++) {						//Gibt die zwei 0 aus, die bei der Initialisierung in das Array reingespeichert wurden. Die restlichen 16 Stellen sind andere Zahlenwerte vom Stack, die dort gespeichert werden.
		std::cout << zahlen[i] << std::endl;
	}

	system("pause");
	return 0;
}