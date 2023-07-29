// Write a function that returns all prime numbers between two given numbers.
#include <iostream>
using namespace std;

int prime(int n){
    int count=0;
    for (int i = 1; i < n; i++)
    {
        int a=n%i;
        if (a==0)
        {
            count++;
            if (count==2)
            {
                return false;
                break;
            }                                    
        }
                
    } 
    return true;   
}

int main(){
    int a,b,c;
    cin>>b>>c;
    for (int i =b; i <= c; i++)
    {
        a=prime(i);
        if (a==1)
        {
            cout<<i<<"  ";   
        }
                
    }

    return 0;
}
