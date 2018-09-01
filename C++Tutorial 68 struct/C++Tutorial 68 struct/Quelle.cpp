#include <iostream>
#include <string>

/*"struct": Zunächst genau das gleiche wie Klassen. Der einzige Unterschied ist, bei Klassen ist die Standardsichtbarkeit "private" und bei structs "public".
*In "C" gibt es nur structs. Diese sind dort nur Ansammlungen von Attributen. In C++ sind structs wie gesagt einfach Klassen die standardmäßig public sind.
*
*Manche "Firmenkonventionen" besagen, dass in structs lediglich nicht intelligente Systeme wie z.B. Farben enthalten sind und Klassen intelligentere Systeme beinhalten.
*
*Faustregel: Wenn keine Methoden gebraucht werden, "structs" verwenden, sont Klassen.
*/

struct Mensch {															//"structs" sind standardmäßig public.
	int ichBinPublic;
};

class Mensch {
public:															
	int alter;													
	std::string name;											
	int iq;														

	Mensch(int alter_, std::string name_, int iq_) {			
		alter = alter_;
		name = name_;
		iq = iq_;
	}
private:														


};																

int main() {

	Mensch m(20, "Karl", 100);									
																

	std::cout << m.alter << std::endl;							
	std::cout << m.name << std::endl;
	std::cout << m.iq << std::endl;

	system("pause");
	return 0;
}