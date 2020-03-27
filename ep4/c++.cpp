#include <iostream>
using namespace std;
/* This file is created by Pyking.
   This is the if statement example*/

/*
 if (condition){
    Code
 }
*/
int main()
{
    int age;
    cout << "What is your age? : ";
    cin >> age;
    if(age<18){
        cout << "You are a child" << endl;
    }
    if (age>=18){
        cout << "You are an adult" << endl;
    }
    return 0;
}
