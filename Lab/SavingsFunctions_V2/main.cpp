/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on October 24th, 2016, 10:10 PM
   Purpose:  More ways to Save and illustrate concepts
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //Power function, Exponential, Log as well
#include <iomanip>    //Formatting Dollar/Cent outputs
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PERCENT=100.0f;

//Function prototypes
float save1(float,float,int);//Multiple ways to code same thing (pow)
float save2(float,float,int);//Multiple ways to code same thing (exp,log)
float save3(float,float,int);//Multiple ways to code same thing (for-loop)
float save4(float,float,int);//Multiple ways to code same thing (recursion)
float save5(float,float,int);//Banking Truncation
bool  isSave6(float,float,int,float &);//Illustrate reference parameters and is
float save7(float,float,int=8);//Illustrate defaulted parameters
float save3(float,float,float);//Illustrate function overloading
int   save8(float,float,int,float &);//Illustrate static variable

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float pv,intRate;
    int   nComp;
    
    //Input values
    pv=100.0f;               //$100
    intRate=12/PERCENT;       //8%
    //nComp=0;               //9 years
    nComp=72/intRate/PERCENT+0.5;//By the rule of 72
    
    //Process values -> Map inputs to Outputs then Display Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value    =$"<<pv<<endl;
    cout<<"Interest Rate    ="<<intRate*PERCENT<<"%/year"<<endl;
    cout<<"Years in Account = "<<nComp<<" years"<<endl;
    cout<<"Future  Value  (Power)        =$"<<save1(pv,intRate,nComp)<<endl;
    cout<<"Future  Value  (Exp,Log)      =$"<<save2(pv,intRate,nComp)<<endl;
    cout<<"Future  Value  (For-Loop)     =$"<<save3(pv,intRate,nComp)<<endl;
    cout<<"Future  Value  (Recursion)    =$"<<save4(pv,intRate,nComp)<<endl;
    cout<<"Future  Value  (Banking)      =$"<<save5(pv,intRate,nComp)<<endl;
    float futVal;
    if(isSave6(pv,intRate,nComp,futVal))
        cout<<"Future  Value  (Reference)    =$"<<futVal<<endl;
    cout<<"Future  Value  (Defaulted n=8)=$"<<save7(pv,intRate)<<endl;
    cout<<"Future  Value  (Defaulted)    =$"<<save7(pv,intRate,nComp)<<endl;
    cout<<"Future  Value  (Overloading)  =$"<<save3(pv,intRate,1.0f*nComp)<<endl;
    save8(pv,intRate,nComp,futVal);
    cout<<"Future  Value  (Static)       =$"<<futVal<<endl;
    int count=save8(pv,intRate,nComp,futVal);
    cout<<"Future  Value  (Static)       =$"<<futVal<<endl;
    cout<<"We called the Static function "<<count<<" times"<<endl;
    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

int save8(float p,float i,int n,float &fv){
    static int count=0;
    fv=p;
    for(int year=1;year<=n;year++){
        fv*=(1+i);
    }
    return ++count;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

float save3(float p,float i,float n){
    float fv=p;
    for(int year=1;year<=n;year++){
        fv*=(1+i);
    }
    cout<<"Yes I am in the overloaded function save3"<<endl;
    return fv;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

float save7(float p,float i,int n){
    float fv=p;
    for(int year=1;year<=n;year++){
        fv*=(1+i);
    }
    return fv;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

bool isSave6(float p,float i,int n,float &fv){
    fv=p;
    for(int year=1;year<=n;year++){
        fv*=(1+i);
    }
    return ((fv>p)?true:false);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

float save5(float p,float i,int n){
    float fv=p;
    for(int year=1;year<=n;year++){
        int ifv=fv*100;//Modify value for fractional pennies
        fv=ifv/100.0f; //Modify value for fractional pennies
        fv*=(1+i);
    }
    return fv;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

float save4(float p,float i,int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

float save3(float p,float i,int n){
    float fv=p;
    for(int year=1;year<=n;year++){
        fv*=(1+i);
    }
    return fv;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

float save1(float p,float i,int n){
    return p*pow((1+i),n);
}