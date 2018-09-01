#include <iostream>

/*"friend": Klassen können "Freunde" sein, was es einer fremden freund Klasse ermöglicht mit den privaten Attributen der anderen Klasse zu interagieren. ACHTUNG: Einseitige Freundschaft!
Nur die Klasse, welche von der anderen als Freund deklariert wurde, kann die privaten Attribute der anderen beeinflussen, nicht andersrum.

Sparsam verwenden. Gutes Codedesign tut es auch.
*/

class A {
private:			//"private" muss nicht hingeschrieben werden, da die Standardsichtbarkeit bereits private ist. Jedoch macht es den Code lesbarer.
	int i;

	friend class B;
};

class B {
private:
	A a;
public:
	B(A a) : a(a) {
		this->a.i = 5;	//Durch den Freundstatus zwischen A und B, kann B die private Variable "i" von A verändern.
	}
};

int main() {



	system("pause");
	return 0;
}