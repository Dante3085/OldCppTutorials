#include <iostream>
#include "DynamicArrayPROT.hpp"
#include <string>

/*"Exception Handling": Immer wenn ein Fehler in unserem Programm auftritt, k�nnen wir eine Exception schmei�en (throw) und darauf hoffen, dass die dar�berliegende Ebene damit umgehen kann. Im Gegensatz zu Java kann in C++ absolut ALLES
*geschmissen werden.
*/

int main() {
	
	DynamicArray a(10);
	DynamicArray b(20);

	try {						
		DynamicArray c = a + b;	//Code der eine Exception ausl�sen kann.
	}
	catch (int e) {				//Wir fangen die Exception des oben stehenden Codes mit dem "throw" in "DynamicArrayIMP.cpp". Das throw wirft einen int Wert.
		std::cout << "Int Exception empfangen. Wert war " << e << std::endl;
	}
	catch (std::string e) {		//Falls ein String geworfen wird, tritt dieser catch-Block in kraft.
		std::cout << "String Exception empfangen. Wert war " << e << std::endl;
	}


	system("pause");
	return 0;
}