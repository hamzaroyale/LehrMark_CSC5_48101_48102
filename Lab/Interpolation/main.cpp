/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on Nov 1st, 2016, 12:00 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format
#include <cmath>      //Math 
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float interp(float,float,float,float,float);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare freezing and boiling pts of water
    //for degree Fahrenheit and Celsius 
    float x1=0.69f,x2=0.71f,y1=cos(x1),y2=cos(x2);
    float begR=x1,endR=x2;//Radians
    
    //Process values -> Map inputs to Outputs
    cout<<"Radians   Exact Cos   Interp Cos"<<endl;
    cout<<fixed<<setprecision(4)<<showpoint;
    for(float rad=begR;rad<=endR;rad+=0.001f){
        cout<<setw(6)<<rad
            <<setw(12)<<cos(rad)
            <<setw(11)<<interp(rad,x1,x2,y1,y2)<<endl;
    }

    //Exit Program
    return 0;
}

//Temperature conversion from degree Fahrenheit to Celsius
//Input
//  x->Known values
//Output
//  y->Known and interpolated value
float interp(float x,float x1,float x2,float y1,float y2){
    return y1+(x-x1)*(y2-y1)/(x2-x1);
}