#include <iostream>;

int main() {

	int x  = 100;
	int &y = x;			//Aliasname bzw. Referenz von x. Gleicher Speicherplatz wird von x und y abgegriffen. Das hei�t unter Anderem auch, dass ein Ver�ndern von y gleichzeitig ein Ver�ndern von x und umgekehrt bedeutet.

	y = 300;

	std::cout << x << std::endl;

	system("Pause");
	return 0;

}