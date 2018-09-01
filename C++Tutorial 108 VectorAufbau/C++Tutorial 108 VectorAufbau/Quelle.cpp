#include <iostream>
#include <vector>			//include für den Vektor.

/*"Vector Aufbau": 
Container: Klassen oder Datenstrukturen, die andere Elemente beinhalten (Beispiel: Vektor).
*/

int main() {

	std::vector<int> vec(12);	//int-"Array" mit 12 Elementen. Vektoren können allerdings mit der Funktion "push_back()" wachsen.
	
	vec[1024] = 14;		//Achtung! Sorgt nicht dafür, dass der Vektor wächst. Hier wird wieder über den Buffer irgendwo hingespeichert. Exception wird bei Ausführung des Programms ausgelöst.

	system("pause");
	return 0;
}