												//Aufgabe: "Hello World" in 2 verschiedenen Zeilen ausgeben.
#include <iostream>								//#include f�gt Dateien von au�en in den Quellcode ein. NameSpaces sind �hnlich wie bei Java Packages.

int main() {									//Dies ist eine "main Funktion" in C++. Da die main Funktion vom Typ int ist, k�nnen dem Aufrufer noch Informationen zur�ckgegeben werden.
	std::cout << "Hello World" << std::endl;	//"std" ist der NameSpace in dem die gewollte Funktion "cout" f�r die Konsolenausgabe vorhanden ist. "\n" sorgt f�r einen Zeilenumbruch. "<<std::endl" (end line) ebenfalls.
	std::cout << "Hello World" << std::endl;
	system("pause");							//Programm wird nicht beendet bevor eine Eingabe stattgefunden hat.
	return 0;									//Die "0" steht als R�ckgabewert f�r "alles hat funktioniert". Jeder andere Wert w�re irgendeine Art Fehlercode.
}