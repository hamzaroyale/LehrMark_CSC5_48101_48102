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

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int const SIZE=91;
    float sArray[SIZE];
    
    //Fill the array
    fillAry(sArray,SIZE);
    
    //Output Located Here
    for(int deg=0;deg<=SIZE;deg++){
        cout<<"Math sin("<<deg<<")="<<sin(deg/CNVRDEG)
            <<" Our sin array("<<deg<<")="<<sArray[deg]<<endl;
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