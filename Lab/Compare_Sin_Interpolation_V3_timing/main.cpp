/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 7th, 2016, 9:37 AM
 * Purpose:  Interpolation timing comparison
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cmath>     //Sin
#include <ctime>     //Time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PI=4*atan(1);
const float CNVRDEG=180/PI;

//Function Prototypes Here
void fillAry(float [],int);
float interp(float [],double);
float interp2(float [],double);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int const SIZE=91;
    float sArray[SIZE];
    
    //Fill the array
    fillAry(sArray,SIZE);
    
    //Sin function call time
    double PI2=PI/2;
    double increment=PI2/2000000000;
    int strt=time(0);
    for(double rad=0;rad<PI2;rad+=increment){
    }
    int endt=time(0);
    cout<<"Total time for sin loop only = "<<endt-strt<<" sec"<<endl;
    
    //Sin function call time
    strt=time(0);
    for(double rad=0;rad<PI2;rad+=increment){
        double x=sin(rad);
    }
    endt=time(0);
    cout<<"Total time to call sin function with loops = "<<endt-strt<<" sec"<<endl;
    
    //Interpolated function call time
    strt=time(0);
    increment=90.0/2000000000;//Millionth of a degree
    strt=time(0);
    for(double deg=0;deg<90;deg+=increment){
    }
    endt=time(0);
    cout<<"Total time to call interpolated sin function loop only = "<<endt-strt<<" sec"<<endl;
    
    //Interpolated function call time
    strt=time(0);
    increment=90.0/2000000000;//Millionth of a degree
    strt=time(0);
    for(double deg=0;deg<90;deg+=increment){
        float x=interp(sArray,deg);
    }
    endt=time(0);
    cout<<"Total time to call interpolated sin function with loops = "<<endt-strt<<" sec"<<endl;
    
    //Interpolated function call time
    strt=time(0);
    increment=90.0/2000000000;//Millionth of a degree
    strt=time(0);
    for(double deg=0;deg<90;deg+=increment){
        int ideg=deg;
        float x=sArray[ideg];
    }
    endt=time(0);
    cout<<"Total time to call sin array with loops = "<<endt-strt<<" sec"<<endl;

    //Exit
    return 0;
}

void fillAry(float a[],int n){
    //Declare variables and open the file
    for(int deg=0;deg<=n;deg++){
        a[deg]=sin(deg/CNVRDEG);
    }
}

float interp(float sArray[],double x){
    int x1=x;
    int x2=x1+1;
    return sArray[x1]+(x-x1)*(sArray[x2]-sArray[x1]);
}
float interp2(float sArray[],double x){
    int x1=x;
    int x2=x1++;
    float y1=sArray[x1];
    float y2my1=sArray[x2]-y1;
    return y1+(x-x1)*y2my1;
}