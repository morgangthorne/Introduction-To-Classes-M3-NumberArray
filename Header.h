#pragma once
#ifndef NumberArray_H
#define NumberArray_H

#include <iostream>
#include <stdexcept>

using namespace std;


template <typename T>

class NumberArray {
private:
	int size;
	T* data;

	static const int Max_Size = 10;

public:
	//Constuct and Destruct
	NumberArray(int size = Max_Size);
	NumberArray(const NumberArray<T>& other);
	NumberArray<T>& operator=(const NumberArray<T>& other);
	~NumberArray();

	//Mutator
	void SetNumber(int index, T value);

	//Accessor
	T GetNumber(int index) const;

	//Stats
	T GetMin() const;
	T GetMax() const;
	double GetAverage() const;

	//Print
	void Print() const;

};



//constructor
template <typename T>
NumberArray<T>::NumberArray(int s) {
	if (s <= 0)
		size = Max_Size;
	else
		size = s;

	data = new T[size];

	for (int i = 0; i < size; i++)
		data[i] = T();
}

template <typename T>
NumberArray<T>::NumberArray(const NumberArray<T>& other) {
	size = other.size;
	data = new T[size];

	for (int i = 0; i < size; i++) {
		data[i] = other.data[i];
	}
}


//Assignmnet Operator
template <typename T>
NumberArray<T>& NumberArray<T>::operator=(const NumberArray<T>& other) {
	//Self Assignment Check
	if (this == &other)
		return *this;

	//Releases Old Memory
	delete[] data;

	//Copies Size
	size = other.size;
	
	//Allocates New Memory 
	data = new T[size];

	//Copies Values
	for (int i = 0; i < size; i++) {
		data[i] = other.data[i];
	}

	return *this;
}


//Destructor
template <typename T>
NumberArray<T>::~NumberArray() {
	delete[] data;

	cout << "\nDestructor called, memory released\n";
}

//Mutator
template <typename T>
void NumberArray<T>::SetNumber(int index, T value) {
	if (index < 0 || index >= size)
		throw out_of_range("Invalid index in SetNumber");

	data[index] = value;
}

//Accessor
template <typename T>
T NumberArray<T>::GetNumber(int index) const {
	if (index < 0 || index >= size)
		throw out_of_range("Invalid index in GetNumber");

	return data[index];
}

//Minimum
template <typename T>
T NumberArray<T>::GetMin() const {
	double min = data[0];

	for (int i = 1; i < size; i++) {
		if (data[i] < min)
			min = data[i];
	}

	return min;
}

//Maximum
template<typename T>
T NumberArray<T>::GetMax() const {
	double max = data[0];

	for (int i = 1; i < size; i++) {
		if (data[i] > max)
			max = data[i];
	}

	return max;
}

//Average
template <typename T>
double NumberArray<T>::GetAverage() const {
	double sum = 0.0;

	for (int i = 0; i < size; i++)
		sum += data[i];

	return sum / size;
}

//Print
template <typename T>
void NumberArray<T>::Print() const {
	for (int i = 0; i < size; i++)
		cout << data[i] << " ";

	cout << endl;
}

#endif