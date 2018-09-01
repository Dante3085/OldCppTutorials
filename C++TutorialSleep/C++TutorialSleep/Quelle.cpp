#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>

/*Programm für gewisse Zeit zum schlafen legen: 
*1. "Sleep(milliseconds)" ermöglicht es ein Thread für eine durch Millisekunden festgelegte Zeit zum schlafen zu legen. Allerdings treten bei sehr häufiger Benutzung "sichtbare" Fehler in der Zeitangabe auf. Das heißt, 
*dass aus unbekannten Gründen das Programm während der Runtime einen deutlich längeren Zeitabschnitt schläft, als eigentlich festgelegt wurde.
*Da dieses Problem nicht genauer untersucht wurde, empfehle ich die Benutzung der unten angegebenen Funktion.
*
*2."std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(nanoseconds));" tut im Endeffekt dasselbe wie Sleep(). Allerdings, bis jetzt, ohne vorher besprochene Nebeneffekte.
*Nachteil ist: Es werden keine double Werte akzeptiert. Allerdings können bei "std::chrono::HIER" unterschiedliche Zeiteinheiten eingegeben werden, um diesen Nachteil zu umgehen.
*
*EDIT: DIE 2 FUNKTION SCHEINT DIE GLEICHEN PROBLEME ZU BESITZEN. Möglicherweise liegt der Problemherd an einem anderen Ort...
*/

int main() {

	Sleep(1000); //1 Sekunde...

	std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1)); //1 Sekunde...

	system("pause");
	return 0;
}