// #Define two methods to print the maximum and the minimum number respectively among three numbers entered by the user.
#include <iostream>
using namespace std;

void compare(int a , int b , int c){
    if (a>b &&a>c)
    {
        cout<<a<<" is max"<<endl;
    }
    if (b>a &&b>c)
    {
        cout<<b<<" is max"<<endl;
    }
    if (c>a &&c>b)
    {
        cout<<c<<" is max"<<endl;
    }
    if (a<b &&a<c)
    {
        cout<<a<<" is min"<<endl;
    }
    if (b<a &&b<c)
    {
        cout<<b<<" is min"<<endl;
    }
    if (c<a &&c<b)
    {
        cout<<c<<" is min"<<endl;
    }
    
}
int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    compare(num1,num2,num3);

    return 0;
}
