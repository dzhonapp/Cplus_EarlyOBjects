/*
 
 Author: Murad
 14. Drink Machine Simulator
 Create a class that simulates and manages a soft drink machine. Information on each drink
 type should be stored in a structure that has data members to hold the drink name, the
 drink price, and the number of drinks of that type currently in the machine.
 The class should have an array of ﬁve of these structures, initialized with the following data.
 
 Drink Name      Cost    Number in Machine
 Cola                   1.00       20
 Root beer          1.00       20
 Orange soda    1.00       20
 Grape soda      1.00       20
 Bottled water    1.50       20
 
 The class should have two public member functions, displayChoices (which displays a
 menu of drink names and prices) and buyDrink (which handles a sale). The class should
 also have at least two private member functions, inputMoney, which is called by buyDrink
 to accept, validate, and return (to buyDrink) the amount of money input, and
 dailyReport, which is called by the destructor to report how many of each drink type
 remain in the machine at the end of the day and how much money was collected.
 
 You may want to use additional functions to make the program more modular.
 The client program that uses the class should have a main processing loop which calls the
 displayChoices class member function and allows the patron to either pick a drink or
 quit the program. If the patron selects a drink, the buyDrink class member function is
 called to handle the actual sale. This function should be passed the patron’s drink choice.
 
 
 Here is what the buyDrink function should do:
 • Call the inputMoney function, passing it the patron’s drink choice.
 • If the patron no longer wishes to make the purchase, return all input money.
 • If the machine is out of the requested soda, display an appropriate “sold out” message and return all input money.
 • If the machine has the soda and enough money was entered, complete the sale by updating the quantity on hand and money collected information, calculating any change due to be returned to the patron, and delivering the soda.
 
 This last action can be simulated by printing an appropriate “here is your beverage” message.
 Input Validation: Only accept valid menu choices. Do not deliver a beverage if the
 money inserted is less than the price of the selected drink.
 */


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//Global Variables
double givenMoney=0;
int choice;

class DrinkMachine {
    
    
private:
    //Private function input money!
    double inputMoney() {
        double money;
        cout <<"Please enter money: "<<endl;
        cin>>money;
        
        while (money<0) {
            cout <<"Please enter money more $! : "<<endl;
            cin>>money;
            
        }
        return money;
    }
    
    
    
public:
    //Constructor with parameters
    DrinkMachine(string n, double pr, int qnt) {
        name = n;
        price = pr;
        quantity= qnt;
        
    }
    //Default Parameter
    DrinkMachine(){
        name = " ";
        price = 0.00;
        quantity = 0;
    }
    
    //Local Variables;
    
    string name;
    double price;
    int quantity;
    
    
    int displayChoices() { // This  function gives to choose drink 6 to exit program
        
        
        cout << "This is a vending machine program.\n"
        << setw(7) << "Item" << setw(25) << "Cost\n"
        << "1. Cola             \t\t1.00 $\n"
        << "2. Root Beer        \t\t1.00 $\n"
        << "3. Orange Soda      \t\t1.00 $\n"
        << "4. Grape Soda       \t\t1.00 $\n"
        << "5. Bottled Water    \t\t1.50 $\n"
        << "6. EXIT\n"
        << "Enter choice: ";
        cin >> choice;
        
        // Validate the choice
        while (choice < 1 || choice > 6)
        {
            cout << "Select one between 1-6 Re-enter please: ";
            cin >> choice;
        }
        
        return choice;
        
    }
    
    
    void buyDrink() {
        choice = displayChoices();
        givenMoney = inputMoney();
    };
    int report(double money, int quantity, double price)
    {
        if (money > 0)
        {
            cout << "\nThank you for your purchase.\n";
            quantity--;
            cout<<" Your payback is:   "<< money-price<< " $ - ";
            return quantity--;
            
        }
        else
        {
            cout << "Come back next time!\n";
            return quantity;
        }
        
    }
    
    
    
}; //Close class

int main() {
    int loopChoice;
    
    const int drinks = 5; //
    DrinkMachine vendingMachine;
    // New array using structure constructor to fill in data for all the drinks, costs, and inventory
    DrinkMachine data[drinks] = {DrinkMachine("Cola", 1.00, 20),
						  DrinkMachine("Root Beer", 1.00, 20),
						  DrinkMachine("Orange Soda", 1.00, 20),
						  DrinkMachine("Grape Soda", 1.00, 20),
						  DrinkMachine("Bottled Water", 1.50, 20)};
    
    cout<<"Would You like to buy some drink press 1, to exit 0 \n";
    cin >> loopChoice;
    
    while (loopChoice != 0)
    {
        vendingMachine.buyDrink();
        
        
        
        switch (choice)
        {
            case 1:
                
                if (data[0].quantity > 0)
                    data[0].quantity = vendingMachine.report(givenMoney, data[0].quantity, data[0].price);
                cout << data[0].name << " "<<data[0].price<<" $" << endl
                << data[0].quantity << " pcs left!"<< endl;
                break;
                
            case 2:
                
                if (data[1].quantity > 0)
                    data[1].quantity = vendingMachine.report(givenMoney, data[1].quantity, data[1].price);
                cout << data[1].name <<" "<< data[1].price<<" $" << endl
                << data[1].quantity  << " pcs left!"<< endl;
                break;
                
            case 3:
                
                if (data[2].quantity > 0)
                    data[2].quantity = vendingMachine.report(givenMoney, data[2].quantity, data[2].price);
                cout << data[2].name << " "<< data[2].price<<" $" << endl
                << data[2].quantity  << " pcs left!"<< endl;
                break;
                
            case 4:
                if (data[3].quantity > 0)
                    data[3].quantity = vendingMachine.report(givenMoney, data[3].quantity, data[3].price);
                cout << data[3].name  << " "<<data[3].price<<" $" << endl
                << data[3].quantity  << " pcs left!"<< endl;
                break;
                
            case 5:
                
                if (data[4].quantity > 0)
                    data[4].quantity = vendingMachine.report(givenMoney, data[4].quantity, data[4].price);
                cout << data[4].name  << " "<<data[4].price <<" $"<< endl
                << data[4].quantity  << " pcs left!"<< endl;
                break;
                
            default:
                break;
        }
        
        cout << "If you would like to make another purchase"
        << " enter 1 to continue or 0 to quit.\n";
        cin >> loopChoice;
        
    }
    
    
    return 0;
};