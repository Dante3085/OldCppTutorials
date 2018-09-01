#pragma once

/*Klassenprototyp*/

class DynamicArray {
private:
	int *data;
	int size;
public:
	/*Konstruktorprototypen*/
	DynamicArray();								//Default- oder Standardkonstruktor.
	DynamicArray(int size);						//Konstruktor mit Parameter.
	DynamicArray(const DynamicArray &other);	//Copy-Constructor.
	DynamicArray(DynamicArray &&other);			//"&&" = Es handelt sich um einen RValue. Dieser Konstruktor ist ein "Move-Constructor". Kann sich Daten eines anderen Objektes nehmen, ohne das diese kopiert werden müssen.

	/*Dekonstruktorprototypen*/
	~DynamicArray();

	/*Funktionsprototypen*/
	int getSize() const;
	int get(int index) const;
	void set(int index, int value);
	int &operator[] (int index);
	DynamicArray operator+(const DynamicArray &other);

};