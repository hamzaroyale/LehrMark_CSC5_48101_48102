/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 7th, 2016, 9:37 AM
 * Purpose:  Interpolation timing comparison
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cmath>     //Sin
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PI=4*atan(1);
const float CNVRDEG=180/PI;

//Function Prototypes Here
void fillAry(float [],int);
float interp(float [],float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int const SIZE=91;
    float sArray[SIZE];
    
    //Fill the array
    fillAry(sArray,SIZE);
    
    //Output Located Here
    for(int deg=0;deg<SIZE;deg++){
        float fdeg=deg+0.99999;
        cout<<"Math sin("<<fdeg<<")="<<sin(fdeg/CNVRDEG)
            <<" Our interpolated sin ("<<fdeg<<")="<<interp(sArray,fdeg)<<endl;
    }
    
    //Exit
    return 0;
}

void fillAry(float a[],int n){
    //Declare variables and open the file
    for(int deg=0;deg<=n;deg++){
        a[deg]=sin(deg/CNVRDEG);
    }
}

float interp(float sArray[],float x){
    int x1=x;
    int x2=x1+1;
    float y1=sArray[x1];
    float y2=sArray[x2];
    return y1+(x-x1)*(y2-y1)/(x2-x1);
}