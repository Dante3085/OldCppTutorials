#include <iostream>;

int main() {

	int x  = 100;
	int &y = x;			//Aliasname bzw. Referenz von x. Gleicher Speicherplatz wird von x und y abgegriffen. Das heißt unter Anderem auch, dass ein Verändern von y gleichzeitig ein Verändern von x und umgekehrt bedeutet.

	y = 300;

	std::cout << x << std::endl;

	system("Pause");
	return 0;

}