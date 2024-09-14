#include <iostream>
using namespace std;

void PopulateArray(double *&, int); // Populate array with user input
void OutputArray(const double *&, int);  // Output array on one line
double SumArray(const double *&, int);   // Return array sum

int main()
{
    // Initialize variables
    int ARRAY_SIZE = 5;
    double *dArrayPtr = new double[ARRAY_SIZE]; // Allocate array of 5 ints

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
void PopulateArray(double *&arrPtr, int arrSize)
{
    // For array size, loop with cin to get double values
    for (size_t i = 0; i < arrSize; i++)
    {
        cout << endl
             << "Please enter a double: ";
        cin >> *(arrPtr + i);
    }
}

// Output array on one line
void OutputArray(const double *&arrPtr, int arrSize)
{
    // For array size, output each value in some kind of formatted way
    cout << "Array: {";
    for (size_t i = 0; i < arrSize; i++)
    {
        if (i > 0) cout << ", "; // Add ',' and ' ' for each additional value after the first
        cout << *(arrPtr + i);
    }
    cout << "}" << endl;
}

// Return array sum
double SumArray(const double *&arrPtr, int arrSize)
{
    // Just return of the sum of the darn thing
}