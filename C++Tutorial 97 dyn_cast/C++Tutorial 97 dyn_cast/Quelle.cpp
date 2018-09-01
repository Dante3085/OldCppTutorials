#include <iostream>

/*"dynamic_cast": "static_cast" wird während der Compilezeit ausgeführt. Das heißt, während der Laufzeit kann man nicht mehr herausfinden, ob der static_cast eigentlich funktioniert oder nicht.  
Die Lösung ist der "dynamic_cast". Dieser castet nicht während der Compilezeit, sondern während der Laufzeit unseres Programms. Er ist allerdings langsamer als der static_cast. Wenn man den static_cast
sicher verwenden kann, sollte man ihn auch verwenden.

Polymorphe Klasse: Klasse, die mindestens eine virtuelle Methode hat.

Genaue Beschreibungen für static und dynamic cast: "http://en.cppreference.com/w/cpp/language/dynamic_cast", "http://en.cppreference.com/w/cpp/language/static_cast".
*/

class A {
	virtual void doSmth() {};				//Diese virtuell Methode macht A und alle seine erbenden Klassen "polymorph".
};
class B : public A {};	
class C : public A {};	


int main() {

	A * a[128];								

	for (int i = 0; i < 128; i++) {
		if (rand() % 2 == 0) {				//Gibt immer die gleichen Zahlen aus, da die Random Seed standardmäßig 0 ist. Wir können diese natürlich auf die jeweilige Systemzeit bei Programmstart setzen, um das Ganze unvorhersehbar zu machen.
			a[i] = new B();
		}
		else {
			a[i] = new C();
		}
	}

	B *bPtr = dynamic_cast<B*>(a[0]);		//Mit "dynamic_cast" brauch man zwingend eine "Polymorphe Klasse". Der dynamic_cast schaut sich den Pointer im "Virtual Function Table" (siehe Episode 95) an. Damit dieser Virtual Function Table existiert, muss es nun mal mindestens eine virtuelle Methode geben.

	if (B *bPtr = dynamic_cast<B*>(a[0])) {	//Um zu prüfen, ob das ganze funktioniert hat, setzen wir einen if - Block drum.
		std::cout << "War B!" << std::endl;
	}
	else if (C *bPtr = dynamic_cast<C*>(a[0])) {	// Das gleiche für C.
		std::cout << "War C!" << std::endl;
	}

	system("pause");
	return 0;
}