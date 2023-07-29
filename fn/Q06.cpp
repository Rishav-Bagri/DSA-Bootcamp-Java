// Write a program to print the circumference and area of a circle of radius entered by user by defining your own method.

#include <iostream>
#include <cmath>
using namespace std;

int circumference(int r){
    int C=M_PI*r*2;
    return C;
}
int area(int r){
    int C=M_PI*r*r;
    return C;
}
int main(){
    int r;
    cin>>r;
    cout<<circumference(r)<<endl;
    cout<<area(r);


    return 0;
}
