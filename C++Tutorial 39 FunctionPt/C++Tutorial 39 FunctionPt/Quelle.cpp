#include <iostream>

/*Function Pointer: Pointer können nicht nur auf Variablen zeigen, sondern auch auf Funktionen.

  "Rückgabewert (*NameFunctionPointer)(Parameterliste);"
  "void			(*func)				  (int a, ...)		  ;

  Es muss immer darauf geachtet werden, dass der Function Pointer den gleichen Header hat, wie die Funktion auf die er zeigen soll.

  Beispiel für komplexen Function Pointer: "void*(*func)(int*)". "*func" = ist ein Function Pointer; "void*" = Funktion, die einen Void Pointer zurückgibt. "int*" = Funktion, die einen int Pointer erwartet.

  Beispiel für Function Pointer Anwendungsfall: Java Listener dienen dazu, dass Knöpfe in GUIs bestimmte Funktionen/Methoden etc. ausführen, wenn sie gedrückt werden. In C++ könnte ein Function Pointer an einen GUI Knopf gegeben werden,
  um diesem somit eine Funktion bei Knopfdruck zu geben.
*/

/*Funktionen*/
void doSmth() {
	std::cout << "Bin in doSmth" << std::endl;
}

void doSmthDiff() {
	std::cout << "Bin in der anderen Funktion" << std::endl;
}

int main() {

	void(*func)();			//Function Pointer "*func" erstellt. Zeigt noch auf nichts.
	func = doSmth;			//*func zeigt jetzt auf Funktion "doSmth".

	func();					//Das, auf das "*func" zeigt wird ausgeführt.

	func = doSmthDiff;		//Die Referenz von "*func" ist jetzt die Funktion "doSmthDiff".

	func();					//*func wird nochmal ausgeführt, was zeigt, dass sich seine Referenz auf doSmthDiff verändert hat.

	system("pause");
	return 0;
}