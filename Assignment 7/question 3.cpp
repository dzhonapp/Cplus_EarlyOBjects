*
Author: Berdimyrat Mammedov
Studen id: 885701426
Description of Program:
11. Monthly Budget Screen Form
A student has established the following monthly budget:
Housing                          500.00
Utilities                           150.00
Household expenses   65.00
Transportation               50.00


Food                                250.00
Medical                          30.00
Insurance                      100.00
Entertainment               150.00
Clothing                         75.00
Miscellaneous             50.00


Write a modular program that declares a MonthlyBudget structure with member variables
to hold each of these expense categories. The program should create two MonthlyBudget
structure variables. The ﬁrst will hold the budget ﬁgures given above. The second will hold
the user-enter amounts actually spent during the past month. Using Program 7-19 as a
model, the program should create a screen form that displays each category name and its
budgeted amount, then positions the cursor next to it for the user to enter the amount
actually spent in that category. Once the user data has all been entered, the program should
compute and display the amount over or under budget the student’s expenditures were in
each category, as well as the amount over or under budget for the entire month. */
#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>
using namespace std;

struct monthlyBudget {
    double  housing, util, household,
    transport, food, medical,
    insurance, entertain, cloth, misc;
    
    monthlyBudget(double h=500, double u=150, double hh=65, double tr=50, double fd=250, double md=30, double in=100, double ent=150, double cl=75, double msc=50)
    {
        housing = h;
        util = u;
        household = hh;
        transport = tr;
        food = fd;
        medical = md;
        insurance = in;
        entertain = ent;
        cloth = cl;
        misc = msc;
    }
    
};

void placeCursor(HANDLE, int, int);
void getSpends(HANDLE, monthlyBudget &, monthlyBudget &);
void calculate(HANDLE, monthlyBudget &, monthlyBudget &);
int main() {
    
    
    monthlyBudget goal;
    monthlyBudget spent;
    spent = {0,0,0,0,0,0,0,0,0,0 };
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
    
    //getSpends(screen, spent);
    
    calculate(screen, goal, spent);
    getSpends(screen, goal, spent);
    
    
    
    return 0;
    
}

void getSpends(HANDLE screen, monthlyBudget &item1, monthlyBudget &item2) {
    placeCursor(screen, 32, 2); // Trasnportation: 10, 5,
    cin >> item2.housing;
    placeCursor(screen, 42, 2);
    cout << item1.housing - item2.housing;
    placeCursor(screen, 32, 3); //
    cin >> item2.util;
    placeCursor(screen, 42, 3);
    cout << item1.util - item2.util;
    placeCursor(screen, 32, 4); //
    cin >> item2.household;
    placeCursor(screen, 42, 4);
    cout << item1.household - item2.household;
    placeCursor(screen, 32, 5);
    cin >> item2.transport;
    placeCursor(screen, 42, 5);
    cout << item1.transport - item2.transport;
    placeCursor(screen, 32, 6);
    cin >> item2.food;
    placeCursor(screen, 42, 6);
    cout << item1.food - item2.food;
    placeCursor(screen, 32, 7);
    cin >> item2.medical;
    placeCursor(screen, 42, 7);
    cout << item1.medical - item2.medical;
    placeCursor(screen, 32, 8);
    cin >> item2.insurance;
    placeCursor(screen, 42, 8);
    cout << item1.insurance - item2.insurance;
    placeCursor(screen, 32, 9); // Trasnportation: 10, 5,
    cin >> item2.entertain;
    placeCursor(screen, 42, 9);
    cout << item1.entertain - item2.entertain;
    placeCursor(screen, 32, 10); // Trasnportation: 10, 5,
    cin >> item2.cloth;
    placeCursor(screen, 42, 10);
    cout << item1.cloth - item2.cloth;
    placeCursor(screen, 32, 11); // Trasnportation: 10, 5,
    cin >> item2.misc;
    placeCursor(screen, 42, 11);
    cout << item1.misc - item2.misc;
    cout << "\n\n";
    cin.get();
    
};

void calculate(HANDLE screen, monthlyBudget &item1, monthlyBudget &item2) {
    cout << fixed << showpoint << setprecision(2);
    cout << "Category\t" << "Budgeted\t" << "Spent\t" << "Difference (-)(+)\n"
    "------------------------------------------------------------\n"
    "Housing       :\t   " << item1.housing		<< "\t" << "      $" << "\t  " << item1.housing - item2.housing			<< "   $\t\n"
    "Utilities     :\t   " << item1.util		<< "\t" << "      $" << "\t  " << item1.util - item2.util				<< "   $\t\n"
    "Household Exp :\t   " << item1.household	<< "\t" << "      $" << "\t  " << item1.household - item2.household		<< "   $\t\n"
    "Transportation:\t   " << item1.transport	<< "\t" << "      $" << "\t  " << item1.transport - item2.transport		<< "   $\t\n"
    "Food          :\t   " << item1.food		<< "\t" << "      $" << "\t  " << item1.food - item2.food				<< "   $\t\n"
    "Medical       :\t   " << item1.medical		<< "\t" << "      $" << "\t  " << item1.medical - item2.medical			<< "   $\t\n"
    "Insurance     :\t   " << item1.insurance	<< "\t" << "      $" << "\t  " << item1.insurance - item2.insurance		<< "   $\t\n"
    "Entertainment :\t   " << item1.entertain	<< "\t" << "      $" << "\t  " << item1.entertain - item2.entertain		<< "   $\t\n"
    "Clothing      :\t   " << item1.cloth		<< "\t" << "      $" << "\t  " << item1.cloth - item2.cloth				<< "   $\t\n"
    "Miscellaneous :\t   " << item1.misc		<< "\t" << "      $" << "\t  " << item1.misc - item2.misc				<< "   $\t\n"
    "------------------------------------------------------------\n";
    
}

void placeCursor(HANDLE screen, int row, int col) {
    COORD position;
    position.X = row;
    position.Y = col;
    SetConsoleCursorPosition(screen, position);
}