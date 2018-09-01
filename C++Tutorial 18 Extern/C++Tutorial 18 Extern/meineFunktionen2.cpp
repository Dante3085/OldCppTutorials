#include <iostream>;

extern int z;					//Sagt dem Programm, dass irgendwo im Sourcecode eine globale Variable namens z vorkommt und das diese hier verwendet werden soll.

void doSmth() {
std::cout << z << std::endl;
}