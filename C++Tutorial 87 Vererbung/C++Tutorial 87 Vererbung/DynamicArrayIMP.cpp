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

DynamicArray DynamicArray::operator+(const DynamicArray &other) {		
	if (size != other.size) {
		/*std::cerr << "Fehler! Dynamic Arrays muessen gleich groß sein" << std::endl;	//Bessere Lösung ist es eine Exception zu schmeißen.
		exit(10);*/																		//Bessere Lösung ist es eine Exception zu schmeißen.#
		/*std::string wurf = "fehler";
		throw wurf;*/	//Wir werfen einen String.
		throw 13;		//Wir werfen eine int Zahl.
	}

	DynamicArray retVal(size);	
	for (int i = 0; i < size; i++) {
		retVal[i] = data[i] + other.data[i];
	}

	return retVal;
}

DynamicArray &DynamicArray::operator=(const DynamicArray &other) {
	if (&other == this) {
		return *this;
	}

	if (other.size != size) {
		delete[] data;
		size = other.size;
		data = new int[size];
	}

	for (int i = 0; i < size; i++) {
		data[i] = other.data[i];
	}

	return *this;
}

DynamicArray &DynamicArray::operator = (DynamicArray &&other) {
	if (&other == this) {
		return *this;
	}

	delete[] data;
	data = other.data;
	other.data = nullptr;
	return *this;
}