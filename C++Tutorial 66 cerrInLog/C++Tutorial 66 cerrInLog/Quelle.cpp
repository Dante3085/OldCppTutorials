#include <iostream>
#include <fstream>

/*"cerr in Logdatei umlenken": std::cerr Meldungen können und sollten in eine Logdatei umgelenkt werden. Zusätzlich wäre eine Fehlermeldung in einem seperaten Fenster auch hilfreich.*/

int main() {

	std::ofstream log("C:/Users/mjsch/Desktop/log.txt", std::ios::app);

	std::cerr.rdbuf(log.rdbuf());

	std::cerr << "Fehler! Omg alles kaputt!";

	log.close();

	system("pause");
	return 0;
}