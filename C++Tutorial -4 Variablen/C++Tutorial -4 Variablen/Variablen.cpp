#include <iostream>
#include <climits>

int main() {

	/*In C++ ist die Speichergröße von Variablen (Bytegröße) abhängig vom Compiler der gerade benutzt wird. Anders als in Java gibt es in C++ also keinen allgemeinen Standard der bestimmt wie viel Speicherplatz Variablen haben.
	 *Es ist also sinnvoll zu Beginn der Programmierarbeiten den Wertebereich von Datentypen zu überprüfen (Minimal- und Maximalwert).
	 */

	//Datentypen von Klein nach Groß sortiert. Die folgenden Datentypen speichern nur ganze Zahlen ab.
	short y = 3;								
	int i = 5;
	long z = 2222222;
	long long a = 3333333333333333;
	std::cout << "short: "     << y << std::endl;
	std::cout << "int: "	   << i << std::endl;
	std::cout << "long: "      << z << std::endl;
	std::cout << "long long: " << a << std::endl;
	i += 2;
	std::cout << i << std::endl;

	//Datentypen von Klein nach Groß sortiert. Die folgenden Datentypen speichern auch Kommazahlen ab.
	float pi = 3.14;
	double e = 2.71;
	long double ld = 2.43245252443126243432143242;
	std::cout << "float Pi: "       << pi << std::endl;
	std::cout << "double e: "       << e  << std::endl;
	std::cout << "long double ld: " << ld << std::endl;

	//Wertebereiche der Datentypen
	std::cout << "shortMin: "	    << SHRT_MIN  << "shortMax: "       << SHRT_MAX  << std::endl;							//"\t" erzeugt einen Tabulatorschritt.
	std::cout << "intMin: "		    << INT_MIN   << "intMax: "         << INT_MAX   << std::endl;
	std::cout << "longMin: "	    << LONG_MIN  << "longMax: "        << LONG_MAX  << std::endl;
	std::cout << "long longMin: "   << LLONG_MIN << "long longMax: "   << LLONG_MAX << std::endl;
	std::cout << "floatMin: "       << FLT_MIN   << "floatMax: "       << FLT_MAX   << std::endl;
	std::cout << "doubleMin: "      << DBL_MIN   << "doubleMax: "      << DBL_MAX   << std::endl;
	std::cout << "long doubleMin: " << LDBL_MIN  << "long doubleMax: " << LDBL_MAX  << std::endl;

	//Bytegrößen der Datentypen
	std::cout << "shortBytegroesse: "       << sizeof(short)	   << std::endl;
	std::cout << "intBytegroesse: "         << sizeof(int)		   << std::endl;
	std::cout << "longBytegroesse: "	    << sizeof(long)        << std::endl;
	std::cout << "long longBytegroesse: "   << sizeof(long long)   << std::endl;
	std::cout << "floatBytegroesse: "		<< sizeof(float)       << std::endl;
	std::cout << "doubleBytegroesse: "      << sizeof(double)      << std::endl;
	std::cout << "long doubleBytegroesse: " << sizeof(long double) << std::endl;

	//Hello wird in erster Zeile ausgegeben. World direkt ein drunter. 
	std::cout << "Hello" << std::endl;
	std::cout << "World" << std::endl;

	//Sorgt dafür, dass das Programm auf eine Benutzereingabe wartet und sich nicht sofort wieder schließt.
	system("Pause");

	//Rückgabewert für "Alles in Ordnung". Keine Fehler.
	return 0;
}