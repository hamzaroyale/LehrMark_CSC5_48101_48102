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
    switch(score>=90){
        case true:grade='A';break;
        default:switch(score>=80){
                    case true:grade='B';break;
                    default:switch(score>=70){
                                case true:grade='C';break;
                                default:switch(score>=60){
                                            case true:grade='D';break;
                                            default: grade='F';
                                        }
                            }
                }
    }
    
    //Display Output
    cout<<"Your Grade = "<<grade<<" with a score = "<<score<<endl;

    //Exit Program
    return 0;
}