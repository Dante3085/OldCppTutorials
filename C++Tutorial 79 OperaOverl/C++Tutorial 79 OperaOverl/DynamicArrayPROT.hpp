#pragma once

/*Klassenprototyp*/

class DynamicArray {
private:
	int *data;
	int size;
public:
	/*Konstruktorprototypen*/
	DynamicArray();
	DynamicArray(int size);
	DynamicArray(const DynamicArray &other) = delete;

	/*Dekonstruktorprototypen*/
	~DynamicArray();

	/*Funktionsprototypen*/
	int getSize() const;
	int get(int index) const;
	void set(int index, int value);
	int &operator[] (int index);		//"[]" ist der Operator, der überladen wird.

};