//Pr�prozessorbefehle
#include <iostream>											//Ersetzt diese Zeile durch alles, was in "iostream" steht.
#define NUMBER	100											//"#define Name Ersetzungstext". In diesem Fall geht der Pr�prozessor durch unseren gesamten Code und ersetzt "NUMBER" mit "100". NUMBER agiert praktisch als Variable.
#define sq(a) (a)*(a)										//Auch mit Argumenten. 

/*Pr�prozessor: Bevor Quellcode in Compiler gelangt, wird der Code vom Pr�prozessor verarbeitet.
 *1. Pr�prozessorbefehle fangen immer mit einem "#" (Hash).  
 *2. Der Pr�prozessor modifiziert den Code bevor er an den Compiler gegeben wird. In der "#include <iostream>" Zeile wird z.B. jene Zeile durch alles, was in "iostream" steht ersetzt.
 *3. #define wird auch Makro genannt.
 *
 *
 *
 */

int main() {

	int z = 5;

	int a[NUMBER];
	a[50] = 50;
	std::cout << "a[50]: " << a[50] << std::endl;

	std::cout << sq(5) << std::endl;						//"sq(5)" wird vom Compiler vor der Programmlaufzeit ausgerechnet, da dies ein Befehl des Pr�prozessors ist. Keine Performanceeinbu�en w�hrend der Laufzeit.
	std::cout << sq(z - 1) << std::endl;

	//Programmende
	int ende;
	std::cout << "Zahl + Enter fuer Programmende . . ." << std::endl;
	std::cin >> ende;
	return 0;
}