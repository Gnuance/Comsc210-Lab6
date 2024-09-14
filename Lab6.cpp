#include <iostream>
#include <iomanip>
using namespace std;

void PopulateArray(double *&, int); // Populate array with user input
void OutputArray(double *&, int);  // Output array on one line
double SumArray(double *&, int);   // Return array sum

int main()
{
    // Initialize variables
    int ARRAY_SIZE = 5;
    double *dArrayPtr = new double[ARRAY_SIZE]; // Allocate array of 5 ints

    PopulateArray(dArrayPtr, ARRAY_SIZE); // Call function to populate array
    OutputArray(dArrayPtr, ARRAY_SIZE); // Call to output array
    cout << "Sum = " << fixed << setprecision(2) << SumArray(dArrayPtr, ARRAY_SIZE) << endl; // Output sum

    // Deallocate heap elements and nullify pointers
    delete [] dArrayPtr;
    dArrayPtr = nullptr;

    return 0;
}

// Populate array with user input
void PopulateArray(double *& arrPtr, int arrSize)
{
    // For array size, loop with cin to get double values
    for (size_t i = 0; i < arrSize; i++)
    {
        cout << "Please enter a double: ";
        cin >> *(arrPtr + i);
    }
}

// Output array on one line
void OutputArray(double *& arrPtr, int arrSize)
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
double SumArray(double *& arrPtr, int arrSize)
{
    // Just return of the sum of the darn thing
    double sum = 0.0;
    for (size_t i = 0; i < arrSize; i++)
    {
        sum += *(arrPtr + i);
    }
    return sum;
}