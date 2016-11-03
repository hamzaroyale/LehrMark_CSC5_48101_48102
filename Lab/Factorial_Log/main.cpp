/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on October 24th, 2016, 12:00 PM
   Purpose:  Factorials with logs
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //Log base 10
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int fact(int);
void logFact(int,float &,int &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int n=100000,power;
    float fraction;
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    for(int i=1;i<=n;i++){
        logFact(i,fraction,power);
        cout<<i<<"! = "<<fraction<<" x 10^"<<power<<endl;
    }
    
    //Display Output
 
    
    //Exit Program
    return 0;
}

//Calculates the factorial
void logFact(int n,float &d,int &p){
    double logfact=0;
    for(int i=1;i<=n;i++){
        logfact+=log10(i);
    }
    p=logfact;
    d=pow(10,logfact-p);
}


//Calculates the factorial
int fact(int n){
    int nfact=1;
    for(int i=1;i<=n;i++){
        nfact*=i;
    }
    return nfact;
}