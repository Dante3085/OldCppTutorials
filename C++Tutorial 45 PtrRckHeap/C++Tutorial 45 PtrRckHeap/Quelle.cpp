#include <iostream>

/*Pointer Rückgabe von Heapvariable: Eine dynamisch erzeugte Variable landet nicht auf dem Stack Speicherbereich sondern auf dem Heap Speicherbereich.
 *Dies führt zur schon bekannten Eigenschaft, dass dynamischer Speicher auch außerhalb seines Scopes/Blocks bestehen bleibt. Somit kann er auch aus seinem Scope hinaus als mit einem Pointer übergeben werden.
 *
 *Falls irgendwo dynamischer Speicher mit "new" erzeugt wird, sollte immer gesondert darauf hingewiesen werden, da dieser ja auch wieder gelöscht werden muss.
 */

int* doSmth() {			//In dieser Funktion wird ein Pointer, der auf eine Heapvariable bzw. dyn. Variable zeigt übergeben. Dies kann ohne Probleme getan werden, da dyn. Variablen solange bestehen, bis sie mit "delete" gelöscht werden bzw. der Speicher wieder freigegeben wird.
	int* p = new int;
	*p = 10;
	return p;
}

int* doSmth2() {		//In dieser Funktion wird ein Pointer, der auf eine Stackvariable zeigt übergeben. Dies sollte niemals getan werden, da der Speicher der Stackvariable freigegeben wird, nachdem diese aus ihrem Scope tritt.
	int i = 2;
	int* p = &i;
	return p;
}

int main() {

	int* a = doSmth();
	std::cout << *a << std::endl;
	std::cout << *a << std::endl;

	int* b = doSmth2();
	std::cout << *b << std::endl;
	std::cout << *b << std::endl;
	std::cout << *b << std::endl;

	//Programmpause
	system("pause");
	return 0;
}