#pragma once
#include <iostream>
#include "DynamicArrayPROT.hpp"

DynamicArray::DynamicArray() {
	size = 10;
	data = new int[size];
}

DynamicArray::DynamicArray(int size) : size(size) {
	data = new int[size];
}

DynamicArray::~DynamicArray() {
	delete[] data;
}

DynamicArray::DynamicArray(const DynamicArray &other) {
	size = other.size;
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = other.data[i];
	}
}

DynamicArray::DynamicArray(DynamicArray &&other) {
	data = other.data;
	size = other.size;
	other.data = nullptr;	
	std::cout << "Bin in Move-Constructor" << std::endl;
}

int DynamicArray::getSize() const{
	return size;
}

int DynamicArray::get(int index) const{
	return data[index];
}

void DynamicArray::set(int index, int value) {
	data[index] = value;
}

int &DynamicArray::operator[](int index) {		
	return data[index];
}

DynamicArray DynamicArray::operator+(const DynamicArray &other) {		//"+" Operator wird neu definiert. Wir können jetzt "Dynamic Arrays" mit gleicher Größe miteinander addieren.
	if (size != other.size) {
		std::cerr << "Fehler! Dynamic Arrays muessen gleich groß sein" << std::endl;
		exit(10);			//Fehlercode "10" wird übergeben bzw. Programm stürtzt einfach ab.
	}

	DynamicArray retVal(size);	//"retVal" = return Value.
	for (int i = 0; i < size; i++) {
		retVal[i] = data[i] + other.data[i];
	}

	return retVal;
}