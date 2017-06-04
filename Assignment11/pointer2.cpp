/*
 Author Berdimyrat Mammedov
 Id: 885701426
 Test Scores #2
 Modify the program of Programming Challenge 1 to allow the user to enter name-score
 pairs. For each student taking a test, the user types a string representing the name of the
 student, followed by an integer representing the student’s score. Modify both the sorting
 and average-calculating functions so they take arrays of structures, with each structure
 containing the name and score of a single student. In traversing the arrays, use pointers
 rather than array indices.
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


struct StudentStructure
{
    string Name;
    double Grade;
};



void getData(StudentStructure *, int);
void selectionSort(StudentStructure *, int);
double average(StudentStructure *, int);




int main()
{
    StudentStructure *StudentStructureArray;
    double Average;
    int students;
    
    
    
    cout << "HOW MUCH SCORE YOU WANT TO ENTER? ";
    cin  >> students;
    
    StudentStructureArray = new StudentStructure[students]; // What does this doing ? How it does?
    
    getData(StudentStructureArray, students);
    selectionSort(StudentStructureArray, students);
    Average = average(StudentStructureArray, students);
    cout<<"Printing Names and Scores Ordered! \n";
    for (int i = 0; i < students; i++)  //A bit later  PRINTINGS
    {
        cout<<*(&StudentStructureArray[i].Name)<< " has a grade : "
        <<*(&StudentStructureArray[i].Grade)<<endl;
    }
    //cout<<*(&StudentStructureArray[0].Grade)<<endl; // Address 0x100500008
    cout << fixed << showpoint << setprecision(2);
    cout << "AVERAGE : " << Average << endl;
    //cout<<&StudentStructureArray[0].Name<<endl;
    //cout<<*(&StudentStructureArray[1].Grade)<<endl; // important address then its value
    
    
    /*   for (int i=0; i<Scores; i++) {
     cout<<StudentStructureArray[i].Name<<endl;
     }
     
     I can't display anything here whats problem i donnt know, Maybe about mac. But anyway, Hope on WIn OS it will work.  logically its working up to avaraging and sorting.
     
     */
    delete [] StudentStructureArray;
    StudentStructureArray = 0;
    
    return 0;
}


void getData(StudentStructure *StudentStructureArray, int students) // DONE working perfect!
{
    cout << "NAME AND GRADE FOR EACH \n";
    for (int i = 0; i < students; i++)
    {
        cout << "STUDENT NUMBER:  " << (1+i) << endl;
        cout << "    NAME  : ";
        cin.ignore();
        cin>>*(&StudentStructureArray[i].Name);
        do
        {
            cout << "    GRADE :";
            cin  >> *(&StudentStructureArray[i].Grade);
            
            if (*(&StudentStructureArray[i].Grade) < 0)
            {
                cout << "BIGGER THAN  0.\n"
                << "Type again! ";
            }
            cout << endl;
        } while (*(&StudentStructureArray[i].Grade) < 0);
    }
}




void selectionSort(StudentStructure *StudentStructureArray, int students) // Selection Sort function. Takes two arguments arrayname and size.
{
    int leastIndex;
    int leastValue;
    string name;
    
    for (int initial = 0; initial < (students - 1); initial++) // First Loop holding one value
    {
        leastIndex = initial;
        leastValue = *(&StudentStructureArray[initial].Grade);
        name = *(&StudentStructureArray[initial].Name);
        
        for (int i = initial + 1; i < students; i++) // Second loop comparing the value of first loop
        {cout<<name<<endl;
            if (*(&StudentStructureArray[i].Grade) < leastValue)
                
            {
                leastValue = *(&StudentStructureArray[i].Grade);
                name = *(&StudentStructureArray[i].Name);
                leastIndex = i;
                
            }
        }
        *(&StudentStructureArray[leastIndex].Grade) = *(&StudentStructureArray[initial].Grade);
        *(&StudentStructureArray[leastIndex].Name) = *(&StudentStructureArray[initial].Name);
        *(&StudentStructureArray[initial].Grade) = leastValue;
        *(&StudentStructureArray[initial].Name) = name;
        
    }
}


/*
 void selectionSort(StudentStructure *StudentStructureArray, int students) // Selection Sort function. Takes two arguments arrayname and size.
 {
 int leastIndex;
 int leastValue;
 
 for (int initial = 0; initial < students; initial++) // First Loop holding one value
 {
 
 leastIndex = initial;
 //double temp;
 void *ptraddress; // if you change the address of second object with first in array will object[0] be second ?
 ptraddress = &StudentStructureArray[initial];
 // double valueIndex =*(&StudentStructureArray[leastIndex].Grade); //Later usage
 leastValue = *(&StudentStructureArray[initial].Grade);
 
 //cout<<*(&StudentStructureArray[initial].Grade)<<"  Grade first Student "<<endl;
 //cout<<*(&StudentStructureArray[initial+1].Grade)<<" Grade Second student "<<endl;
 for (int i = initial+1; i < students; i++) // Second loop comparing the value of first loop
 {
 //cout<<*(&StudentStructureArray[initial].Grade)<<" Second loop Printing Grade "<<endl; //This Part works
 //cout<<" Prints least value " <<leastValue<<endl;
 if (*(&StudentStructureArray[i].Grade) < leastValue)
 {
 
 
 leastValue = *(&StudentStructureArray[i].Grade);
 leastIndex = i+1;
 }
 }
 *(&StudentStructureArray[leastIndex].Grade) = *(&StudentStructureArray[initial].Grade);
 *(&StudentStructureArray[initial].Grade) = leastValue;
 //*(&StudentStructureArray[count].Grade) = temp;
 
 //array[leastIndex] = array[initial];
 //array[initial] = leastValue;
 }
 }
 
 */

double average(StudentStructure *StudentStructureArray, int students) // DONE working perfect!
{
    int Total = 0;
    
    for (int i = 0; i < students; i++)
    {
        Total+=*(&StudentStructureArray[i].Grade);
    }
    
    return Total / students;
}



