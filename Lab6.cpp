#include <iostream>
using namespace std;

void PopulateArray(double *&);     // Populate array with user input
void OutputArray(const double *&); // Output array on one line
double SumArray(const double *&);  // Return array sum

int main()
{
    // Initialize variables
    // int x = 5, y = 10;
    double *dArrayPtr = new double[5];

    int *yPtr = new int(10);

    // Console print before swap
    // cout << "x = " << x << "  | y = " << y << endl;
    cout << "xPtr = " << *xPtr << "  | yPtr = " << *yPtr << endl;

    cout << "Swapping...\n";
    // int sum = swap(x, y);
    int sum = swap(xPtr, yPtr); // Swap pointers

    // Console print after swap
    // cout << "x = " << x << " | y = " << y << endl;
    cout << "xPtr = " << *xPtr << "  | yPtr = " << *yPtr << endl;
    cout << "sum = " << sum << endl;

    // Deallocate heap elements and nullify pointers
    delete xPtr, yPtr;
    xPtr = nullptr;
    yPtr = nullptr;

    return 0;
}

// Populate array with user input
void PopulateArray(double *&arrPtr)
{
    // For array size, loop with cin to get double values
}
// Output array on one line
void OutputArray(const double *&arrPtr)
{
    // For array size, output each value in some kind of formatted way
}
// Return array sum
double SumArray(const double *&arrPtr)
{
    // Just return of the sum of the darn thing
}