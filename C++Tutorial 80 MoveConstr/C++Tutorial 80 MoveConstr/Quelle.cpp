#include <iostream>
#include "DynamicArrayPROT.hpp"

/*"Move-Constructor": Kann sich Daten eines anderen Objektes nehmen, ohne das diese kopiert werden müssen. 
*
*RValues: Temporäre Werte.
*
*RValues und LValues Definition von Microsoft MSDN Website: Jeder C++-Ausdruck ist entweder ein lvalue oder einen rvalue. Ein lvalue verweist auf ein Objekt an, das über einen einzelnen Ausdruck hinaus
*beibehalten wird. Sie können sich einen lvalue als ein Objekt vorstellen, das über einen Namen verfügt. Alle Variablen, einschließlich nicht veränderbarer (const) Variablen, sind lvalues. Ein rvalue 
*ist ein temporärer Wert, der nicht über den Ausdruck hinaus beibehalten wird, der diesen nutzt.
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