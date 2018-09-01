#include <iostream>
#define GEHEIMEZAHL 42

/*"#undef": Kann vorher verwendetes Makro unwirksam machen bzw. löschen.
 *
 *
 *
 *
 *
 *
 */

int main() {



	//Programmeende
	system("pause");
	return 0;
}

#undef GEHEIMEZAHL												//Sorgt dafür das "GEHEIMEZAHL" nach Programmablauf gelöscht wird und somit außerhalb dieser Datei nicht benutzbar ist.