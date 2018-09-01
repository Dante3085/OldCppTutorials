#include <iostream>
#include "DynamicArrayPROT.hpp"

/*"Klassentemplates": Die Attribute unserer "DynamicArray" Klasse sind bisher vom Datentyp "int" gewesen. Um auch andere Datentypen unterstützen zu können, ohne weitere Klassen erstellen zu müssen, 
   benötigen wir "Templates" bzw. "Klassentemplates".
*/

int main() {

	DynamicArray<float> aFloat(10);		//Hier die Instanziierung der DynamicArray Klasse jetzt mit Angabe des Datentyps (<>).

	aFloat[5] = 132.34;

	std::cout << aFloat[5] << std::endl;

	system("pause");
	return 0;
}