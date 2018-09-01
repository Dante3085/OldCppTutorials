#include <iostream>
#include <string>
#include <memory>

/*"unique_ptr": Genauso wie "shared_ptr", mit dem Unterschied, dass das gepointete Objekt immer nur von einem einzigen unique_ptr gepointet werden kann, und nicht zusätzlich von einem shared_ptr.*/

class A {
private:
	std::string name;
public:
	A(std::string name) : name(name) {}

	~A() {
		std::cout << "Destructor of " << name << "!" << std::endl;
	}

	void doStuff() {
		std::cout << "Hallo " << name << "!" << std::endl;
	}
};

int main() {

	{
		A *neuesA = new A("Peter");				//NICHT MACHEN!!! Führt unique_ptr ad absurdum, da ja der Pointer "neuesA" zusätzlich zu a bzw. b auf Peter zeigt.
		std::unique_ptr<A> a(neuesA);
		//std::unique_ptr<A> a(new A("Hugo"));
		//std::unique_ptr<A> b(a);				//"unique_ptr" verhindert, dass ein weiterer Pointer auf sein Objekt "a" zeigt.
		std::unique_ptr<A> b(std::move(a));		//"new A("Hugo")" wurde in "b" gemoved und ist nicht mehr in a vorhanden. b zeigt jetzt auf Hugo, a nicht mehr. Die Referenz von a wird an dieser Stelle zum nullptr.

		b->doStuff();
	}

	system("pause");
	return 0;
}