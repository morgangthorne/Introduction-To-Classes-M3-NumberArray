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

    //Validation for set/get
    cout << "\nSet/Get Tests\n";

    Arr2.SetNumber(0, 2.0);
    Arr2.SetNumber(2, 6.0);
    Arr2.SetNumber(4, 10.0);

    cout << Arr2.GetNumber(0) << endl;
    cout << Arr2.GetNumber(2) << endl;
    cout << Arr2.GetNumber(4) << endl;
    
    //Invalid Index test
    Arr2.SetNumber(-1, 100);
    Arr2.SetNumber(5, 100);

    cout << "Invalid get: " << Arr2.GetNumber(-1) << endl;
    cout << "Invalid get: " << Arr2.GetNumber(5) << endl;
    
    //Stat Test
    cout << "\n Stat Test\n";

    NumberArray Arr3(5);

    Arr3.SetNumber(0, 2.0);
    Arr3.SetNumber(1, 4.0);
    Arr3.SetNumber(2, 6.0);
    Arr3.SetNumber(3, 8.0);
    Arr3.SetNumber(4, 10.0);

    Arr3.Print();

    cout << "Min: " << Arr3.GetMin() << endl;
    cout << "Max: " << Arr3.GetMax() << endl;
    cout << "Average: " << Arr3.GetAverage() << endl;
    
    return 0;
}

