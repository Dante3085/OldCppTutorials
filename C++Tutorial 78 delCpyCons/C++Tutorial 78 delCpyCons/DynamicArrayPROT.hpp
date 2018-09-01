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
	DynamicArray(const DynamicArray &other) = delete;	//Löscht den Copy-Constructor. Nicht vergessen die Implementierung zu löschen oder auszukommentieren!

	/*Dekonstruktorprototypen*/
	~DynamicArray();

	/*Funktionsprototypen*/
	int getSize() const;
	int get(int index) const;
	void set(int index, int value);

};