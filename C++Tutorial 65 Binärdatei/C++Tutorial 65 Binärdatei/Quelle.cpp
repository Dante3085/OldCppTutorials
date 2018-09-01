#include <iostream>
#include <string>
#include <fstream>

/*"Binärdatei": Zip-Dateien sind Binärdateien. Diese müssen beim einlesen besonders behandelt werden.
*
*Streams, die geschlossen worden sind, können zur jeder Zeit wieder geöffnet und benutzt werden.
*
*Buffer kann nicht einfach mit "cout" ausgegeben werden, da im Buffer "Nullbytes" sind, die von C++ als Ende des Strings interpretiert werden. 
*Schlechter wäre es, wenn keine Nullbytes vorhanden wären, da dann über das Ziel hinausgelesen wird.
*/

int main() {

	char *buffer;
	std::ifstream file;
	file.open("C:/Users/mjsch/Desktop/test.zip", std::ios::binary | std::ios::ate); //"ate", da der Schreibkopf komplett an das Ende gestellt werden soll. "binary", da es sich um eine Binärdatei handelt.
	
	if (file.is_open()) {
		int size = file.tellg();	   //"tellg()" gibt zurück, wo sich der Lesekopf befindet. Da C++ keine Möglichkeit hat, um Dateigrößen zu bestimmen, benutzen wir dazu einfach die Position des Schreibkopfs. Da dieser durch "ate" am Ende steht, ist dies die Dateigröße.
		buffer = new char[size];

		file.seekg(0, std::ios::beg);  //"seekg(Verschiebung, von Position ... aus)" verschiebt den Schreibkopf relativ zu einer Position. "beg" ist beginning. Es gibt auch "end" oder "cur".
		file.read(buffer, size);	   //Buffer wird gelesen. Wie viel? size. Also die gesamte Datei.

		std::cout << "Inhalt der Datei" << std::endl;

		for (int i = 0; i < size; i++) {
			std::cout << buffer[i];
		}

		std::cout << std::endl;

		delete[] buffer;			   //Wenn "new" dann auch "delete".
		buffer = nullptr;			   //Best Practice.
	}
	else {
		std::cerr << "Fehler beim Öffnen der Datei";
	}


	system("pause");
	return 0;
}