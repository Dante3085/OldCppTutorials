#include <iostream>

/*"reinterpret_cast": Sorgt daf�r, dass die Daten nicht manipuliert werden, aber als anderer Datentyp interpretiert werden.
Anwendungsbeispiele: Wenn bei Spieleengine Inputs in bestimmter Form interpretiert werden m�ssen.
*/

int main() {

	int *iPtr = new int(128);
	float *fPtr = reinterpret_cast<float*>(iPtr);
	int *iiPtr = reinterpret_cast<int*>(fPtr);

	std::cout << *iPtr << "\n" << *fPtr << "\n" << *iiPtr << "\n" <<  std::endl;

	*iPtr = 132523;

	std::cout << *iPtr << "\n" << *fPtr << "\n" << *iiPtr << std::endl;

	system("pause");
	return 0;
}