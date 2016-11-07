/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 7th, 2016, 9:37 AM
 * Purpose:  Static Array Functions
 *      Will not even compile to let you use the for-in
 *      loop where array has not been locally declared
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random
#include <ctime>     //Time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void fillAry(int [],int);
void prntAry(int []);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=100;
    int array[SIZE],utilize;
    
    //Input or initialize values Here
    do{
        cout<<"How much of the array to utilize?"<<endl;
        cout<<"Choose a number between 2 and 100"<<endl;
        cin>>utilize;
    }while(utilize<2||utilize>100);
    
    //Fill the array
    fillAry(array,utilize);
    
    //Output Located Here
    prntAry(array);
    
    //Conclusion
    cout<<"For-in should not be utilized!"<<endl;

    //Exit
    return 0;
}

void prntAry(int array[]){
    //Output Located Here
    int count=0;
    cout<<"The Array"<<endl;
    for(int var:array){
        cout<<var<<" ";
        if((count++)%10==9)cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//Random 2 digit number
    }
}