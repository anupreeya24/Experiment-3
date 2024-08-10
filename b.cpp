#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout<<"Enter x coordinate";
    cin>>x;
   
    cout<<"Enter y coordinate";
    cin>>y;
   
    if (x>0 and y>0){
        cout<<"Number is in first coordinate"<<endl;
    }
    else if (x<0 and y>0){
        cout<<"Number is in Second coordinate"<<endl;
    }
    else if (x<0 and y<0){
        cout<<"Number is in third coordinate"<<endl;
    }
    else{
        cout<<"Number is in fourth coordinate"<<endl;
       
    }
   
    return 0;}
