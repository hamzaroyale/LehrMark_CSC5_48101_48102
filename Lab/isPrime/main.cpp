/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on Nov 1st, 2016, 12:00 PM
   Purpose:  Find all Primes
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //Square root
#include <iomanip>    //formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
bool isPrime(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare counter
    int count=0,columns=10;
    //Display Output
    for(int i=-100;i<=1000;i++){
        if(isPrime(i)){
            cout<<setw(3)<<i<<" ";
            count++;
            if(count==columns){
                cout<<endl;
                count=0;
            }
        }
    }

    //Exit Program
    return 0;
}

bool isPrime(int n){
    if(n<2)return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}