#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::ifstream file;
	std::string ZeilenSpeicher;
	file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/1_Externe Ordner und Dateien/InDateienSchreibenAusDateienLesen/hallo.txt");
	if (file.is_open()) {	//�berpr�fung auf Fehler bei �ffnung des Files.
		while (std::getline(file, ZeilenSpeicher)) {	//Wenn am Ende der Datei angekommen gibt Bedingung "false" zur�ck und Schleife ist beendet. Jede
			std::cout << ZeilenSpeicher << std::endl;
		}
		file.close();
	}
	else {
		std::cerr << "Fehler beim �ffnen der Datei!";
	}

	system("pause");
	return 0;
}