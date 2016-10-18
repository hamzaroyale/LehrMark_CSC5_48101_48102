/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on October 17th, 8:30 AM
   Purpose:  Menu with Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem A"<<endl;
        cout<<"2.  Type 2  for Problem B"<<endl;
        cout<<"3.  Type 3  for Problem C"<<endl;
        cout<<"4.  Type 4  for Problem D"<<endl;
        cout<<"5.  Type 5  for Problem E"<<endl;
        cout<<"6.  Type 6  for Problem F"<<endl;
        cout<<"7.  Type 7  for Problem G"<<endl;
        cout<<"8.  Type 8  for Problem H"<<endl;
        cout<<"9.  Type 9  for Problem I"<<endl;
        cout<<"10. Type 10 for Problem J"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:problem1();break;
            case 2:problem2();break;
            case 3:problem3();break;
            case 4:problem4();break;
            case 5:problem5();break;
            case 6:problem6();break;
            case 7:problem7();break;
            case 8:problem8();break;
            case 9:problem9();break;
            case 10:problem10();
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 1 ****************************************
//Purpose:  Put function purpose here!
//Inputs:   Inputs to the function here  -> Description, Range, Units
//Output:   Outputs to the function here -> Description, Range, Units
//******************************************************************************
void problem1(){
    cout<<"Inside Problem A"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem2(){
    cout<<"Inside Problem B"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem3(){
    cout<<"Inside Problem C"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem4(){
    cout<<"Inside Problem D"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem5(){
    cout<<"Inside Problem E"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem6(){
    cout<<"Inside Problem F"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem7(){
    cout<<"Inside Problem G"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem8(){
    cout<<"Inside Problem H"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem9(){
    cout<<"Inside Problem I"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem10(){
    cout<<"Inside Problem J"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}