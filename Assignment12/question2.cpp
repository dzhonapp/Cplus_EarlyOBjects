/*
 Author: Berdimyrat Mammedov
 
 Date: 28 May , 2017
 Description:
 
 Page 787 and 788 Exercise 7 (Corporate Sales)
 A corporation has six divisions, each responsible for sales to different geographic
 locations. Design a DivSales class that keeps sales data for a division, with the following
 members:
 • An array with four elements for holding four quarters of sales figures for the division
 • A private static variable for holding the total corporate sales for all divisions for the
 entire year.
 • A member function that takes four arguments, each assumed to be the sales for a
 quarter. The value of the arguments should be copied into the array that holds the
 sales data. The total of the four arguments should be added to the static variable that
 holds the total yearly corporate sales.
 • A function that takes an integer argument within the range of 0 to 3. The argument is
 to be used as a subscript into the division quarterly sales array. The function should
 return the value of the array element with that subscript.
 Write a program that creates an array of six DivSales objects. The program should ask
 the user to enter the sales for four quarters for each division. After the data is entered, the
 program should display a table showing the division sales for each quarter.
 
 The program should then display the total corporate sales for the year.
 
 
 
 */


#include <iostream>
#include <cstdlib>
#include  <cctype>

using namespace std;

class DivSales

{
    
private:
    
    double quarter [4];
    static double DivCorp;
    
public:
    double display(int);
    void qutrSale();
    
    double quartGetter(int input) // Returns the value of quarter
    
    {
        return quarter[input];
    }
    void setterCorpDivTotal(double a){
        DivCorp=a;
    }
    
    double DivCorpgetter() {
        return DivCorp;
    };
};
double DivSales::DivCorp = 0;
void DivSales::qutrSale()
{
    
    int number;
    
    for (number = 0; number < 4; number++)
    {
        cout << "The sales for the quarter"<< number+1<<" $"<< ": ";
        cin>> quarter [number];
        
        DivCorp += quarter[number];
        
        while (quarter[number] < 0)
        {
            cout<< "Error, please enter a positive sale amount: $";
            cin >> quarter [number];
        }
    }
}




int main ()

{
    double grandTotal=0;
    int count;
    
    DivSales div[6];
    
    for (count=0; count<6; count++)
    {
        cout<<"Type the sales for division "<<count+1<<endl;
        div[count].qutrSale();
        
        int sum=0;
        for (int z=0; z<4; z++){
            
            sum+=div[count].quartGetter(z);
        }
        cout<<"----------------------***********----------------------"<<endl;
        cout<<"The total Sale for the division No:"<< count+1 <<" is $"<<sum<<endl;
        div[count].setterCorpDivTotal(sum);
        grandTotal += div[count].DivCorpgetter();
        cout<<"----------------------***********----------------------"<<endl;
        cout<<"The Grand sum is: " <<grandTotal <<endl;
        cout<<"----------------------***********----------------------"<<endl;
    }
    
    
    return 0;
}

