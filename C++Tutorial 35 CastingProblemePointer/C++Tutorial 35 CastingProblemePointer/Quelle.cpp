#include <iostream>

/*Gut designte Funktionen sollten niemals über 200 Zeilen Code hinausgehen.
 *
 *In der Praxis sind die Speicheradressen der Pointer meistens uninteressant.
 *
 *
 */

int main() {

	float a = 5.124f;
	float *p = &a;

	//100 Zeilen Code

	//int z = (int)p;							//Hier wurde nur der Pointer selbst gecastet und nicht a. Also lediglich die Speicheradresse des Pointers. Das "*" sollte nicht vergessen werden. Dann wird auch das übergeben, auf das der Pointer zeigt, nämlich a.
	//int z = (int)*p;							//Hier wird tatsächlich das, auf das der Pointer zeigt übergeben (a).
	int z = static_cast<int>(p);				//Durch "static_cast <int>" erkennt Visual Studio direkt, dass hier nur der Pointer gecastet wird.

	//100 Zeilen Code

	std::cout << z << std::endl;

	system("pause");
	return 0;
}