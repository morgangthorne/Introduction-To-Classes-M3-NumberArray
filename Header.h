#pragma once
#ifndef NumberArray_H
#define NumberArray_H

#include <iostream>

using namespace std;

class NumberArray {
private:
	int size;
	double* data;

	static const int Max_Size = 10;

public:
	//Constuct and Destruct
	NumberArray(int size = Max_Size);
	~NumberArray();

	//Mutator
	void SetNumber(int index, double value);

	//Accessor
	double GetNumber(int index) const;

	//Stats
	double GetMin() const;
	double GetMax() const;
	double GetAverage() const;

	//Print
	void Print() const;

};

#endif