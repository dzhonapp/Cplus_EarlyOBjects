
/*
 Author: Berdimyrat Mammedov
 Date: 22 March 2017
 Description:
 25. using Files - Population Bar Chart
 write a program that produces a bar chart showing the population growth of Prairieville, a small town in Midwest, at 20 year intervals during the past 100 years. the program should read in the population figures (rounded to the nearest 1000 people) for 1910, 1930, 1950, 1970, 1990, and 2010 from a file. For each year it should display the date and a bar consisting of one asterisk for each 1000 people. The data can be found in the People.txt file.
 Here is an example of how the chart migt begin:
 Praireville pupulation growth
 (each * represents 1000 people)
 
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;
int years=1910;
int main()
{
    
    ifstream populFile; // File stream object
    int popul;
    
    // Open the input file
    populFile.open("People.txt");
    
    while(populFile.is_open()){
       
    
    cout << "Population Growth\n" << "(each * represents 1000 people)\n";
    
    while( years<=2010)
    {
        populFile >> popul;
        
        cout << years << ' ';
        
        
        for (int i = 1; i < popul; i+=1000)
        {
            cout << '*';
        }
        cout << endl;
        years+=20;
    }
    
    // Close the file
    populFile.close();
     }
    else {
    cout<< "Can't reach to file ";
    }
    return 0;
}