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
    int a,n;
    for (int i = 02; i < 100000; i++)
    {
        a=prime(i);
        if (a==1)
        {
            cout<<i<<"  ";   
        }
        
        
    }
    

    a=prime(n);
    cout<<a;

    return 0;
}