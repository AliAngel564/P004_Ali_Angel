/*
Amerike University
Author: Ali Angel
Work #: 4
Date: 26/02/2025
Description: This program will ask the user to input 3 numbers and will then sort them from the biggest to the smallest number
*/

#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3;
    int bigNumber;
    int midNumber;
    int smallNumber;

    cout << "Hello, this program will ask you to input three numbers\n";
    cout << "Input the first number: ";
    cin >> num1;
    cout << "\nNow Input the second number: ";
    cin >> num2;
    cout << "\nNow Input the third number: ";
    cin >> num3;
    cout << "We will now print the biggest number, the largest number and the one in between\n";

    //We're using an if statement comparing num1 to num2 so we can have the largest number out of the two.
    if (num1 > num2 )
    {
        /*three variables were declared that determine the placement of the three numbers in the "bigger than, lesser than ranking"
        if num1 is bigger, its value will be assigned to the variable named "bigNumber", num 2's value will then be assigned
         to the variable named "smallNumber".*/
        bigNumber = num1; 
        smallNumber = num2; 
       
    } else {
        bigNumber = num2; //if the conditions aren't met and num 2 is bigger, the same will happen but the other way around.
        smallNumber = num1;
    }
     /*We're now running a second if statement with the condition being that num3 must be smaller than bigNumber and larger than smallNumber,
        if the conditions are met num 3's value will then be assigned to the variable named "midNumber".*/
        if (bigNumber > num3 && smallNumber < num3) 
        {
            midNumber = num3; 
        } else if (bigNumber < num3) //We now have an "else if" statement with the condition being that num 3 is larger than bigNumber
        { 
            midNumber = bigNumber; //if the condition is met bigNumber's value will be transferred to midNumber
            bigNumber = num3; //and bigNumber's new value will be the same as num3
        }else if (num3 < smallNumber)//Another "else if" statement with the condition being that num3 is smaller than smallNumber
        {
            midNumber = smallNumber;//if the condition is met smallNumber's value will be transferred to midNumber
            smallNumber = num3; //and smallNumber's new value will be the same as num3
        }
        //We now print the numbers in order.
        cout << "\nThe largest number is: " << bigNumber;
        cout << "\nThe number in between is: " << midNumber;
        cout << "\nThe smallest number is: " << smallNumber;
    
    return 0;
}