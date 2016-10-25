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
float sequens(float,int);
float sequens(float);
unsigned int fact(unsigned int);
float usequns(float,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float x,seq1,seq2,seq3;
    int n;
    
    //Input values
    n=6;
    x=1.0f;
    
    //Process values -> Map inputs to Outputs
    seq1=sequens(x,n);
    seq2=sequens(x);
    seq3=usequns(x,n);
    
    //Display Output
    cout<<"Sequence = "<<seq1<<" with "<<n<<" terms"<<endl;
    cout<<"Sequence = "<<seq3<<" with "<<n<<" terms"<<endl;
    cout<<"Sequence = "<<seq2<<" with accuracy = 10^-6"<<endl;
    cout<<"Cos("<<x<<")="<<cos(x)<<endl;
    
    //Exit Program
    return 0;
}

//Sequence using the factorial
float usequns(float x,int n){
    //Initialize variables
    float term,seq=1.0f;
    //Process values -> Map inputs to Outputs
    for(int nterms=1;nterms<n;nterms++){
        //1 - x^2/2!+ x^4/4! - x^6/6! ........
        term=pow(x,2*nterms)*pow(-1.0f,nterms)/fact(2*nterms);
        seq+=term;
    }
    return seq;
}


//Calculates the factorial
unsigned int fact(unsigned int n){
    unsigned int nfact=1;
    for(unsigned int i=1;i<=n;i++){
        nfact*=i;
    }
    return nfact;
}

//Stops when accuracy reached 10^-6
float sequens(float x){
    //Initialize variables
    float term=1.0f,seq=1.0f;
    //Process values -> Map inputs to Outputs
    for(int cnt=1,nterms=2;abs(term)>1.0e-6;cnt+=2,nterms++){
        term*=-1.0f*x*x/cnt/(cnt+1);
        seq+=term;
    }
    return seq;
}

//Stops when number of terms reached
float sequens(float x,int n){
    //Initialize variables
    float term=1.0f,seq=1.0f;
    //Process values -> Map inputs to Outputs
    for(int cnt=1,nterms=2;nterms<=n;cnt+=2,nterms++){
        term*=-1.0f*x*x/cnt/(cnt+1);
        seq+=term;
    }
    return seq;
}