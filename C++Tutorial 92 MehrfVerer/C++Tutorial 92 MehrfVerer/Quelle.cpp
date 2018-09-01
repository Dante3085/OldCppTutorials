#include <iostream>

/*"Mehrfachvererbung": In C++ kann eine Klasse, im Gegensatz zu Java, von mehreren Klassen erben.

Problematiken
--------------
1. Wenn die vererbenden Klassen gleiche Variablen haben (gleicher Datentyp und gleicher Name), ist in der erbenden Klasse nicht mehr eindeutig, welche der beiden Variablen den nun gerade
angesprochen wird. Um dieses Problem zu umgehen, verwendet man entweder einzigartige Variablen oder man verweist mit "::" auf die Klasse, aus der die Variable ursprünglich kommt.
*/

class A {
public:
	int i;		//Problematik 1
};

class B {
public:
	int i;		//Problematik 1
};

class C : public A, public B{			//Klasse "C" erbt mehrfach, nämlich von Klasse "A" und "B". Alles was in den Klassen A und B ist (Attribute und Funktionen), ist nun auch in Klasse C.

};

int main() {

	C c;
	c.i = 5;	//Problematik 1. Lösung: "c.A::i = 5;" oder "c.B::i = 5;" in diesem Fall.

	system("pause");
	return 0;
}