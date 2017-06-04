
/*
 Author: Berdimyrat Mammedov
 Studen id: 885701426
 Description of Program:
 10. Corporate Sales Data
 Write a program that uses a structure named CorpData to store the following information
 on a company division:
 Division name (such as East, West, North, or South)
 First quarter sales
 Second quarter sales
 Third quarter sales
 Fourth quarter sales
 
 Include a constructor that allows the division name and four quarterly sales amounts to be speciﬁed at the time a CorpData variable is created.
 The program should create four CorpData variables, each representing one of the
 following corporate divisions: East, West, North, and South. These variables should be
 passed one at a time, as constant references, to a function that computes the division’s
 annual sales total and quarterly average, and displays these along with the division name. */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double sumOfArray(double array[4]) { // This is for getting sum of my arrays
    double sum=0;
    for (int j=0; j<4; j++) {
        sum = sum+array[j];
    }
    return sum;
};

struct CorpData {
    string div[4]={"East", "West", "North", "South"};
    double quadSale[4][4];
    
    CorpData () {
        
        cout<<"Please Enter Datas for your Corporation"<<endl;
        for (int i=0; i<4; i++) {
            
            for (int q =0; q<4; q++) {
                cout<<"Please Enter sales for Quearter : " <<q+1<<" at division: "<<div[i]<<endl;
                cin>>quadSale[i][q];
                while (quadSale[i][q]<0) {
                    cout<<"Please re-Enter sales for Quearter : " <<q+1<<" at division: "<<div[i]<<endl;
                    cin>>quadSale[i][q];
                };
                
            };
            
        };
        //Displaying
        
        
    }
    
};


int main(){
    
    
    CorpData myCorp;
    
    
    cout<<"Total Annual Sales! "<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<myCorp.div[0]<<" division:    " <<sumOfArray(myCorp.quadSale[0])<<"$"<<endl;
    cout<<myCorp.div[1]<<" division:    " <<sumOfArray(myCorp.quadSale[1])<<"$"<<endl;
    cout<<myCorp.div[2]<<" division:   " <<sumOfArray(myCorp.quadSale[2])<<"$"<<endl;
    cout<<myCorp.div[3]<<" division:   " <<sumOfArray(myCorp.quadSale[3])<<"$"<<endl;
    
    
    //Displaying avarage;
    cout<<endl;
    cout<<"Avarage for quarter sales! ! "<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<myCorp.div[0]<<" division:    " <<sumOfArray(myCorp.quadSale[0])/4<<"$"<<endl;
    cout<<myCorp.div[1]<<" division:    " <<sumOfArray(myCorp.quadSale[1])/4<<"$"<<endl;
    cout<<myCorp.div[2]<<" division:   " <<sumOfArray(myCorp.quadSale[2])/4<<"$"<<endl;
    cout<<myCorp.div[3]<<" division:   " <<sumOfArray(myCorp.quadSale[3])/4<<"$"<<endl;
    
    return 0;
    
}