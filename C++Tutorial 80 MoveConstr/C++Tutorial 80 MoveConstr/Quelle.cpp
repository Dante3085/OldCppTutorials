#include <iostream>
#include "DynamicArrayPROT.hpp"

/*"Move-Constructor": Kann sich Daten eines anderen Objektes nehmen, ohne das diese kopiert werden m�ssen. 
*
*RValues: Tempor�re Werte.
*
*RValues und LValues Definition von Microsoft MSDN Website: Jeder C++-Ausdruck ist entweder ein lvalue oder einen rvalue. Ein lvalue verweist auf ein Objekt an, das �ber einen einzelnen Ausdruck hinaus
*beibehalten wird. Sie k�nnen sich einen lvalue als ein Objekt vorstellen, das �ber einen Namen verf�gt. Alle Variablen, einschlie�lich nicht ver�nderbarer (const) Variablen, sind lvalues. Ein rvalue 
*ist ein tempor�rer Wert, der nicht �ber den Ausdruck hinaus beibehalten wird, der diesen nutzt.
*(https://msdn.microsoft.com/de-de/library/f90831hc.aspx)
*/

int main() {
	
	DynamicArray d(100);
	d[5] = 100;

	DynamicArray e(d);

	std::cout << "Gleich sollte move kommen!" << std::endl;
	DynamicArray f = d + e;
	std::cout << "Move ist vorbei!" << std::endl;

	std::cout << f[5] << std::endl;

	system("pause");
	return 0;
}