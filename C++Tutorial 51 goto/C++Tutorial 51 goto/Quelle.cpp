#include <iostream>

/*"goto": Mit goto kann man an eine beliebige andere Position in der aktuellen Funktion springen. Dieser Befehl ist meistens ungern gesehen. Grund: Spaghetticode entsteht bzw. Code dem man im Kopf nur noch sehr schwer
*folgen kann.
*
*Randnotizen: Mehr als 2 Schleifen ineinander werfen die Frage auf, ob der Code schlecht designed wurde. Außerdem verursachen viele Schleifen ineinander Performanenachteile.
*
*/

int main() {

	start:									//"start" ist ein Label für diese Position.
	std::cout << "Hallo" << std::endl;
	goto start;

	system("pause");
	return 0;
}