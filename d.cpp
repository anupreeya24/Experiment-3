//Experiment 3 d
//Write a program to find last 5 digits of PRN no. and reverse it
//Anupreeya Bhattacharjee 23070123022
#include <iostream>
using namespace std;

int main() {
    int n, a, b, reversed= 0, digit;
    cout<<"enter last 5 digits of PRN No: ";
    cin>>n;
   
   while (n != 0) {
        digit = n % 10;
        n=n/10;
        reversed = reversed * 10 + digit;  
       
    }

    // Print the reversed number
    cout << "Reversed last 5 digits: " << reversed << endl;
   
   return 0;
 }
