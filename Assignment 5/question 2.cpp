/*
 
 Author: Berdimyrat Mammedov
 Date: 28/March/2017
 Description:
 
 Write a program that computes and displays the charges for a patient’s hospital stay. First,
 the program should ask if the patient was admitted as an in-patient or an out-patient. If the
 patient was an in-patient the following data should be entered:
 • The number of days spent in the hospital
 • The daily rate
 • Charges for hospital services (lab tests, etc.)
 • Hospital medication charges.
 If the patient was an out-patient the following data should be entered:
 • Charges for hospital services (lab tests, etc.)
 • Hospital medication charges.
 Use a single, separate function to validate that no input is less than zero. If it is, it should
 be re-entered before being returned.
 Once the required data has been input and validated, the program should use two
 overloaded functions to calculate the total charges. One of the functions should accept
 arguments for the in-patient data, while the other function accepts arguments for out-
 patient data. Both functions should return the total charges.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>



using namespace std;


void inHospital(); // In hospital function
void outHospital(); // Out hospital patient function
void checkIn(); // Validation of in hospital functions input
void checkOut(); // validation of out hospital patient function input
void inQuestion(); // Questions Made it saparetale
void outQuestion(); //Questions for out patient


double daysInHospital;
double dailyRate;
double hospitalService;
double hospitalMedication;
string patientType;
string name;






int main () {
    cout<<"What is your name? \n";
    getline(cin, name);
    cout<<"Are you IN patient or OUT\n (Type \"in\" or \"out\") \n ";
    cin>>patientType;
    patientType = patientType;
    
    if (patientType =="in") {
        inHospital();
        
    }
    else if (patientType =="out") {
        outHospital();
        
    }
    else {
        cout<<"Please run again! Probably you didn't enter in or out correctly in lower case!";
    }
    
    
    
    return 0;
    
    
}



void inHospital() {
    inQuestion();
    
    checkIn();
    
    cout<<  "Dear Mr "<<name<<endl;
    cout<<  "Your bill is described below         : \n";
    cout<<  "You are the patient type             : "<<patientType<<endl;
    cout<< "Total days you stayed at hospital is : " << daysInHospital<<endl;
    cout<<"Your daily Rate is                    : $" <<dailyRate<<endl;
    cout<<"Total for Hospital service is         : $"<<hospitalService<<endl;
    cout<<"Total for Hospital Medication is      : $"<<hospitalMedication<<endl;
    cout<<"Grand total is                        : "<< (daysInHospital*dailyRate+hospitalMedication+hospitalService) <<endl;
    
}

void outHospital() {
    
    outQuestion();
    
    checkOut();
    
    cout<<"Dear Mr(s) "<<name<<endl;
    cout<<"Your bill is described below: \n";
    cout<<"You are the patient type          \t: "<<patientType<<endl;
    cout<<"Total for Hospital service is       \t: $"<<hospitalService<<endl;
    cout<<"Total for Hospital Medication is    \t: $"<<hospitalMedication<<endl;
    cout<<"Grand total is                      \t: $"<< (hospitalMedication+hospitalService) <<endl;
    
}



// ************ CHECH or VALIDATION PART************

void checkIn() {
    
    while (dailyRate<0 || daysInHospital<0 || hospitalService<0 || hospitalMedication<0) {
        cout<< "Please re-enter the values they must not be less than 0 \n";
        inQuestion();
        
    }
}



void checkOut() {
    
    while (hospitalService<0 || hospitalMedication<0) {
        outQuestion();
        cout<<hospitalMedication<<endl;
        cout<<hospitalService<<endl;
        
    }
    
}

// ********* QUESTIONS FOR ASK
void inQuestion() {
    
    cout<< "How many days spent in hospital? "<<endl;
    cin>> daysInHospital;
    
    cout<< "What is the daily rate for IN Patient \n";
    cin>>dailyRate;
    
    cout<<"What is amount of charges for hospital services?  \n";
    cin>>hospitalService;
    
    cout<<"Hospital medication charges?  \n";
    cin>>hospitalMedication;
}

void outQuestion() {
    cout<<"What is amount of charges for hospital services?  \n";
    cin>>hospitalService;
    
    cout<<"Hospital medication charges?  \n";
    cin>>hospitalMedication;
}