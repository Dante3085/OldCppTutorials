#include <iostream>
#include <string>
#include <memory> //Für Smart Pointer

/*"Smart Pointer shared_ptr": Smart Pointer deleten die reingegebenen Objekte selber.
1. "shared_ptr": Wenn kein anderer shared_Pointer auf das Objekt, dass er referenziert zeigt, löscht er es. Hat "reference Counter" bzw. Anzahl der shared_ptr, die gerade auf das Objekt zeigen. Reference 
Counter wird im shared_ptr Destruktor immer herabgesetzt. Erreicht der Reference Counter 0, zeigt kein shared_ptr mehr auf das Objekt, und der Destruktor des shared_ptr kann es mit löschen.
*/

class A {
private:
	std::string name;
public:
	A(std::string name) : name(name) {}

	~A() {
		std::cout << "Destructor of" << name << "!" << std::endl;
	}
	
	void doStuff() {
		std::cout << "Hallo " << name << "!" << std::endl;
	}
};



int main() {

	{
		std::shared_ptr<A> a(new A("Hugo"));
		std::shared_ptr<A> b(a);

		b->doStuff();
	}

	/*A *a = new A("Hugo");

	//Code; Falls in diesem Code eine Exception geschmissen wird, kann "a" niemals deleted werden. Dies könnte durch try/catch Blöcke geregelt werden, wird aber schnell undurchsichtig.

	delete a;*/

	system("pause");
	return 0;
}