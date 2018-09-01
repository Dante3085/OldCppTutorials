#pragma once

class Lebewesen {
private:

public:
	void virtual makeSound() = 0; //"= 0" deklariert diese Methode als "pure virtual". Damit auch diese Klasse als "abstract" bzw. nicht instanziierbar.
};