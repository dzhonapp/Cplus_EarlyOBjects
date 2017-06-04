/*
 Author: Berdimyrat Mammedov
 
 
 7. Inventory Class
 Design an Inventory class that can hold information for an item in a retail store’s inventory.
 The class should have the following private member variables.
 
 Variable Name    Description
 itemNumber       An int that holds the item’s number.
 quantity               An int that holds the quantity of the item on hand.
 cost                     A double that holds the wholesale per-unit cost of the item
 
 
 The class should have the following public member functions
 
 Member Function               Description
 default constructor             Sets all the member variables to 0.
 constructor #2                    Accepts an item’s number, quantity, and cost as arguments. Calls other class functions to
 
 copy these values into the appropriate member variables. Then calls the setTotalCost
 
 function.
 
 setItemNumber        Accepts an int argument and copies it into the itemNumber member variable.
 setQuantity               Accepts an int argument and copies it into the quantity member variable.
 setCost                     Accepts a double argument and copies it into the cost member variable.
 getItemNumber     Returns the value in itemNumber.
 getQuantity             Returns the value in quantity.
 getCost                 Returns the value in cost.
 getTotalCost         Computes and returns the totalCost.
 
 Demonstrate the class by writing a simple program that uses it. This program should validate
 the user inputs to ensure that negative values are not accepted for item number, quantity, or cost.
 */


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>



using namespace std;

int items, totalItem;
double prices;



class Inventory {
private:
    
    int itemNumber; // An int that holds the item’s number.
    
    int quantity; //An int that holds the quantity of the item on hand.
    
    double cost; //A double that holds the wholesale per-unit cost of the item
    
public:
    Inventory () {  // constructor without paramets-default constructor.
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
    }
    
    Inventory (int item, int quan, double price) { //Constructor with parameters
        
        setItemNumber(item);
        setQuantity(quan);
        setCost(price);
    }
    
    void setItemNumber(int item){ //Accepts an int argument and copies it into the itemNumber member variable.
        itemNumber=item;
    }
    void setQuantity(int quant) { //Accepts an int argument and copies it into the quantity member variable.
        quantity = quant;
    }
    void setCost(double price) { //Accepts a double argument and copies it into the cost member variable.
        cost = price;
    }
    
    int getItemNumber() { //Returns the value in itemNumber.
        return itemNumber;
    }
    int getQuantity () { //Returns the value in quantity.
        return quantity;
    }
    double getCost() { //Returns the value in cost.
        return cost;
    }
    
    double getTotalCost() {
        return getCost()*getQuantity(); //Computes and returns the totalCost.
    }
    
    
    
};



int main() {
    
    
    
    cout<<"Please  type the item number! \n";
    cin>>items;
    
    while(items<0) {
        cout<<"Please  type the item number! \n";
        cin>>items;
    }
    
    cout<<"Please type item quantity!\n ";
    cin>>totalItem;
    while (totalItem<0){
        cout<<"Please type item quantity!\n ";
        cin>>totalItem;
    }
    cout<< "Please type the cost of item! \n ";
    cin>>prices;
    while (prices<0) {
        cout<< "Please type the cost of item! \n ";
        cin>>prices;
    }
    
    Inventory item1(items, totalItem, prices);
    
    item1.getTotalCost();
    cout<<fixed<<showpoint<<setprecision(2);
    cout<< " The item number: "<<item1.getItemNumber()<<"\n is in quantity: "<< item1.getQuantity()<< "\n per item cost of "<< item1.getCost()<<"$ \n"<<endl;
    cout<< "The total price of items is:"<<item1.getTotalCost()<<"$"<<endl;
    
    return 0;
    
}


