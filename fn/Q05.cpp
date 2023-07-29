// #Define a method that returns the product of two numbers entered by user.
#include <iostream>
using namespace std;
int product(int a ,int b){
    return a*b;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<product(num1,num2);

    return 0;
}

