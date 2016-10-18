/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on October 17th, 8:30 AM
   Purpose:  Menu with Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    //Random number generator
#include <ctime>      //Time
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
float GRAVITY=6.673e-8f;  //Universal Gravity Constant cm^3/g/sec^2
float CNKGGRM=1000;       //Conversion from KG to Grams
float CNSGGRM=14593.9;    //Conversion from Slugs to Grams
float CNKMMET=1000;       //Conversion from Km to Meters
float CNMETCM=100;        //Conversion from Meters to Centimeters
float CNDYNLB=2.24809e-6f;//Conversion from Dynes to Pounds
float CNSGLBS=32.174f;    //Conversion from slugs to lbs which oddly acceleration of gravity in ft/sec^2

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
        cout<<"1.  Type 1  for Problem Savitch 9th Ed Chap 4 Practice Problem 7"<<endl;
        cout<<"2.  Type 2  for Problem Rock Paper Scissors"<<endl;
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
    //Declaration of Variables
    float msEarth=5.972e24;//Google lookup -> Kilograms
    float msMark=6.0f;     //Mass of Mark -> Slug
    float rdEarth=6371.0f; //Google radius of the earth km
    float weight;          //Force of attraction from Physics

    //Conversion of inputs
    msEarth*=CNKGGRM;      //Convert mass of the earth to grams
    msMark*=CNSGGRM;       //Convert mass of mark to grams
    rdEarth*=CNKMMET*CNMETCM;//Convert the radius of the earth to centimeters

    //Process values -> Map inputs to Outputs
    weight=GRAVITY*msMark*msEarth/rdEarth/rdEarth;//Weak force attraction due to Gravity
    weight*=CNDYNLB;      //Convert dynes to pounds

    //Display Output
    cout<<endl<<"This program calculates your weight"<<endl;
    cout<<"According to the Weak Force of Gravity Mark weighs = "<<weight<<"lbs"<<endl;
    cout<<"As a check Mark weighs = "<<6*CNSGLBS<<"lbs"<<endl;
    cout<<"The percentage error in the Radius of Earth = +-"<<100.0f*18/6371<<"%"<<endl;
    cout<<"The margin of error for the weight = "<<(weight-6*CNSGLBS)/weight*100.0f<<"%"<<endl;
    cout<<endl;
}

void problem2(){
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Declaration of Variables
    char computr;    //Computers choice
    char rPlay;      //Our rock/paper/scissors

    //Input Computer values
    computr=rand()%4+80;
    while(computr=='Q'){
        computr=rand()%4+80;
    }

    //Input our rock,paper,scissors
    cout<<endl<<"This is the Rock Paper Scissors Game"<<endl;
    cout<<"Input your choice R-Rock,P-Paper,S-Scissors"<<endl;
    cin>>rPlay;
    switch(rPlay){
        case 'r':
        case 'R':rPlay='R';break;
        case 's':
        case 'S':rPlay='S';break;
        default: rPlay='P';break;
    }

    //Display Output
    cout<<"The computer generate a "<<computr<<endl;
    cout<<"The player type in a    "<<rPlay<<endl;

    //Determine the winer and display
    if(computr==rPlay){
        cout<<"You both tied each other"<<endl;
    }else if(computr=='P'){
        if(rPlay=='S')cout<<"The player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }else if(computr=='S'){
        if(rPlay=='R')cout<<"The player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }else{
        if(rPlay=='P')cout<<"The player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }
    cout<<endl;
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