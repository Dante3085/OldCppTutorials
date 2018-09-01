#include <iostream>;

//Aufgabe: Funktion "swap" erstellen, die die Werte von 2 Variablen tauschen soll. Also, Call by Reference mit 2 Variablen.
//Problem der Sprache C++: "doSmth(x)" Von au�en bzw. beim Aufruf kann nicht erkannt werden, ob gerade eine Referenz oder ein Value �bergeben wird.

//Funktionen

//�bergibt Referenz
void doSmth(int &a) {				//"Call by Reference": Die tats�chliche Variable wird per Referenz �bergeben. Es wird mit dem selben Speicher gearbeitet.
	a++;
}

void swap(int &t, int &z) {
	int swapT = t;
	int swapZ = z;
	
	t = swapZ;
	z = swapT;
}

//Programmanfang
int main() {

	int x = 5;						//"Call by Value": Funktionen die diese Variable als Parameter bekommen, arbeiten lediglich mit einer Kopie des Wertes. Nicht mit der Variable selbst.
	doSmth(x);
	std::cout << x << std::endl;	//Da "doSmth" nur mit einer Kopie von dem Wert von x gearbeitet hat, ver�ndert sich der urspr�ngliche Wert von x nicht.

	int t = 10;
	int z = 20;
	std::cout << "t: " << t << std::endl << "z: " << z << std::endl; //Ausgabe: t und z vor swap.
	std::cout << std::endl;
	swap(t, z);
	std::cout << "t: " << t << std::endl << "z: " << z << std::endl; //Ausgabe: t und z nach swap.

	//Programmende
	system("Pause");
	return 0;
}