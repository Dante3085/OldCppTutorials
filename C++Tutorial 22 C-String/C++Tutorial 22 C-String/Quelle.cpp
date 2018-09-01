#define _CRT_SECURE_NO_WARNINGS														//Setzt die Warnung f�r "strcpy()" au�er kraft.
#include <iostream>;

/*Alles das hier vorgestellt wird ist veraltet! Es gibt bessere Varianten, die sp�ter vorgestellt werden. "strcpy_s" nicht verwenden, da dies nicht standardm��ig Teil von C oder C++ ist, sondern ein VS Tool.
 *
 *"strcpy()" ist eine relativ gef�hrliche Funktion. Falls ein String, der vom Benutzer festgelegt wird durch strcpy() in einen zu kleinen Buffer reingepackt wird, kommt es zu einem "Buffer Overflow" 
 *(Puffer �berlauf / Stack Overflow). Das hei�t, dass wieder blind �ber die Gr��e des Arrays hinaus geschrieben wird und unvorhersehbar Werte ver�ndert, gel�scht oder sogar die R�cksprungadresse gel�scht (usw.) 
 *werden k�nnen.
 *
 *Puffer/Buffer: Ein Puffer ist praktisch die vorher festgelegte Speichermenge f�r Datenspeicherung/Zwischenspeicherung. 
 *
 *Als Faustregel kann man sich merken, dass nach Nutzereingaben IMMER erst die Gr��e dieser Eingabe abgefragt werden sollte. Falls diese den Puffer �bersteigt, kann einfach eine Fehlermeldung ausgegeben werden.
 *
 *
 */

int main() {

	char string0[] = " herangefuegt";
	char string1[] = "Hallo Welt!";													//Standardm��ig ist ein String in C++ ein "char-Array". Jedes Zeichen basiert auf einem ASCII (American Standard Code for Information Interchange) Code. Der nicht sichtbare "Nullbyte" (Null Character) verl�ngert das Array um eine Stelle.
	char string2[128] = "zzz";
	char string3[123] = "Anfang";
	int len = strlen(string1);														//"strlen()" gibt Stringl�nge an. Achtung, dies ist nicht die Arrayl�nge. Da dort immer der Null Character mit drin ist, ist die tats�chliche Arrayl�nge immer 1 h�her als die Stringl�nge.
	int cmp = strcmp(string1, string2);												//"strcmp()" vergleicht Strings nach alphabetischem Vorkommen. Ist der String nach dem Komma alphabetisch weiter hinten, so ist das Ergebnis eine "-1". Sind beide gleich "0". Liegt der String vor dem Komma weiter hinten "1". In der Praxis meist so, jedoch nicht im Standard. Standard: Gleich: 0, Sonst: <> 0.

	strcat(string3, string0);														//"strcat()" f�gt String nach dem Komma an String vor dem Komma an.
	strcpy(string2, string1);														//"strcpy()" kopiert String in einen anderen String. "strcpy(Der String in den kopiert wird, String der kopiert wird)".
	std::cout << "string: "  << string1  << " laenge: " << len << std::endl;
	std::cout << "string2: " << string2 << std::endl;
	std::cout << "cmp: "     << cmp     << std::endl;
	std::cout << string3     << std::endl;

	//Programmende
	int programmende;
	std::cout << "Wert eingeben und Enter druecken, um Programm zu beenden...";
	std::cin >> programmende;
	return 0;
}