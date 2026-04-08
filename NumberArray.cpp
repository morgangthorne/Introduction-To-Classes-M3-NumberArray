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

//Mutator
void NumberArray::SetNumber(int index, double value) {
	if (index >= 0 && index < size)
		data[index] = value;
}

//Accessor
double NumberArray::GetNumber(int index) const {
	static double DefaultValue = 0.0;

	if (index >= 0 && index < size)
		return data[index];

	return DefaultValue;
}

//Minimum
double NumberArray::GetMin() const {



}