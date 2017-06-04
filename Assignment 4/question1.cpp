/*
 Author:        Berdimyrat Mammedov
 Student ID:    885701426
 
 Description:
 
 Write a program that calculates the balance of a savings account at the end of a three-
 month period. It should ask the user for the starting balance and the annual interest
 rate. A loop should then iterate once for every month in the period, performing the
 following steps:
 A) Ask the user for the total amount deposited into the account during that month
 and add it to the balance. Do not accept negative numbers.
 B) Ask the user for the total amount withdrawn from the account during that
 month and subtract it from the balance. Do not accept negative numbers or
 numbers greater than the balance after the deposits for the month have been
 added in.
 C) Calculate the interest for that month. The monthly interest rate is the annual
 interest rate divided by 12. Multiply the monthly interest rate by the average of
 that month’s starting and ending balance to get the interest amount for the
 month. This amount should be added to the balance.
 After the last iteration, the program should display a report that includes the following
 information:
 • starting balance at the beginning of the three-month period
 • total deposits made during the three months
 • total withdrawals made during the three months
 • total interest posted to the account during the three months
 • final balance
 */

#include <iostream>
#include <iomanip>

using namespace std;



int main ()



{
    const int year = 12;
    
    int numberOfMonths = 3;
    
    double interestRate;
    
    double totalWithdraw = 0;
    
    double totalDeposit = 0;
    
    double initialBalance, startingBalance;
    
    double deposit, withdraw;
    
    double balance;
    
    double interest = 0.0;
    
    double totalInterest = 0.0;
    
    
    
    
    
    cout << "Enter the initial balance : ";
    
    cin >> initialBalance;
    cin.ignore();
    while(initialBalance<0){
        cout<<"Please enter amount in numbers \n";
    }
    
    cout << "Enter the annual interest rate (for example: 20 for 20% ) : ";
    
    cin >> interestRate;
    cin.ignore();
    
    while(interestRate<=0) {
        cout<< "Please enter a number bigger than 0 ";
        
    }
    
    
    for ( int i = 1; i <= numberOfMonths; i++)
    {
        
        cout << "Enter the amount deposited at month " << i << " : ";
        cin >> deposit;
        while (deposit < 0)
        {
            cout << "Please enter a positive amount : ";
            cin >> deposit;
        }
        
        balance += deposit;
        
        totalDeposit += deposit; //Just to keep in treack deposited money
        
        cout << "Amount withdrawn at month: " << i << " : ";
        cin >> withdraw;
        cin.ignore();
        
        while (withdraw < 0 || withdraw > balance + deposit) {
            cout << "Withdrawal must not be negative and not greater than current balance of : $ " << balance << endl;
            cout << "Please re-enter the withdrawal amount : ";
            cin >> withdraw;
        }
        totalWithdraw += withdraw;
        
        balance -= withdraw;
        
        
        // Interest calculation
        
        interest = ((interestRate/100)/ year) * (( balance + initialBalance) / 2); /*The monthly interest rate is the annual
                                                                                    interest rate divided by 12. Multiply the monthly interest rate by the average of
                                                                                    that month’s starting and ending balance to get the interest amount for the
                                                                                    month.*/
        totalInterest += interest;
        balance +=interest;
        
        cout << fixed << showpoint << setprecision(2);
        
        
        cout << "Balance at the end of month " << i << ": $" << balance + interest+initialBalance << endl;
        
        
    }
    
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Starting Balance :         $"  << initialBalance << endl;
    
    cout << "Total Amount Deposited :   $"  << totalDeposit << endl;
    
    cout << "Total Amount Withdrawn :   $"  << totalWithdraw << endl;
    
    cout << "Ending Balance :           $"  << balance + interest + initialBalance  << endl;
    
    cout << "Total Interest added :     $"  << totalInterest << endl;
    
    
    
    return 0;
    
    
    
}
