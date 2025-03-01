/*
Amerike University
Author: Ali Angel
Work #: 4
Date: 26/02/2025
Description: This program will ask the user to input 3 numbers and will then sort them from biggest to smallest, this program
will also check if there are any repeated numbers.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
//We declared three integers called num 1, 2 and 3 so we can store the numbers given by the user.
    int num1 = 0, num2 = 0, num3 = 0;
    //We now declared three variables where the sorted numbers will be stored
    int bigNumber;
    int midNumber;
    int smallNumber;
    //Another variable is declared where repeated numbers will be
    int rptdNumber = 0;

    cout << "Hello, this program will ask you to input three numbers\n";
    cout << "Input the first number: ";
    cin >> num1;
    cout << "\nNow Input the second number: ";
    cin >> num2;
    cout << "\nNow Input the third number: ";
    cin >> num3;

    //We're using an if statement comparing num1 to num2 so we can have the largest number out of the two.
    if (num1 > num2)
    {
        //We now have various other if statements comparing num 2 and num3 so we can sort them from bigger to smaller in the
        //corresponding variables.
        if(num2 > num3) 
        {
            bigNumber = num1;
            midNumber = num2;
            smallNumber = num3;
        }else if (num2 < num3 && num3 < num1)
        {
            bigNumber = num1;
            midNumber = num3;
            smallNumber = num2;
        }else if (num3 > num1)
        {
            midNumber = num1;
            bigNumber = num3;
            smallNumber = num2;
        }else if (num3 == num1) //Here we make two ifs checking if there is a repeated number and storing it in rptdNumber
        {                       //This will be pretty useful later on
            num1 = bigNumber;
            rptdNumber = num3;
            smallNumber = num2;
        }else if (num3 == num2)
        {
            bigNumber = num1;
            rptdNumber = num3;
        }
    }else if (num2 > num1) //We do the exact same in this else if cycle but with the condition that num2 is bigger than num1
    {
        if(num1 > num3)
        {
            bigNumber = num2;
            midNumber = num1;
            smallNumber = num3;
        }else if (num1 < num3 && num2 > num3)
        {
            bigNumber = num2;
            midNumber = num3;
            smallNumber = num1;
        }else if (num3 > num2)
        {
            midNumber = num2;
            bigNumber = num3;
            smallNumber = num1;
        }else if (num3 == num2)
        {
            num2 = bigNumber;
            rptdNumber = num3;
            smallNumber = num1;
        }else if (num3 == num1)
        {
            bigNumber = num2;
            rptdNumber = num3;
        }
    } else if (num1 == num2) //If num1 and num2 hold the same value this else if will check if num3 is bigger or smaller than
    {                       //Num1 and 2 (their value is now stored in rptdNumber)
        rptdNumber = num2;
        if(num3 > rptdNumber)
        {
            bigNumber = num3;
        }else if (num3 < rptdNumber)
        {
            smallNumber = num3;
        }else   //If num3 isnt bigger or smaller than rptdNumber this else will set rptdNumber's value to -1
        {
            rptdNumber = -1;
        }
}
    
    //We now check if there are repeated numbers with an if statement that checks rptdNumber's value, if its bigger than 0  that means 
    //there are repeated numbers
    if (rptdNumber > 0)
    {
    //We now have another two "if statements" that check wether our repeated number was the bigger or the smaller number and
    //prints a message accordingly
        if (bigNumber == rptdNumber || smallNumber < rptdNumber)
        {
            cout << "We will now print the numbers, press any key to continue";
            getch();
            cout << "\nThe biggest number was inputted twice, the biggest number is: " << rptdNumber;
            cout << "\nThe smallest number is:  " << smallNumber;
         }else if (smallNumber == rptdNumber || bigNumber > rptdNumber)
         {
            cout << "We will now print the numbers, press any key to continue";
            getch();
            cout << "\nThe biggest number is: " << bigNumber;
            cout << "\nThe following number was inputted twice (and is the smaller number):  " << rptdNumber;
         }
    //We now have an else if that prints the sorted values from biggest to smallest if there are no repeated numbers
    }else if (rptdNumber == 0)
    {
        cout << "We will now print the numbers from biggest to smallest, press any key to continue";
        getch();
        cout << "\nThe biggest number is: " << bigNumber;
        cout << "\nThe number in between is: " << midNumber;
        cout << "\nThe smallest number is: " << smallNumber;
    } else //If al the other conditions aren't met we assume al the num variables hold the same value and print a message
    {      //accordingly 
        cout << "All the inputted numbers are the same!";
    }
   
    
   
    
    return 0;
}