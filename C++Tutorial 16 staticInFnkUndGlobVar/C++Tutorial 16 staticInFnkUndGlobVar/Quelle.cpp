#include <iostream>;

using namespace std;

void doSmth() {
	static int i = 0;				//Statische Elemente existieren während der gesamten Programmlaufzeit und nicht nur einmal pro Instanz. Sie verhalten sich also wie globale Variablen, sind aber nur in ihrem direkten Umfeld sichtbar (Funktion oder Datei; Ähnlich zu private)
	i++;
	std::cout << i << std::endl;
}

int main() {

	doSmth();
	doSmth();
	doSmth();

	system("pause");
	return 0;

}