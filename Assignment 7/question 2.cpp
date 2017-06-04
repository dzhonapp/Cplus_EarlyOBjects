
/*
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

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct monthlyBudget {
    double  housing, util, household,
    transport, food, medical,
    insurance, entertain, cloth, misc;
    
    monthlyBudget ()
    {
        housing = 500.00;
        util = 150.00;
        household = 65.00;
        transport =50.00;
        food =250.00;
        medical =30.00;
        insurance =100.00;
        entertain =150.00;
        cloth = 75.00;
        misc = 50.00;
    }
};

void getSpends (monthlyBudget &);
void calculate (monthlyBudget &, monthlyBudget &);
int main(){
    monthlyBudget goal;
    monthlyBudget spent;
    getSpends(spent);
    calculate(goal, spent);
    
    
    return 0;
    
}

void getSpends(monthlyBudget &item) {
    
    cout<<"What is your monthly housing spend"<<endl;
    cin>>item.housing;
    cout<<"What is your montly utility spend"<<endl;
    cin>>item.util;
    cout<<"What is your monthly household spend"<<endl;
    cin>>item.household;
    cout<<"What is your monthly trasportation expense"<<endl;
    cin>>item.transport;
    cout<<"What is your monthly food expense"<<endl;
    cin>>item.food;
    cout<<"What is your monthly medical expence"<<endl;
    cin>>item.medical;
    cout<<"What is your monthly insurance expense"<<endl;
    cin>>item.insurance;
    cout<<"What is your monthly entertainment expense"<<endl;
    cin>>item.entertain;
    cout<<"What is your monthly clothing expense"<<endl;
    cin>>item.cloth;
    cout<<"What is your monthly Miscellaneous expense "<<endl;
    cin>>item.misc;
    
};

void calculate(monthlyBudget &item1, monthlyBudget &item2) {
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Category\t\t"<<"Budgeted\t"<<"Spent\t"<<"Difference (-)(+)\n"
    "------------------------------------------------------------\n"
    "Housing       :\t   "<<item1.housing<<"\t"<<item2.housing<<"\t"<<item1.housing-item2.housing<<"$\t\n"
    "Utilities     :\t   "<<item1.util<<"\t"<<item2.util<<"\t"<<item1.util-item2.util<<"\t\n"
    "Household Exp :\t   "<<item1.household<<"\t"<<item2.household<<"\t"<<item1.household-item2.household<<"$\t\n"
    "Transportation:\t   "<<item1.transport<<"\t"<<item2.transport<<"\t"<<item1.transport-item2.transport<<"$\t\n"
    "Food          :\t   "<<item1.food<<"\t"<<item2.food<<"\t"<<item1.food-item2.food<<"$\t\n"
    "Medical       :\t   "<<item1.medical<<"\t"<<item2.medical<<"\t"<<item1.medical-item2.medical<<"$\t\n"
    "Insurance     :\t   "<<item1.insurance<<"\t"<<item2.insurance<<"\t"<<item1.insurance-item2.insurance<<"$\t\n"
    "Entertainment :\t   "<<item1.entertain<<"\t"<<item2.entertain<<"\t"<<item1.entertain-item2.entertain<<"$\t\n"
    "Clothing      :\t   "<<item1.cloth<<"\t"<<item2.cloth<<"\t"<<item1.cloth-item2.cloth<<"$\t\n"
    "Miscellaneous :\t   "<<item1.misc<<"\t"<<item2.misc<<"\t"<<item1.misc-item2.misc<<"$\t\n"
    "------------------------------------------------------------\n";
    
}

