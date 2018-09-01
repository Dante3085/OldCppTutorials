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

	/*Dekonstruktorprototypen*/
	~DynamicArray();

	/*Funktionsprototypen*/
	int getSize() const;
	int get(int index) const;
	void set(int index, int value);

};