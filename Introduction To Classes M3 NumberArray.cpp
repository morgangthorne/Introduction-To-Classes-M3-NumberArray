//Filename:  Introduction To Classes M3 NumberArray.cpp 
//Programmer: Morgan Thorne
//Date: April 2026

#include <iostream>
#include <random>
#include "Header.h"

using namespace std;

int main()
{
    cout << "Construct test\n";

    //Default Constructor
    NumberArray<double> Arr1;
    Arr1.Print();

    //Constructor with Params
    NumberArray<double> Arr2(5);
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
    try {
        Arr2.SetNumber(-1, 100);
    }
    catch (const out_of_range& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
    try {
        Arr2.SetNumber(5, 100);
    }
    catch (const out_of_range& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
    try {
        cout << Arr2.GetNumber(-1) << endl;
    }
    catch (const out_of_range& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
    try {
        cout << Arr2.GetNumber(5) << endl;
    }
    catch (const out_of_range& e) {
        cout << "Exception caught: " << e.what() << endl;
    }











    //Stat Test
    cout << "\n Stat Test\n";

    NumberArray<double> Arr3(5);

    Arr3.SetNumber(0, 2.0);
    Arr3.SetNumber(1, 4.0);
    Arr3.SetNumber(2, 6.0);
    Arr3.SetNumber(3, 8.0);
    Arr3.SetNumber(4, 10.0);

    Arr3.Print();

    cout << "Min: " << Arr3.GetMin() << endl;
    cout << "Max: " << Arr3.GetMax() << endl;
    cout << "Average: " << Arr3.GetAverage() << endl;

    //Copy Contructor Test 
    cout << "\nCopy Constructor Test\n";

    NumberArray<double> Original(3);

    Original.SetNumber(0, 1.1);
    Original.SetNumber(1, 2.2);
    Original.SetNumber(2, 3.3);

    cout << "Original Array:\n";
    Original.Print();

    NumberArray<double> Copy(Original);

    cout << "Copied Array:\n";
    Copy.Print();

    //Assignment Operator Test
    cout << "\nAssignment Operator Test\n";

    NumberArray<double> First(3);

    First.SetNumber(0, 5.5);
    First.SetNumber(1, 6.6);
    First.SetNumber(2, 7.7);

    NumberArray<double> Second(3);

    Second = First;

    cout << "First Array:\n";
    First.Print();

    cout << "Second Array After Assignment:\n";
    Second.Print();

    //Modify The Original
    First.SetNumber(1, 100.0);

    cout << "\nAfter Modifying First Array:\n";

    cout << "First Array:\n";
    First.Print();

    cout << "Second Array:\n";
    Second.Print();

    //Self Assignment Test
    cout << "\nSelf Assignment Test\n";
    
    First = First;
    
    First.Print();
    
    //Modify the original
    Original.SetNumber(0, 99.9);

    cout << "\nAfter Modifying Original:\n";

    cout << "Original Array:\n";
    Original.Print();

    cout << "Copied Array:\n";
    Copy.Print();


    
    //Randomized Data Test
    cout << "\nRandom Data Test\n";

    NumberArray<double> Arr4(10);

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dist(0.0, 100.0);

    for (int i = 0; i < 10; i++)
        Arr4.SetNumber(i, dist(gen));

    Arr4.Print();

    cout << "Min: " << Arr4.GetMin() << endl;
    cout << "Max: " << Arr4.GetMax() << endl;
    cout << "Average: " << Arr4.GetAverage() << endl;
    
    //Destructor Test
    cout << "\nDestructor Test\n";
    
    { 
        NumberArray<double> temp(5);
        temp.Print();
    //Destructor should be called here
    }
    
    cout << "\nEdge Case Test\n";

    NumberArray<double> Arr5(1);
    Arr5.SetNumber(0, -3.5);

    Arr5.Print();

    cout << "Min: " << Arr5.GetMin() << endl;
    cout << "Max: " << Arr5.GetMax() << endl;
    cout << "Average: " << Arr5.GetAverage() << endl;

    return 0;
}

