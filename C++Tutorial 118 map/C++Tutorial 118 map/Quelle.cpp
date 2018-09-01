#include <iostream>
#include <map>
#include <string>

/*"map": Container, die jeweils ein "Key-Value Paar" erwarten. Key+Value wird in map reingegeben. Bei Reingabe des Keys wird dann der Value zur�ckgegeben. Pro Key ein Value.

Anwendung: Auf einem Minecraft Server m�chten wir eine W�hrung kreieren, an der jeder der auf dem Server ist Teilhabe hat. Der "Key" w�re dann der "Spieler" und der "Value" die "Geldmenge", die der Spieler gerade hat. 
*/

int main() {

	std::map<int, std::string> m;	//"int" ist die Stelle bzw. der Key und "std::string" ist der Inhalt bzw. Value.

	m.insert(std::pair<int, std::string>(2, "Peter"));			//"pair" ist ein Datentyp mit 2 Werten. map kann immer nur in pairs bef�llt werden.

	std::cout << m.find(2)->second << std::endl;				//find() gibt Pointer auf oben stehendes Objekt zur�ck. "second" ist in diesem Fall der "std::string". "first" das "int".

	system("pause");
	return 0;
}