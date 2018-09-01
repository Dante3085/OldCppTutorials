#include <iostream>;

//Casting: Das Überführen einer Variable eines gewissen Datentyps in einen anderen Datentyp.

int main() {

	double p = 3.5;
	int b = (int)p;					//"C-Style casting" (Kommt von Programmiersprache C).
	int b = static_cast<int>(p);	//"static_cast", was vorzugsweise verwendet werden sollte.

	std::cout << b << std::endl;

	system("Pause");
	return 0;

}