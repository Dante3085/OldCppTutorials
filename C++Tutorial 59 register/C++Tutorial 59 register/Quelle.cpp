#include <iostream>

/*"register": Wenn mann wei�, dass eine bestimmte Variable sehr h�ufig verwendet wird, kann diese ins Register gepackt werden, um noch schnelleren Zugriff zu erlangen.
*
*Registerspeicher: Speicher, der am n�chsten an der CPU sitzt. Sehr schnell, aber mit beschr�nkter Gr��e.
*
*Allerdings kann der Compiler register-Variablen zu nicht register-Variablen machen und umgekehrt. Somit ist das Keyword "register" komplett nutzlos. Der Compiler erledigt diese Aufgabe von selbst.
*/

int main() {

	int i = 100;

	system("pause");
	return 0;
}