// #Write a program to print the factorial of a number by defining a method named 'Factorial'. Factorial of any number n is represented by n! and is equal to 1 * 2 * 3 * .... * (n-1) *n. E.g.-
// 4! = 1 * 2 * 3 * 4 = 24 
// 3! = 3 * 2 * 1 = 6 
// 2! = 2 * 1 = 2 
// Also, 
// 1! = 1 
// 0! = 1

#include <iostream>
using namespace std;
int factorial(int n){
    int ans=1;
    for (int i = 1; i <= n; i++)
    {
        ans = i*ans;

    }
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    cout <<factorial(n);

    return 0;
}