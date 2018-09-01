#include <iostream>

/*"typedef": Mit typedef lassen sich bereits existierende Datentypen als Basis f�r neue Datentypen nutzen. Das hei�t, ich kann einen Datentyp "byte", der nur 1 Byte gro� ist, auf Basis eines "chars" erschaffen.
 *Intern wird dieser neue Datentyp byte immer noch als char abgespeichert, aber f�r die Programmierung habe ich jetzt den zu char identischen Datentyp byte. Kann den Code lesbarer machen.
 *Mit typedef k�nnen sich dann auch nat�rlich etliche Pr�fixe bzw. modifizierende Keywords wie "signed"/"unsigned" in einen neuen kompakten Datentyp (Namen) pressen.
 *
 *Im "char" Datentyp ist es Compilerabh�ngig, ob dessen Werte "signed" oder "unsigned" bzw. negative Werte zugelassen sind oder nicht. Nicht im Standard festgehalten!
 *
 *
*/

typedef char byte;
//typedef signed char byte;			//"signed": Negative Zahlen sind zugelassen. Nicht Compilerabh�ngig.
//typedef unsigned char byte;		//"unsigned": Negative Zahlen sind nicht zugelassen. Nicht Compilerabh�ngig.

int main() {

	byte i = 5;

	std::cout << "byte: " << i << std::endl;	//Wird "i" als char Symbolzeichen ausgeben, da cout "byte" nicht kennt. Eigenen Funktionen k�nnen nat�rlich auf diesen neuen Datentyp abgestimmt werden.

	system("pause");
	return 0;
}