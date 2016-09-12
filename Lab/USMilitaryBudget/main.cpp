/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on August 29, 2016, 9:41 AM
   Purpose:  Calculate the US Military Budget as percentage of Federal Budget
    Federal Budget -> $3.999 trillion from 
        https://en.wikipedia.org/wiki/2016_United_States_federal_budget
    Military Budget -> $585 billion from
        http://www.defense.gov/News/Special-Reports/FY16-Budget
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100;  //Conversion to percentage

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float milBdgt=585e9f;   //See reference from above
    float fedBdgt=3.999e12f;//See reference from above
    float pMilSpd;          //Percentage Military spending
    
    //Process values -> Map inputs to Outputs
    pMilSpd=milBdgt/fedBdgt*PERCENT;
    
    //How to round to 2 decimal places
    int round=pMilSpd*100+0.5f;//Shift by 2 decimal places *100 then round up 0.5
    pMilSpd=round/100.0f;//Integer truncated then shift back 2 decimal places
    
    //Display Output
    cout<<"The Military Budget for 2016 = $"<<milBdgt<<endl;
    cout<<"The Federal Budget for 2016  = $"<<fedBdgt<<endl;
    cout<<"The Percentage spent on the Military = "<<pMilSpd<<"%"<<endl;
    
    //Exit Program
    return 0;
}