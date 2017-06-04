

/*
 Author: Berdimyrat Mammedov
 Date: 28/March/2017
 Description:
 A prime number is an integer greater than 1  that is evenly divisible by only 1 and itself.
 for example, the number 5 is prime because it can only be evenly divided by 1 and 5. the number 6, however,
 is not prime because it can be divided by 1, 2,3, and 6.
 write a Boolean function named is Prime, which takes an integer as an argument and returns true if the argument
 is a prime number, and false otherwise. demonstrate  the function in a complete progream.
 
 
 */


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>

using namespace std;
void inHospital();

// Prime is the number which devides only for itself and 1. and must be positive
// Here is declaring function and passing argument and statements.
int isPrime(long number) // Returns 1 (true) if its prime, or 0 (false) if not
{
    if (number < 2) // 1 is not a prime number
        return false;
    
    // if it is > 2 and an even number, then it definitely is not a prime
    if (number > 2 && (number % 2) == 0)
        return false;
    
    //Check for that that if there is any number can divide with remainder?
    for(int i = 2; i < number; i++ )
    {
        //While number % i ==0 its not prime
        if ( (number % i) == 0)
        {
            
            return false;
        }
    }
    
    //If the all of above are false then it's prime
    return true;
}

int main()

// Trying our function if it works. Whoa it works :)
{
    int number;
    do {
        cout << " Please type a number over than 0: (0 will stop execution programm) " << endl;
        cin >> number;
        //validation that the number is over 0.
        
        while (number<0){
            cout << " Please type a number over than 0: (0 will stop execution programm) " << endl;
            cin >> number;
        };
        if (number) {
            if (isPrime(number))
                cout << number << " Is a Prime number " << endl;
            else
                cout << number << " is not Prime number " << endl;
        }
    } while (number > 0);
    
    return 0;
}