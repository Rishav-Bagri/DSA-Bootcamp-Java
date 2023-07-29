// Write a function to find if a number is a palindrome or not. Take number as parameter.
#include <iostream>
using namespace std;
int palindrome(int a ){
    int n=a;
    int ans=0;
    while (a!=0)
    {
        int b=a%10;
        ans=ans*10+b;
        a=a/10;

    }
    if (ans==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
    
}
int main(){
    int n;
    cin>>n;
    cout<<palindrome(n);

    return 0;
}
