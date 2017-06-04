//
//  main.cpp
//  C
//
//  Created by Bera on 2/22/17.
//  Copyright © 2017 WEST_LA. All rights reserved.
//


/* 1.	Kathryn bought 600 shares of stock at a price of 21.77 per share. A year later she sold them for just 16.44 per share. Write a program that calculates and displays the following:
 The total amount paid for the stock.
 The total amount received from selling the stock.
 The total amount of money she lost.
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    cout<<setprecision(2)<<fixed;
    double shares = 600.00;
    double inital_share_price = 21.77;
    double sale_share_price =16.44;
    
    cout<<"Total amount paid to buy shares: "<<shares*inital_share_price<<endl;
    cout<<"Total amount after selling (one year leater): "<< shares*sale_share_price<<endl;
    cout<<"The amount she lost: "<<(shares*inital_share_price)-(shares*sale_share_price)<<endl;
    return 0;
 };
 