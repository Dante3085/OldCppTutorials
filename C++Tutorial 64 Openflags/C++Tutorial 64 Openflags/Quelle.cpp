#include <iostream>
#include <fstream>
#include <string>

/*"Openflags(�ffnungsmodi)": Werden ben�tigt, wenn beim Schreiben in eine Datei, der Inhalt nicht immer �berschrieben werden soll, sondern der neue Inhalt hinten dran gehangen werden soll.
*
*"std::ios::app": Bei jedem Vorgang wird die Schreibposition wieder an das Ende gesetzt. Es kann nicht mehr im File gesprungen werden.
*"std::ios::ate": Schreibposition wird am Anfang beim �ffnen der Datei an das Ende gesetzt.
*"std::ios::trunc": Datei wird bei jedem �ffnen komplett �berschrieben.
*"std::ios::trunc | std::ios::app": Datei wird �berschrieben und dann wird immer am Ende weitergeschrieben.
*"std::ios::binary": Datei wird im Bin�rformat ge�ffnet.
*/

int main() {

	std::ofstream file;
	//file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/1_Externe Ordner und Dateien/InDateienSchreibenAusDateienLesen/hallo.txt", std::ios::app);
	//file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/1_Externe Ordner und Dateien/InDateienSchreibenAusDateienLesen/hallo.txt", std::ios::ate);
	//file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/1_Externe Ordner und Dateien/InDateienSchreibenAusDateienLesen/hallo.txt", std::ios::trunc);
	file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/1_Externe Ordner und Dateien/InDateienSchreibenAusDateienLesen/hallo.txt",std::ios::binary);

	if (file.is_open()) {
		file << "hallo ";
	}
	else {
		std::cerr << "Fehler beim Oeffnen der Datei!";
	}

	system("pause");
	return 0;
}