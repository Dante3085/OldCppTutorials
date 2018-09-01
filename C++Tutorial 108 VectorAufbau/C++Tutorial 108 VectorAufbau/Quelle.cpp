#include <iostream>
#include <vector>			//include f�r den Vektor.

/*"Vector Aufbau": 
Container: Klassen oder Datenstrukturen, die andere Elemente beinhalten (Beispiel: Vektor).
*/

int main() {

	std::vector<int> vec(12);	//int-"Array" mit 12 Elementen. Vektoren k�nnen allerdings mit der Funktion "push_back()" wachsen.
	
	vec[1024] = 14;		//Achtung! Sorgt nicht daf�r, dass der Vektor w�chst. Hier wird wieder �ber den Buffer irgendwo hingespeichert. Exception wird bei Ausf�hrung des Programms ausgel�st.

	system("pause");
	return 0;
}