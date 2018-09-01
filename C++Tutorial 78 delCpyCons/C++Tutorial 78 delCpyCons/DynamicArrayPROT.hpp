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
	DynamicArray(const DynamicArray &other) = delete;	//L�scht den Copy-Constructor. Nicht vergessen die Implementierung zu l�schen oder auszukommentieren!

	/*Dekonstruktorprototypen*/
	~DynamicArray();

	/*Funktionsprototypen*/
	int getSize() const;
	int get(int index) const;
	void set(int index, int value);

};