#include <iostream>
#define GEHEIMEZAHL 42

/*"#undef": Kann vorher verwendetes Makro unwirksam machen bzw. l�schen.
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

#undef GEHEIMEZAHL												//Sorgt daf�r das "GEHEIMEZAHL" nach Programmablauf gel�scht wird und somit au�erhalb dieser Datei nicht benutzbar ist.