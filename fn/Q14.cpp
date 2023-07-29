// Write a function that returns the sum of first n natural numbers.
#include <iostream>
using namespace std;
int sum_of_n(int n){
    int sum=0;
    for (int i = 0; i <= n; i++)
    {
        sum=sum+i;
    }
    return sum;
    
}
int main(){
    int n;
    cin>>n;
    
    cout<<sum_of_n(n);
    return 0;
}