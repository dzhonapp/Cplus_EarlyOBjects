
/*
 Author Berdimyrat Mammedov:
 Id; 885701426
 Descripion of programm
 1. Test Scores #1
 Write a program that dynamically allocates an array large enough to hold a user-deﬁned
 number of test scores. Once all the scores are entered, the array should be passed to a
 function that sorts them in ascending order. Another function should be called that
 calculates the average score. The program should display the sorted list of scores and
 averages with appropriate headings. Use pointer notation rather than array notation
 whenever possible.
 Input Validation: Do not accept negative numbers for test scores.
 */


#include <iostream>
#include <iomanip>
using namespace std;
//Functions
void selectionSort(double *array, int size) // Selection Sort function. Takes two arguments arrayname and size.
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
        
    }
}

double avgScore (double *arr, int size)
{
    double total = 0,average;
    int numTest;
    for (int count = 0; count < size; count++)
    {
        total += arr[count];
    }
    average = total / size;
    return average;
}
int numTest;

int main()
{
    double *testScore, total = 0.0, average;
    int count;
    
    cout << "How many test would you like to enter? "<<endl;
    cin >> numTest;
    testScore = new double[numTest]; //Adress of new array with the length test number!
    //Asking for score
    cout << "Enter the test scores. "<<endl;
    for (count = 0; count < numTest; count++)
    {
        //Display score
        cout << "Test Score " << (count + 1) << ": ";
        cin >> testScore[count];
        // Input validation. Only numbers between 0-100
        while (testScore[count]<0 || testScore[count]>100)
        {
            cout << "Enter test score between 0-100 " << endl;
            cout << "Please enter again: ";
            cin >> testScore[count];
        }
    }
    
    selectionSort(testScore, numTest); // Sorting
    average = avgScore(testScore, numTest); //Average of array
    cout << fixed << showpoint << setprecision(2);
    cout << "The test scores, soreted : "<<endl;
    for (count = 0; count < numTest; count++)
        cout << testScore[count] << " ";
    cout << endl;
    cout << "The average is: " << average << endl;
    delete [] testScore;
    testScore = 0;
    cout<<"DONE"<<endl;
    cout<<"EXIT"<<endl;
    return 0;
}


