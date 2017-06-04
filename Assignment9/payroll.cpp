
/*Design a PayRoll class that has data members for an employee’s hourly pay rate and
 number of hours worked. Write a program with an array of seven PayRoll objects. The
 program should read the number of hours each employee worked and their hourly pay
 rate from a ﬁle and call class functions to store this information in the appropriate
 objects. It should then call a class function, once for each object, to return the employee’s
 gross pay, so this information can be displayed. Sample data to test this program can be
 found in the payroll.dat ﬁle.
 */

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class payRoll {
private:
    double hourlyRate, hoursWorked;
public:
    double totalPay;
    
    payRoll() {
        hourlyRate=0.0;
        hoursWorked=0.0;
    }
    
    payRoll(double r, double w) {
        hoursWorked=w;
        hourlyRate=r;
    }
    int getHourlyRate() {
        return hourlyRate;
    }
    int getHoursWorked(){
        return hoursWorked;
    }
    
    void setHourlyRate(double r){
        hourlyRate = r;
    }
    void setHoursWorked(double w){
        hoursWorked = w;
    }
    
    double grossPay(double r, double w) {
        return totalPay=r*w;
        
    }
    
    
};

int counter=0;
double hwArray[14];



int main() {
    
    ifstream datfile;
    datfile.open("/Users/bma/Desktop/Computer Science/C Assingments/Assignment9/payroll-3.dat");
    if (!datfile)
        cout<< "Error opening datafile";
    else {
        for (counter=0; counter<14; counter++) {
            datfile>>hwArray[counter];
        }
        
        datfile.close();
    }
    
    
    
    
    payRoll myEmployee[7];
    int count=0;
    for (int i =0; i<14; i=i+2){
        
        cout<<fixed<<showpoint<<setprecision(2);
        myEmployee[count].setHoursWorked(hwArray[i]);
        i=i+1;
        myEmployee[count].setHourlyRate(hwArray[i]);
        i=i-1;
        count=count+1;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Total Gross Pay for Emloyee # "<<count<<" is "<<myEmployee[count].grossPay(hwArray[i], hwArray[i+1])<<"$"<<endl;
    }
    
    
    
    
    return 0;
}