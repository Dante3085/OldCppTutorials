#include <iostream>;
#include <string>;

/*C++ String sollten in der Regel immer bevorzugt benutzt werden. Können aber auch Gefahren bergen.
 *In C-Strings wurde zusätzlich zu den Zeichen immer noch der "Null Character" mit abgespeichert. Die C++ String speichern separat noch die Länge des Strings mit ab.
 *
 *Der "+" Operator um Strings aneinander zu hängen funktioniert nicht mit primitiven Datentypen. "zusammen  = a + zahl" funktioniert nicht, da zahl primitiv ist und kein Objekt. "zahl" muss erst in String umgewandelt werden.
 *
 *"ä, ö, ü" funktionieren beim Stringvergleich nicht wie erwartet. Lieber "ae, oe, ue" bevorzugen.
 *
 *
 *
 *
 */

//Funktionen

void readStr(std::string read) {
	std::cout << read.find("Welt") << std::endl;
}

int main() {

	std::string test;
	std::cin >> test;

	std::string a = "Hallloooo";																					//C-String wird eingelesen und dann in C++ String umgewandelt.
	std::string b = a;																								//2 unterschiedliche Strings mit dem gleichen Inhalt.
	std::string c("guck guck");
	int zahl(40);
	std::string d(50, 'i');																							//(wie oft soll folgendes Zeichen vorkommen, 'welches Zeichen soll so oft vorkommen')
	std::string empty;																								//Erstellt ein neues leeres Stringobjekt.
	int length = a.length();																						//Speichert die Länge des Strings "a" in int "length".

	std::cout << length << std::endl;																				//Gibt "length" aus.
	std::cout << a << std::endl;																					//Gibt den String a aus.

	a[4] = 'Z';																										//Spricht den 4. Index des Strings a an und speichert dort ein "Z" ab. Auch hier kann wieder über den Puffer hinausgeschrieben werden, was die gleichen Gefahren birgt, die vorher erklärt wurden.

	std::cout << a << std::endl;

	a.at(3) = 'Z';																								    //Erkennt falsche Indexwerte und bringt das Programm zum Crash, was besser ist als irgendwelche Teile des RAMs zu überschreiben.

	std::string zusammen = a + c;																					//Ein einfaches "+" hängt Strings aneinander.

	std::cout << zusammen << std::endl;

	std::string richtig = a + std::to_string(zahl);																	//"to_string()" wandelt den primitiven Datentyp int von "zahl" in ein Stringobjekt um.

	std::cout << richtig << std::endl;

	b = a;

	if (a == b /* a != b */ /* a <= b */ /* a >= b */) {															//Prüft, ob a und b den gleichen Inhalt haben.
		std::cout << "a und b sind gleich" << std::endl;
	}

	std::string originalName = "Herr Maier";
	std::string vorname = "Max ";

	originalName.insert(5, vorname);																				//StringInDenEingefügtWird.insert(StelleAnDerEingefügtWird, StringDerEingefügtWird).

	std::cout << originalName << std::endl;

	std::string originalString = "Das Kernkraftwerk";

	originalString.erase(4, 4);																						//StringAusDemGelöschtWerdenSoll.erase(StelleAbDerGelöschtWird, AnzahlZeichenDieGelöschtWerden).

	std::cout << originalString << std::endl;

	std::string searcher = "Blaukraut bleibt Blaukraut";

	int first = searcher.find("Blaukraut");																			//StringInDemGesuchtWird.find("ZeichenfolgeDieGesuchtWird"). Sucht von links. Gibt den Index aus.
	int last = searcher.rfind("Blaukraut");																			//Das gleiche wie oben. Sucht aber von rechts aus.
	int notFound = searcher.find("nicht drin");																		//Sucht nach etwas, dass nicht im String steht. Der Rückgabewert für einen Fehler ist standardmäßig "-1".

	std::cout << first << std::endl;
	std::cout << last << std::endl;
	std::cout << notFound << std::endl;

	std::string read = "Hallo Welt";
	readStr(read);

	//Programmende
	int end;
	std::cout << "Irgendeinen Wert eingeben und mit Enter aktzeptieren, um Programm zu beenden. . .";
	std::cin >> end;
	return 0;
}