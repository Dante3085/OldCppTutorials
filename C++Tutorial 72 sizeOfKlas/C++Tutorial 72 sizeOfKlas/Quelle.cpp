#include <iostream>
#include "MenschPROT.hpp"
#include <string>

/*"sizeOf bei Klassen": "sizeOf" kann auch bei Klassen angewendet werden, um dessen Bytegröße herauszufinden. Noramlerweise würde man vermuten, dass eine Klasse so größ ist, wie die Summe ihrer Attribute.
*Compiler können jedoch an das Ende einer Struktur Bytes anfügen, damit diese immer ein Vielfaches von einem bestimmten Wert ist. Dies macht die Arbeit für den RAM einfacher (Hardware-Optimierung).
*
*"IMP" = Implementation; "PROT" = Prototyp;
*/

int main() {

	std::cout << "Anzahl Menschen: " << Mensch::getAnzahlMenschen() << std::endl << std::endl;

	Mensch karlSTD;																	//Standardkonstruktor wird aufgerufen (siehe "MenschIMP"/"MenschPROT").
	std::cout <<  "Alter: "				<<	karlSTD.getAlter()			<< std::endl;
	std::cout <<  "IQ: "				<<	karlSTD.getIQ()				<< std::endl;
	std::cout <<  "Name: "				<<	karlSTD.getName()			<< std::endl;
	std::cout <<  "Anzahl Menschen: "	<<	karlSTD.getAnzahlMenschen() << std::endl << std::endl;

	Mensch  karlADVC(20, 100, "karlADVC");
	std::cout << "Alter: "					<<karlADVC.getAlter()		   << std::endl;
	std::cout << "IQ: "						<<karlADVC.getIQ()			   << std::endl;
	std::cout << "Name: "					<<karlADVC.getName()		   << std::endl;
	std::cout << "Anzahl Menschen: "		<<karlADVC.getAnzahlMenschen() << std::endl << std::endl;

	std::cout << "Ein Mensch ist " << sizeof(Mensch) << " Bytes gross" << std::endl;

	system("pause");
	return 0;
}