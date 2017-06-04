/*
 
 Author:Berdimyrat Mammedov
 Student id: 885701426
 Program description:
 
 write programs for questions  4(Car Class, Page 498) and question 7.  Inventory class ( Page 499 and 500) of your book. Here are the descriptions for the two exercises. For proper formatting of these questions please refer to your book.
 
 4. Car Class
 Write a class named Car that has the following member variables:
 • year. An int that holds the car’s model year.
 • make. A string object that holds the make of the car.
 • speed. An int that holds the car’s current speed. In addition, the class should have the following member functions.
 • Constructor. The constructor should accept the car’s year and make as arguments and assign these values to the object’s year and make member variables. The constructor should initialize the speed member variable to 0.
 • Accessors. Appropriate accessor functions should be created to allow values to be retrieved from an object’s year,  make, and speed member variables.
 • accelerate. The accelerate function should add 5 to the speed member variable each time it is called.
 • brake. The brake function should subtract 5 from the speed member variable each time it is called.
 
 Demonstrate the class in a program that creates a Car object, and then calls the accelerate function ﬁve times. After each call to the accelerate function, get the current speed of the car and display it. Then, call the brake function ﬁve times. After each call to the brake function, get the current speed of the car and display it.
 */


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;


class Car {
private:
    int year, speed;
    string make;
    
    
public:
    void constructor (int y, string mk, int sp=0) {
        year = y;
        make = mk;
        speed = sp;
    }
    
    
    int getYear () {
        return year;
    }
    string getMake() {
        return make;
    }
    int getSpeed() {
        return speed;
    }
    void accelerate () {
        speed = speed+5;
    }
    void brake () {
        speed = speed-5;
    }
    
};





int main() {
    
    cout<< "Let's make our own car! \n";
    Car mycar;
    mycar.constructor(1992, "Accura");
    
    cout<<"Current speed of your "<< mycar.getMake()<<" is "<< mycar.getSpeed()<<" km/h \n"<<endl;
    
    cout<<"Push the gas"<<endl;
    for (int i=0; i<5; i++) {
        mycar.accelerate();
        
        
    }
    
    cout<<"Current speed of your "<< mycar.getMake()<<" is "<< mycar.getSpeed()<<" km/h \n"<<endl;
    cout<<"Push the brakes"<<endl;
    for (int i =0; i<5; i++ ) {
        mycar.brake();
        
        
    }
    
    cout<<"Current speed of your "<< mycar.getMake()<<" is "<< mycar.getSpeed()<<" km/h"<<endl;
    
    return 0;
}