//
//  main.cpp
//  C
//
//  Created by Bera on 2/22/17.
//  Copyright © 2017 WEST_LA. All rights reserved.
//
/*
 Cyborg data types sizes
 You have been given a job as a programmer on cyborg supercomputer. In order to accomplish some calculations, you need to know how many bytes of following data types use: char, int, float, and double. You don’t have any manuals, so you can’t look up this information. Write a C++ program that will determine the amount of memory used by each of these types and display the information on the screen.
 
 */
#include <iostream>

using namespace std;
int main() {
    cout<<"The size of Char in bits is: "<< sizeof(char)<<endl;
    cout<<"The size of Int in bits is: "<< sizeof(int)<<endl;
    cout<<"The size of float in bits is: "<<sizeof(float)<<endl;
    cout<<"The size of double in bits is: "<<sizeof(double)<<endl;

    // There could be added also short and long integers.
}

