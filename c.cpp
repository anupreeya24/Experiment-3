//Experiment 3 c
//Write a program, to find grades of student
//Anupreeya Bhattacharjee 23070123022
#include <iostream>
using namespace std;

int main() {
    float a, b , c, d, e, sum, avg;
    cout<<"Hello! let's know your Grade. \n";
   
    cout<<"Enter marks of 1st subject. \n";
    cin>>a;
   
    cout<<"Enter marks of 2nd subject. \n";
    cin>>b;
   
    cout<<"Enter marks of 3rd subject. \n";
    cin>>c;
   
    cout<<"Enter marks of 4th subject. \n";
    cin>>d;
   
    cout<<"Enter marks of 5th subject. \n";
    cin>>e;
   
    sum= a+b+c+d+e;
    avg=sum/5;
   
    if(avg>=90){
        cout<<"Congratulation! You got O.\n"<<endl ;
    }
   
    else if(avg<90 and avg>=80){
        cout<<"Congratulation! You got A+.\n"<<endl;
    }
   
    else if(avg<80 and avg>=70){
        cout<<"Congratulation! You got A.\n"<<endl;
    }
   
    else if(avg<70 and avg>=60){
        cout<<"Congratulation! You got B+.\n"<<endl;
    }
   
    else if(avg<60 and avg>=50){
        cout<<"Congratulation! You got B.\n"<<endl;
    }
   
    else if(avg<50 and avg>=40){
        cout<<"You can do better! You got C.\n"<<endl;
    }
   
    else{
        cout<<"You failed.\n"<<endl;
    }
 
   
    return 0;
}

