												//Aufgabe: "Hello World" in 2 verschiedenen Zeilen ausgeben.
#include <iostream>								//#include fügt Dateien von außen in den Quellcode ein. NameSpaces sind ähnlich wie bei Java Packages.

int main() {									//Dies ist eine "main Funktion" in C++. Da die main Funktion vom Typ int ist, können dem Aufrufer noch Informationen zurückgegeben werden.
	std::cout << "Hello World" << std::endl;	//"std" ist der NameSpace in dem die gewollte Funktion "cout" für die Konsolenausgabe vorhanden ist. "\n" sorgt für einen Zeilenumbruch. "<<std::endl" (end line) ebenfalls.
	std::cout << "Hello World" << std::endl;
	system("pause");							//Programm wird nicht beendet bevor eine Eingabe stattgefunden hat.
	return 0;									//Die "0" steht als Rückgabewert für "alles hat funktioniert". Jeder andere Wert wäre irgendeine Art Fehlercode.
}