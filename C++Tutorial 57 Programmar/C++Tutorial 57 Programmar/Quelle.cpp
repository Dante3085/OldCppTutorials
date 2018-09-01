#include <iostream>

/*"Programmargumente"(Kommandozeilenargument): Argumente bzw. Variablen, die direkt bei Programmstart an das Programm übergeben werden. Typosch bei Linux (Terminal). Windows (Cmd).
*Diese Argumente werden in den Parameterklammern der MainFunktion deklariert.
*"int name(z.B.: "argc")" gibt die Anzahl der Argumente an.
*"char *name(z.B.:argv)[]" gibt die Kommandozeilenargumente an. Jedes mit einem Leerzeichen getrennt.
*
*Mit cmd zu Ordner mit ".exe" navigieren.
*In cmd Befehl "cd" nutzen um zu navigieren.
*Dann im richtigen Ordner "exe" dieses Projekts ausführen. Falls Name mit Leerzeichen geschrieben, dann in "" setzen.
*
*An der Indexstelle "0" des C-String Arrays in den main Parameterklammern ist immer der Name der Programmexe gespeichert. Weitere Argumente können mit einem Leerzeichen getrennt eingegeben werden.
*/

int main(int argc, char *argv[]) {

	for (int i = 0; i < argc; i++) {			//Gibt Programmargumente aus.
		std::cout << argv[i] << std::endl;
	}

	system("pause");
	return 0;
}