
/*
 Page 502, Exercise 16:
 
 16. Patient Fees
 Here are some suggestions:
 
 • The names, parameters, and return types of each function and class member
 function should be decided in advance.
 • The program will be best implemented as a multifile program.
 
 Write a program that computes a patient’s bill for a hospital stay. The different components
 of the program are
 • The PatientAccount class will keep a total of the patient’s charges. It will also keep
 track of the number of days spent in the hospital. The group must decide on the
 hospital’s daily rate.
 • The Surgery class will have stored within it the charges for at least five types of
 surgery. It can update the charges variable of the PatientAccount class.
 • The Pharmacy class will have stored within it the price of at least five types of
 medication. It can update the charges variable of the PatientAccount class.
 • The main program.
 The main program will design a menu that allows the user to enter
 a type of surgery, enter one or more types of medication, and check the patient out of the
 hospital. When the patient checks out, the total charges should be displayed.
 
 */
#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

string name;
int daysInHospital;
double dayRate=400;
class Pharmacy { // Pharmacy class that will initiate asking used pharmacies untill
    //user exits, thought maybe user used several types of medicine (works in do while loop.
private:
    double medCharges;
public:
    double getmedCharges(){
        return medCharges;
    }
    void setmedCharges(double charges) {
        medCharges=charges;
    }
    Pharmacy(double medcharg=0) {
        setmedCharges(medcharg);
    }
    
};



class Surgery { // Surgery class
private:
    double surgeryCharges;
public:
    int getSurgery() { // Getter function
        return surgeryCharges;
    }
    void setSurgery(double r) { // Setter function
        surgeryCharges=r;
    }
    Surgery(double srg=0){
        setSurgery(srg);
    }
    
    
};

class PatientAccount:public Pharmacy, public Surgery {  // Patient account which inherits from
    // Pharmacy and Surgery classes
private:
    float patientCharge;
    int daysInHos;
    double dayRateHos;
    
public:
    PatientAccount(){ // Default constructor for PatientAccount class
        
        
    }
    //Below is setter and gettor functions.  Here we have acces to the classes Pharmacy and Surgery!
    float getPatientCharge() {
        return patientCharge;
    };
    double getdayinHos() {
        return daysInHos;
    };
    double getRateHos(){
        return dayRateHos;
    };
    void setDayInHos(int d) {
        daysInHos = d;
    }
    void setDayRateHos(double rate) {
        dayRateHos = rate;
    }
    void setPatientCharge(float charge) {
        charge = patientCharge;
    }
    
};

void display(PatientAccount &patient);//  Display Function which takes parameter Patient account class object


int main() {
    cout<<"WELCOME TO OUR HOSPITAL"<<endl;
    cout<<"What is patient's Name? "<<endl;
    getline(cin, name);
    cout<<"How Many days you have been at hospital?"<<endl;
    cin>>daysInHospital;
    PatientAccount first;
    display(first);
    //cout<<"The total Charge is"<<getSurgery()+getmedCharges()<<endl;
    
    return 0;
}

void display(PatientAccount &patient) { // Proper display function statements.
    patient.setDayInHos(daysInHospital);
    patient.setDayRateHos(dayRate);
    // Default constructor for surgery class
    double tonsilcetomy=1000.00,
    foot = 2000.00,
    knee = 3000.00,
    shoulder = 4000,
    appendoctemy = 5000.00,
    temp=0;
    
    int choice;
    
    cout << "Here is the list of surgery types, choose one ! "<< endl;
    cout<< "To exit press 0 \n" <<endl;
    do {
        cout<<
        "(1) Tonsilcetomy           : 1000$\n"
        "(2) Foot Surgery           : 2000$\n"
        "(3) Knee Surgery           : 3000$\n"
        "(4) Shoulder Surgery       : 4000$\n"
        "(5) Appendoctemy Surgery   : 5000$\n"
        "(0) To EXIT" << endl;
        
        cin>>choice;
        
        switch (choice) {
            case 1: {
                temp=patient.getSurgery()+tonsilcetomy;
                patient.setSurgery(temp);
                break;}
            case 2: {
                temp=patient.getSurgery()+foot;
                patient.setSurgery(temp);
                break;}
            case 3:{
                temp=patient.getSurgery()+knee;
                patient.setSurgery(temp);
                break;}
            case 4:{
                temp=patient.getSurgery()+shoulder;
                patient.setSurgery(temp);
                break;}
            case 5:{
                temp=patient.getSurgery()+appendoctemy;
                patient.setSurgery(temp);
                break; }
            case 6:
                choice = 0;
        };
        
    }
    while(choice!=0);
    
    // default constructor for Pharmacy class
    double antibiotics = 100.00,
    antInausea =200.00,
    antiInflamatory =300.00,
    lightPain = 400.00,
    strongPain = 500.00,
    temp1;
    int choice1;
    
    cout << "Here is the list of medications choose one you used! "<< endl;
    
    do {
        cout<<
        "(1) Antibiotics        : 100$ \n"
        "(2) Ant-Inausea        : 200$ \n"
        "(3) Anti-Inflamatory   : 300$ \n"
        "(4) Light Pain pills   : 400$ \n"
        "(5) Strong Pain pills  : 500$ \n"
        "(0) To EXIT" << endl;
        
        cin>>choice1;
        
        switch (choice1) {
            case 1: {
                temp1=patient.getmedCharges()+antibiotics;
                patient.setmedCharges(temp1);
                break;}
            case 2: {
                temp1=patient.getmedCharges()+antInausea;
                patient.setmedCharges(temp1);
                break;}
            case 3:{
                temp1=patient.getmedCharges()+antiInflamatory;
                patient.setmedCharges(temp1);
                break;}
            case 4:{
                temp1=patient.getmedCharges()+lightPain;
                patient.setmedCharges(temp1);
                break;}
            case 5:{
                temp1=patient.getmedCharges()+strongPain;
                patient.setmedCharges(temp1);
                break;}
            case 6:
                choice1 = 0;
        };
        
    }
    while(choice1!=0);
    
    
    double calculate = patient.getdayinHos()*patient.getRateHos();
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Dear Mr(s) " <<name<< " you bill is shown below: "<<endl;
    cout<<"For Surgery "<<patient.getSurgery()<<"$"<<endl;
    cout<<"For Medicine "<<patient.getmedCharges()<<"$"<<endl;
    cout<<"You stayed at hospital for: "<<daysInHospital<<" day(s), with rate "<<dayRate<< "$ daily"<<endl;
    cout<<"TOTAL BILL DUE: "<<calculate+patient.getSurgery()+patient.getmedCharges()<<"$"<<endl;
    
    
}
