#include <iostream>
#include <fstream> //filestream

/*"In Dateien Schreiben": 
*Wenn das File seinen Scope verl‰sst, schlieﬂt C++ es automatisch. Besser ist es aber das File manuell mit "close()" zu schlieﬂen.
*Das File, welches erstellt wird, muss es vorher nicht geben, den Pfad zu diesem jedoch schon.
*/

int main() {

	std::ofstream file;
	file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/1_Externe Ordner und Dateien/InDateienSchreibenAusDateienLesen/hallo.txt");
	file << "Was wollen wa reinschreiben";
	file.close();

	system("pause");
	return 0;
}