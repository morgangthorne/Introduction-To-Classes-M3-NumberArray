// Introduction To Classes M3 NumberArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include "Header.h"

using namespace std;

int main()
{
    cout << "Construct test\n";

    //Default Constructor
    NumberArray Arr1;
    Arr1.Print();

    //Constructor with Params
    NumberArray Arr2(5);
    Arr2.Print();

    return 0;
}

