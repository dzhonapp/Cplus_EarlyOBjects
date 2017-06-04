/*
 Author: Berdimyrat Mammeodv
 Organization: West LA College
 Data: May 28, 2017
 Description:
 Page 786 Exercise 4 (Number of Days Worked)
 Design a class called NumDays. The class’s purpose is to store a value that represents a
 number of work hours and convert it to a number of days. For example, 8 hours would   be converted to 1 day,
 12 hours would be converted to 1.5 days,
 and 18 hours would be converted to 2.25 days.
 The class should have a constructor that accepts a number of hours, as well as member functions for storing and retrieving the hours and days.
 
 The class should also have the following overloaded /override operators:
 • The addition operator +.  The number of hours in the sum of two objects is the sum
 of the number of hours in the individual objects.
 • The subtraction operator -. The number of hours in the difference of two objects X
 and Y is the number of hours in X minus the number of hours in Y.
 • Prefix and postfix increment operators ++. The number of hours in an object is
 incremented by 1.
 • Prefix and postfix decrement operators --. The number of hours in an object is
 decremented by 1.
 */

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

class NumDays
{
public:
    int dayNo;
    double hours;
    
public:
    
    NumDays(int numHours=0) {  //Default constructor
        hours=numHours;
    }
    
    
    int getNumDays()
    {
        return dayNo;
    }
    
    void setNumDays(int n)
    {
        dayNo=n;
    }
    void setHours (int h) {
        hours = h;
    }
    
    double getHours () {
        return hours;
    }
    double calculate(int nd)
    {
        double c;
        if(nd>0)
        {
            c=(double)nd/8;
        }
        cout<<"Number of day(s) is : "<<c<<endl;
        return c;
        
    }
    
    
    NumDays operator+(const NumDays& b)
    {
        NumDays Day;
        Day.hours = this->hours +b.hours;
        return Day;
    }
    
    NumDays operator-(const NumDays& b)
    {
        NumDays Day;
        Day.hours = this->hours - b.hours;
        return Day;
    }
    
    //Prefix increment
    NumDays operator++()
    {
        ++hours;
        return hours;
    };
    //Prefix decriment
    NumDays operator--()
    {
        --hours;
        return hours;
    };
    //Postfix increment
    NumDays operator++ (int ) {
        
        NumDays A (hours);
        ++hours;
        return A;
    }
    //Postfix decrement
    NumDays operator-- (int ) {
        
        NumDays A (hours);
        --hours;
        return A;
    }
    
    
};



int main()
{
    int userInput;
    cout<<"What hours you want to calculate? "<<endl;
    cin>>userInput;
    NumDays test1(userInput);
    test1.setNumDays(userInput);
    
    cout<<test1.calculate(test1.getNumDays())<<endl;
    cout<<"*******************"<<endl;
    
    //No Specific instructions to display this section:
    //So Just testing!
    NumDays test2(35);
    NumDays test3(10);
    ++test2;
    cout<<test2.hours<<" hours! --- prefix TEST "<<endl;
    test2++;
    cout<<test2.hours<< " hours! --- postfix TEST "<<endl;
    
    //TEsting hours before adding two class objects
    cout<<test3.hours<<" hours! ******* Value before adding object"<<endl;
    //Testing adding 2 class objects and assigning to another
    test3=test1+test2;
    //Testing new value of Test3 object.
    cout<<test3.hours<<" hours! ******* Value after adding object"<<endl;
    
    
    
    
    
    return 0;
}