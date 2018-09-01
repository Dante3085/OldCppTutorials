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

int DynamicArray::getSize() const{
	return size;
}

int DynamicArray::get(int index) const{
	return data[index];
}

void DynamicArray::set(int index, int value) {
	data[index] = value;
}