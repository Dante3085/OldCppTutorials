#pragma once
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

DynamicArray::DynamicArray(const DynamicArray &other) {			//Neuer Copy-Konstruktor. Sorgt dafür das der dynamische Speicher des Originals nicht an die Kopie weitergegeben wird, sondern ein neuer mit selbem Inhalt erzeugt wird. So kann dieser vom Destruktor auch eigenst gelöscht werden.
	size = other.size;
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = other.data[i];
	}
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