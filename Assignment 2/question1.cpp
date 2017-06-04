//
//  main.cpp


//  Programmer:Berdimurat Mammedov (885701426)
//  Date:  03/03/2017
//  Description:
/*
 please write programs for exercises 8(Box office) and 7(Average RainFall) at the end of the third chapter.
 
 Attach two separate .cpp files.
 
 Here are the descriptions of the exercises:
 
 
 
 8. Box Ofﬁce
 A movie theater only keeps a percentage of the revenue earned from ticket sales. The
 remainder goes to the distributor. Write a program that calculates a theater’s gross and net
 box ofﬁce proﬁt for a night. The program should ask for the name of the movie, and how
 many adult and child tickets were sold. (The price of an adult ticket is $6.00 and a child’s
 ticket is $3.00.) It should display a report similar to the following:
 
 Note: Your output should be formatted and aligned just like the sample output. Please use this sample output to test your code...
 
 
 Movie Name:                                 “Wheels of Fury”
 Adult Tickets Sold:                           382
 Child Tickets Sold:                           127
 Gross Box Ofﬁce Proﬁt:                        $ 2673.00
 Amount Paid to Distributor:                   – $ 2138.40
 Net Box Ofﬁce Proﬁt:                          $ 534.60
 Assume the theater keeps 20 percent of the gross box ofﬁce proﬁt.]

 */

#include <iostream> //preprocessor
#include <string>
using namespace std;

int main() {
    string movie;
    int adult, child;
    
    cout<<"PLEASE TYPE THE NAME OF MOVIE:\t\t\n";
    getline(cin, movie); // With get line it has no any problem when executing, with just cin >> I had a problem when putting a space between the name of move..
    cout<<"HOW MANY ADULT TICKETS WERE SOLD?: \n";
    cin >> adult;
    cout<<"HOW MANY CHILD TICKETS WERE SOLD?: \n";
    cin >> child;
    cout << "\n\n";
    cout <<"Movie Name: \t\t\t\t\t\t\t"<<"\""<<movie<<"\"" << endl;
    cout <<"Adult Tickets Sold: \t\t\t\t\t"<< adult << endl;
    cout <<"Child Tickets Sold: \t\t\t\t\t"<< child << endl;
    float gross;
    gross = (adult*6)+(child*3); // Price of tickets 6 and 3 is known before
    cout <<"Gross Box Ofﬁce Proﬁt: \t\t\t\t\t"<< "$ " <<(adult*6)+(child*3) << endl;
    float paid_to_dist;
    paid_to_dist = gross*0.8;
    cout <<"Amount Paid to Distributor: \t\t\t"<<"$-" << paid_to_dist << endl
    << "Net Box Ofﬁce Proﬁt: \t\t\t\t\t"<<"$ "<< gross-paid_to_dist<< endl;
    
    return 0;
}
