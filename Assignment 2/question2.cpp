//
//  main.cpp


 //  Programmer:Berdimurat Mammedov (885701426)
 //  Date:  03/03/2017
 //  Description:
 /*
 
  
  Program 2
  
  Average Rainfall  Write a program that calculates the average montly rainfall for three months. The program should ask the user to enter the name of each month, such as June or July, and the amount of rain (in inches) that fell that montsh. The program should display a message similar to the following:  The average monthly rainfall for June, July, and August was 6.72 inches.
  */

#include <iostream> //preprocessor
#include <string>
using namespace std;

int main() {
    string month1, month2, month3;
    float rain_fall1, rain_fall2, rain_fall3, average;
    cout<<"Enter month 1 \n ";
    cin>>month1;
    cout <<"Enter rainfall amount for: "<<month1<< endl;
    cin>> rain_fall1;
    cout<<"Enter month 2 \n ";
    cin>> month2;
    cout <<"Enter rainfall amount for: "<<month2<< endl;
    cin>> rain_fall2;
    cout<<"Enter month 3 \n ";
    cin>> month3;
    cout <<"Enter rainfall amount for: "<<month3<< endl;
    cin >> rain_fall3;
    cout<<"The average rainfall for: "<< month1<<", "<< month2 << " and "<<month3 <<endl;
    average=(rain_fall1+rain_fall2+rain_fall3)/3;
    cout<< average<<" inches" <<"\n";
    
   
    return 0;
}
