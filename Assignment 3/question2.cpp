//
//  main.cpp


//  Programmer:Berdimurat Mammedov (885701426)
//  Date:  03/11/2017
//  Description:
/*
 
 write programs for:the exercises 12 and 13  at the end of the chapter4. Here are those exercises.
 
 
 13. Personal Best
 Write a program that asks for the name of a pole vaulter and the dates and vault heights (in
 meters) of the athlete’s three best vaults. It should then report in height order (best ﬁrst),
 the date on which each vault was made, and its height.
 Input Validation: Only allow the program to accept values between 2.0 and 5.0 for
 the heights.
 */

#include <iostream> //preprocessor
#include <string>
#include <iomanip>
using namespace std;

int main() {
    
    string athlet;
    string date1, date2, date3;
    double height1, height2, height3;
    cout<< "Write name of athlet \n";
    cin>> athlet;
    cin.ignore();
    
    //---------------
    cout<<"Please enter the heights between 2 and 5 meters \n";
    cin>> height1;
    cin.ignore();
    while (height1>5.0 || height1<2.0)
    {
        cout<<"Please enter again, The height must be between 2 and 5 meters\n";
        cin>> height1;
    }
    
    cout<<"Please enter the date for Height 1 ";
    cin>> date1;
    //----------------------------------
    cout<<"Please enter the height 2 \n";
    cin>> height2;
    cin.ignore();
    
    while (height2>5 || height2<2){
        cout<<"Please enter again, The height must be between 2 and 5 meters\n";
        cin >> height2;
    }
    
    cout<<"Please enter the date for Height 2 ";
    cin>> date2;
    //----------------------------------
    cout<<"Please enter the height 3 \n";
    cin>> height3;
    cin.ignore();
    while (height3>5 || height3<2){
        cout<<"Please enter again, The height must be between 2 and 5 meters\n";
        cin>> height3;
    }
    
    cout<<"Please enter the date for Height 3 ";
    cin>> date3;
    //-------------------------------------
    if (height1>height2 && height2>height3) {
        cout << "-----------------------\n";
        
        cout << "Name: " << athlet << endl;
        cout << setprecision(1) << fixed << "1st: " <<  " HEIGHT: " <<height1  << " meters on " << date1  << endl;
        cout << setprecision(1) << fixed << "2nd: " <<  " HEIGHT: " <<height2  << "  meters on  " << date2  << endl;
        cout << setprecision(1) << fixed << "3rd: " <<  " HEIGHT: " <<height3  << "  meters on  " << date3  << endl;
        
    }
    
    else if (height2>height1 && height1>height3)
    {
        cout << "-----------------------\n";
        cout << "Name: " << athlet << endl;
        
        cout << setprecision(1) << fixed << "1st: " <<  " HEIGHT: " <<height2  << " meters on " << date2  << endl;
        cout << setprecision(1) << fixed << "2nd: " <<  " HEIGHT: " <<height1  << " meters on " << date1  << endl;
        cout << setprecision(1) << fixed << "3rd: " <<  " HEIGHT: " <<height3  << " meters on " << date3  << endl;
    }
    else if (height2>height1 && height3>height1 && height3<height2)
    {
        cout << "-----------------------\n";
        cout << "Name: " << athlet << endl;
        
        cout << setprecision(1) << fixed << "1st: " <<  " HEIGHT: " <<height2  << " meters on " << date2  << endl;
        cout << setprecision(1) << fixed << "2nd: " <<  " HEIGHT: " <<height3  << " meters on " << date3  << endl;
        cout << setprecision(1) << fixed << "3rd: " <<  " HEIGHT: " <<height1  << " meters on " << date1  << endl;
    }
    
    else if (height3 > height1 && height1 > height2)
    {
        cout << "-----------------------\n";
        cout << "Name: " << athlet << endl;
        cout << setprecision(1) << fixed << "1st: " <<  " HEIGHT: " <<height3  << " meters on " << date3  << endl;
        cout << setprecision(1) << fixed << "2nd: " <<  " HEIGHT: " <<height1  << " meters on " << date1  << endl;
        cout << setprecision(1) << fixed << "3rd: " <<  " HEIGHT: " <<height2  << " meters on " << date2  << endl;
    }
    else if (height3 > height1 && height1 < height2)
    {
        cout << "-----------------------\n";
        cout << "Name: " << athlet << endl;
        cout << setprecision(1) << fixed << "1st: " <<  " HEIGHT: " <<height3  << " meters on " << date3  << endl;
        cout << setprecision(1) << fixed << "2nd: " <<  " HEIGHT: " <<height2  << " meters on " << date2  << endl;
        cout << setprecision(1) << fixed << "3rd: " <<  " HEIGHT: " <<height1  << " meters on " << date1  << endl;
    }
    
    return 0;
}
