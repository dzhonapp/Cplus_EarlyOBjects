/*
 
 Write a program that uses two identical arrays of eight integers. It should
 display the contents of the first array, then call a function to sort the array
 using an ascending order bubble sort modified to print out the array contents
 after each pass of the sort. Next the program should display the contents of the
 second array, then call a function to sort the array using an ascending order
 selection sort modified to print out the array contents after each pass of the
 sort.
 */
#include <iostream>
using namespace std;


//Functions


void displayArray(int array[], int size) // Function For displaying Array
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}


void bubble_Sort(int array[], int size) // BUBLE SORTING FUNCTION
{
    int temp; // Temporary variable which holds less number in array
    bool replace; // Flag.
    
    do
    {	replace = false;
        for (int z = 0; z < (size - 1); z++)  // Swapping procedure
        {
            if (array[z] > array[z + 1])
            {
                temp = array[z];
                array[z] = array[z + 1];
                array[z + 1] = temp;
                replace = true;
            }
            displayArray(array, size);
        }
    } while (replace); // When there is nothing to replace it will be false and quit.
}


void selectionSort(int array[], int size) // Selection Sort function. Takes two arguments arrayname and size.
{
    int leastIndex;
    int leastValue;
    
    for (int initial = 0; initial < (size - 1); initial++) // First Loop holding one value
    {
        leastIndex = initial;
        leastValue = array[initial];
        for (int i = initial + 1; i < size; i++) // Second loop comparing the value of first loop
        {
            if (array[i] < leastValue)
            {
                leastValue = array[i];
                leastIndex = i;
            }
        }
        array[leastIndex] = array[initial];
        array[initial] = leastValue;
        displayArray(array, size);
    }
}



int main()
{
    const int SIZE = 8;
    int Array1[SIZE] = {25, 4, 60, 13, 90, 73, 84, 45};
    int Array2[SIZE] = {25, 4, 60, 13, 90, 73, 84, 45};
    
    cout << endl<< "First ARRAY \n" <<endl;
    displayArray(Array1, SIZE);
    
    cout <<endl<< "FIRST ARRAY BUBBLE SORT\n"<<endl;
    bubble_Sort(Array1, SIZE);
    
    cout <<endl<< "Second ARRAY\n" << endl;
    displayArray(Array2, SIZE);
    
    cout << endl<<"SECOND ARRAY SELECTION SORT\n"<<endl;
    selectionSort(Array2, SIZE);
    
    return 0;
}

