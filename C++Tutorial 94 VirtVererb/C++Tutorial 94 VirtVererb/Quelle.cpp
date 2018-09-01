#include <iostream>

/*"Virtuelle Vererbung": Sorgt dafür, dass in dem Vererbungsbaum die jeweiligen Klassen nur noch einmal im Speicher vorhanden sind.*/

class A {
public:
	int i;
};

class B : public virtual A {

};

class C : public virtual A {

};

class D : public B, public C {		//In class "B" und class "C" ist nun durch das "virtual" die gleiche Variable beschrieben und nicht 2 Kopien von derselben.

};

int main() {

	D d;
	d.i = 10;					//"d.B::i" und "d.C::i" sind durch das virtual bei den Klassen ein und derselbe Wert. Die Klassenverweise sind jetzt unnötig.

	std::cout << d.i << std::endl;

	system("pause");
	return 0;
}