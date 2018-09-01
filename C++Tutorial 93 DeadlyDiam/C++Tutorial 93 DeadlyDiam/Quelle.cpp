#include <iostream>

/*"DeadlyDiamond": Ist ein Problem bei der Mehrfachvererbung. Bei einer vierten Klasse, die von 2 Klassen, die vorher von einer obersten Klasse geerbt haben, erbt treten nun alle vererbten Attribute 
2 Mal auf. Es mus sich immer entschieden werden, welche der eigentlichen gleichen Variablen genommen werden soll. Sehr verwirrend!
*/

class A {
public:
	int i;
};

class B : public A{

};

class C : public A{

};

class D : public B, public C {

};

int main() {

	D d;
	d.B::i = 10;
	d.C::i = 100;

	std::cout << d.B::i << " " << d.C::i << std::endl;

	system("pause");
	return 0;
}