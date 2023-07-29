// #Write a program to print the sum of two numbers entered by user by defining your own method.
#include <iostream>
using namespace std;
int sum(int a ,int b){
    return a+b;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<sum(num1,num2);

    return 0;
}
