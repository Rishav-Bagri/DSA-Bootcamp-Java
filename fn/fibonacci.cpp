#include <iostream>
using namespace std;
int fibonacci(int n){
    int a=0, b=1;
    if (n==1)
    {
        return a;
    }
    
    int sum;
    for (int i = 0; i <= n-2; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
    
}
int main(){
    int n;
    cin>>n;
    int b= fibonacci(n);
    cout<<b;

    return 0;
}