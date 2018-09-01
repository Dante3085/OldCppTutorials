#include <iostream>

/*"static_cast bei downcasts": Static Cast nur downcasten, wenn man sich sicher ist, dass der Typ zu dem man downcastet, auch tatsächlich in der Variable drinsteckt.*/

class A{};
class B : public A{};	// In diesem Fall ist ein downcast, ein Pointer auf A jedoch steckt in diesem Pointer eigentlich ein Objekt von B steckt.	
class C : public A {};	// In diesem Fall ist ein downcast, ein Pointer auf A jedoch steckt in diesem Pointer eigentlich ein Objekt von C steckt.

int main() {

	A * a[128];								//Ein Array an A s, was per Zufall mit B s und C s gefüllt wird.

	for (int i = 0; i < 128; i++) {
		if (rand() % 2 == 0) {				//Wenn Zufallszahl gerade ist. Also der Rest einer Teilung gleich 0 ist.
			a[i] = new B();
		}
		else {
			a[i] = new C();
		}
	}

	B *bPtr = static_cast<B*>(a[0]);		//Typischer downcast. A liegt höher in der Hierarchie. Deshalb casten wir runter zu B. Wenn a[0] tatsächlich ein Objekt der Klasse B ist, wäre dieser downcast kein Problem. Wenn dort allerdings ein Objekt der Klasse C drin ist, haben wir es wieder mit "Undefined Behaviour" zu tun. Also Crashes im besten Fall und im schlechtesten Fall macht sich der Fehler nicht bemerkt und es wird munter im Speicher irgendetwas überschrieben.

	system("pause");
	return 0;
}