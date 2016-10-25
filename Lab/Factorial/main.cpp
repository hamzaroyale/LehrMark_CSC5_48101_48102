/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on October 24th, 2016, 12:00 PM
   Purpose:  Midterm Problem 6
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
unsigned int fact(unsigned int);
bool isGood(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned int n=40;
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    for(int i=1;i<=n;i++){
        cout<<(isGood(i)?"Good Value -> ":"Bad Value -> ");
        cout<<i<<"! = "<<fact(i)<<endl;
    }
    
    //Display Output
 
    
    //Exit Program
    return 0;
}

bool isGood(int n){
    int ntest=fact(n)/fact(n-1);
    return ntest==n?true:false;
}

//Calculates the factorial
unsigned int fact(unsigned int n){
    unsigned int nfact=1;
    for(unsigned int i=1;i<=n;i++){
        nfact*=i;
    }
    return nfact;
}