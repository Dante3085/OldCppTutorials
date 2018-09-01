#include <iostream>

/*"unions": Sorgen daf�r, dass mehrere Datentypen in denselben Arbeitsspeicherbereich gelegt werden k�nnen.
Beispiel: Ein "int" und ein "float" teilen sich denselben Arbeitsspeicher. Wenn das int ver�ndert wird, ver�ndern wir auch zwangsl�ufig immer das float.

Anwendungsbeispiel "Color": Entweder als RGBA(Rot Gr�n Blau Alpha) oder wir k�nnen die Color als int interpretieren, in welcher die RGBA - Bytes aneinandergeheftet sind. In Java ist dies der Fall. Man
sich dort diesen int Wert zur�ckholen per Methode.
In Java wird dieser Wert w�hrend der Laufzeit ausgerechnet. Da in C++ durch "unions" aber alle Datentypen im selben Ram Bereich sind, kann dieser Wert einfach ausgelesen werden.

Zu Little- und Big-Endian bzw. Byte-Reihenfolge: https://de.wikipedia.org/wiki/Byte-Reihenfolge
*/

//union myColor {						//Falsche Anwendung. Hier h�tte alle Variablen immer denselben Wert, da sie im selben RAM Bereich liegen.
//	unsigned char r;	
//	unsigned char g;
//	unsigned char b;
//	unsigned char a;
//};

union myColor {							//"Struct" und "int rgba" teilen sich denselben Arbeitsspeicher.
	struct {							//Der struct sorgt dafu�r, dass folgende Werte nicht im selben RAM Bereich liegen, und somit auch nicht immer die gleichen Werte haben.
		unsigned char a, b, g, r;		//Falsch rum angeordnet, da "Little-Endian" (Klein-Ender) Architektur in Windows und vielen anderen modernen OS vorhanden ist. Bedeutet, dass der kleinste Bytewert an der fr�hesten Speicheradresse liegt usw. (Tag, Monat, Jahr ...).
	};
	unsigned int rgba;
};

int main() {

	myColor color;
	color.rgba = 0xFFC080AA;			//Hexadezimalwert.
	std::cout << +color.r << " " << +color.g << " " << +color.b << " " << +color.a << std::endl; //Das "+" vor den Ausgabewerten sagt cout, dass der folgende Wert als Zahl interpretiert werden soll. Ansonsten w�rden einfach die oben stehenden char-Werte ausgegeben werden. Man k�nnte auch nach int casten (int).

	system("pause");
	return 0;
}