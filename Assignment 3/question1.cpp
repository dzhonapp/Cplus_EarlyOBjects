//
//  main.cpp


//  Programmer:Berdimurat Mammedov (885701426)
//  Date:  03/11/2017
//  Description:
/*
 
 write programs for:the exercises 12 and 13  at the end of the chapter4. Here are those exercises.
 
 12. Running the Race
 Write a program that asks for the names of three runners and the time it took each of them
 to ﬁnish a race. The program should display who came in ﬁrst, second, and third place.
 Think about how many test cases are needed to verify that your problem works correctly.
 (That is, how many different ﬁnish orders are possible?)
 
 Input Validation: Only allow the program to accept positive numbers for the times.
 
 */

#include <iostream> //preprocessor
#include <string>
using namespace std;

int main() {
    
    string runner1, runner2, runner3;
    float time1=0, time2=0, time3=0;
    cout<< "Write name of runner 1 \n";
    cin>>runner1;
    cout<< "Write name of runner 2 \n";
    cin>>runner2;
    cout<< "Write name of runner 3 \n";
    cin>>runner3;
    
    while(time1<=0){
        cout<< "Write the time for " << runner1<<endl;
        cin>>time1;
    }
    while(time2<=0){
        cout<< "Write the time for " << runner2<<endl;
        cin>>time2;
    }
    while (time3<=0) {  //While loops to ensure that user inputs positive number
        cout<< "Write the time for " << runner3<<endl;
        cin>>time3;
    }
    
    if (time1<time2 && time2<time3)
    {
        cout<<runner1<<" came first and "<<runner2<<" came second "<<runner3 <<" came third! "<<endl;
    }
    else if (time1<time2 && time1<time3 && time3<time2)
    {
        cout<<runner1<<" came first and "<<runner3<<" came second "<<runner2 <<" came third! "<<endl;
    }
    else if (time2<time1 && time1<time3)
    {
        cout<<runner2<<" came first and "<<runner1<<" came second "<<runner3 <<" came third! "<<endl;
    }
    else if (time2<time3 && time3<time1)
    {
        cout<<runner2<<" came first and "<<runner3<<" came second "<<runner1 <<" came third! "<<endl;
    }
    else if (time3<time1 && time1<time2)
    {
        cout<<runner3<<" came first and "<<runner1<<" came second "<<runner2 <<" came third! "<<endl;
    }
    else if (time3<time2 && time2<time1)
    {
        cout<<runner3<<" came first and "<<runner2<<" came second "<<runner1 <<" came third! "<<endl;
    }
    // After this point it check for equality of runner times
    else if (time1<time2 && time2==time3)
    {
        cout<<runner1<<" came first  "<<runner2<<" and "<<runner3 <<" came second! "<<endl;
    }
    else if (time1==time2 && time1==time3)
    {
        cout<<" RUNNERS CAME AT SAME TIME!" <<endl;
    }
    else if (time2==time1 && time1<time3)
    {
        cout<<runner2<<" came "<<runner1<<" came first "<<runner3 <<" came second! "<<endl;
    }
    else if (time2==time3 && time3<time1)
    {
        cout<<runner2<<" and "<<runner3<<" came first "<<runner1 <<" came second! "<<endl;
    }
    else if (time3==time1 && time1<time2)
    {
        cout<<runner3<<"  and "<<runner1<<" came fist "<<runner2 <<" came second! "<<endl;
    }
    else if (time1 == time2 && time1>time3) {
        cout<<runner3<<"  came first "<<runner1<<" and "<<runner2 <<" came second! "<<endl;
    }
    
    else {
        cout<<" Something went wrong! "<<endl;
    }
    
    
    
    return 0;
}
