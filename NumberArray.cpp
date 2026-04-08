#include "Header.h"

//constructor
NumberArray::NumberArray(int s) {
	if (s <= 0)
		size = Max_Size;
	else
		size = s;

	data = new double[size];

	for (int i = 0; i < size; i++)
		data[i] = 0.0;
}

//Destructor
NumberArray::~NumberArray() {
	delete[] data;
	
	cout << "Destructor called, memory released\n";
}