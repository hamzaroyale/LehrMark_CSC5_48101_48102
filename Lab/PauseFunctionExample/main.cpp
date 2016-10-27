/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on October 27th, 2016, 12:00 PM
   Purpose:  Example of pause function
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <ctime>      //Time for the pause function
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void pause(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    int beg=static_cast<unsigned int>(time(0));
    cout<<"Program Begins Here, wait 15 seconds"<<endl;
    pause(15);
    cout<<"Wait another 4 seconds"<<endl;
    pause(4);
    int end=static_cast<unsigned int>(time(0));
    cout<<"Program done in "<<end-beg<<" secs"<<endl;
    
    //Display Output

    //Exit Program
    return 0;
}

void pause(int n){
    int beg=static_cast<unsigned int>(time(0));
    int end,elapse;
    do{
        end=static_cast<unsigned int>(time(0));
        elapse=end-beg;
    }while(elapse<n);
}