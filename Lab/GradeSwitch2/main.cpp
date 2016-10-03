/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on September 26th, 2016, 8:30 AM
   Purpose:  Input a score, output a grade using switch 2
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char grade;
    unsigned short score;
    
    //Input values
    cout<<"Input the score, receive your grade as output"<<endl;
    cin>>score;
    
    //Process values -> Map inputs to Outputs
    switch(score){
        case 100:case 99:
        case 98: 
        case 97:
        case 96:
        case 95:
        case 94:
        case 93: 
        case 92:
        case 91:
        case 90:grade='A';break;
        case 89:case 88: case 87:case 86:
        case 85:case 84:case 83: case 82:case 81:
        case 80:grade='B';break;
        case 79:case 78: case 77:case 76:
        case 75:case 74:case 73: case 72:case 71:
        case 70:grade='C';break;
        case 69:case 68: case 67:case 66:
        case 65:case 64:case 63: case 62:case 61:
        case 60:grade='D';break;
        default: grade='F';
    }
    
    //Display Output
    cout<<"Your Grade = "<<grade<<" with a score = "<<score<<endl;

    //Exit Program
    return 0;
}