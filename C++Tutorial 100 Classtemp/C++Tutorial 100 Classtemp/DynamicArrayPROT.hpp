#pragma once

template <typename T>				//"T" ist, wie wir es vorher bei den normalen Templates kennengelernt haben, ein Platzhalter für den Datentyp.

class DynamicArray {
private:
	T *data;
	int size;
public:
	
	DynamicArray();								
	DynamicArray(int size);						
	DynamicArray(const DynamicArray<T> &other);
	DynamicArray(DynamicArray<T> &&other);

	
	~DynamicArray();

	
	int getSize() const;
	T get(int index) const;
	void set(int index, T value);
	T &operator[] (int index);
	DynamicArray<T> operator+(const DynamicArray<T> &other);
	DynamicArray<T> &operator = (const DynamicArray<T> &other);
	DynamicArray<T> &operator = (DynamicArray<T> &&other);
};

/*hpp und cpp Trennung funktioniert mit Klassentemplates nicht mehr. Deshalb muss alles in einer Datei sein.*/

template <typename T>
DynamicArray<T>::DynamicArray() {
	size = 10;
	data = new T[size];
}

template <typename T>
DynamicArray<T>::DynamicArray(int size) : size(size) {
	data = new T[size];
}

template <typename T>
DynamicArray<T>::~DynamicArray() {
	delete[] data;
}

template <typename T>
DynamicArray<T>::DynamicArray(const DynamicArray<T> &other) {
	size = other.size;
	data = new T[size];
	for (int i = 0; i < size; i++) {
		data[i] = other.data[i];
	}
}

template <typename T>
DynamicArray<T>::DynamicArray(DynamicArray<T> &&other) {
	data = other.data;
	size = other.size;
	other.data = nullptr;
	std::cout << "Bin in Move-Constructor" << std::endl;
}

template <typename T>
int DynamicArray<T>::getSize() const {
	return size;
}

template <typename T>
T DynamicArray<T>::get(int index) const {
	return data[index];
}

template <typename T>
void DynamicArray<T>::set(int index, T value) {
	data[index] = value;
}

template <typename T>
T &DynamicArray<T>::operator[](int index) {
	return data[index];
}

template <typename T>
DynamicArray<T> DynamicArray<T>::operator+(const DynamicArray<T> &other) {
	if (size != other.size) {
		/*std::cerr << "Fehler! Dynamic Arrays muessen gleich groß sein" << std::endl;	//Bessere Lösung ist es eine Exception zu schmeißen.
		exit(10);*/																		//Bessere Lösung ist es eine Exception zu schmeißen.#
		/*std::string wurf = "fehler";
		throw wurf;*/	//Wir werfen einen String.
		throw 13;		//Wir werfen eine int Zahl.
	}

	DynamicArray<T> retVal(size);
	for (int i = 0; i < size; i++) {
		retVal[i] = data[i] + other.data[i];
	}

	return retVal;
}

template <typename T>
DynamicArray<T> &DynamicArray<T>::operator=(const DynamicArray<T> &other) {
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

template <typename T>
DynamicArray<T> &DynamicArray<T>::operator = (DynamicArray<T> &&other) {
	if (&other == this) {
		return *this;
	}

	delete[] data;
	data = other.data;
	other.data = nullptr;
	return *this;
}