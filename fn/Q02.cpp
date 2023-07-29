// #Define a program to find out whether a given number is even or odd
#include <iostream>
using namespace std;

int check(int a){
    int b=a&1;
    switch (b)
    {
    case 1:
        cout<<"odd";
        break;
    
    default:
        cout<<"even";
        break;
    }
}
int main(){
    int num;
    cin>>num;
    check(num);

    return 0;
}