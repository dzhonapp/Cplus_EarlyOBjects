//
//  main.cpp
//  C
//
//  Created by Bera on 2/22/17.
//  Copyright © 2017 WEST_LA. All rights reserved.
//



#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    cout<<setprecision(2)<<fixed;
double employee_earn=32500; //Monthly pay
double double_pay= 24; //Declaring variable dobule_pay which later will be used
double bi_pay=26; // Bi -week

    
    
    // Assumed that total employees earnings is not changes which is 32500 in any case just calculationg twice a month and bi-weekly payments.
    
    cout<<"If employee will be paid twice a month his each payment will be: \n"<< employee_earn/double_pay <<"$ \n";
    cout<<"If employee will be paid bi-weekly his each payment will be: \n"<<employee_earn/bi_pay<<"$ \n";
    
    cout<<"\n\n\n";
    
// Assuming that employees payment is changable in that case :
    cout<<"Employees total payment will be if paid twice a month is: \n" << employee_earn/12*double_pay<<"$ \n";
    cout<<"Emloyees total payment will be if paid bi-weekly is: \n" <<employee_earn/12*bi_pay<<"$ \n";
    
    
return 0;
};
