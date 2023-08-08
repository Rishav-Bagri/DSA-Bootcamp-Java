#include <iostream>
#include <cmath>

using namespace std;
int mySqrt(int x) {
    long long int s=0,e=x,ans=0;
    while ( s<=e){
        long long int mid=s + (e - s) / 2;
        long long int a=mid*mid;
        if(a==x){
            ans= mid;
            break;
        }
        if(a<x && (mid+1)*(mid+1)<=x){
            
            s=mid+1;
        }
        if((mid+1)*(mid+1)>x && a<x){
            ans= mid;
            break;
        }
        if(a>x){
            e=mid;
        }
    }
    return ans;
}
int main(){
    float x ,d;
    cin>>x;
    int b=mySqrt(x);
    float a=b;
    for (int i = 0; i < 1; i++)
    {
        
    
        
        // a=a+ 0.1;
        // cout<<a;
        while (1)
        {    
            d=a;
            if (a*a<x)
            {
                a=a+0.1;
            }
            
            if (a*a>x)
            {
                break;
            }   
            
        }        
    }
    a=d;
    for (int i = 0; i < 1; i++)
    {
        
    
        
        // a=a+ 0.1;
        // cout<<a;
        while (1)
        {    
            d=a;
            if (a*a<x)
            {
                a=a+0.01;
            }
            
            if (a*a>x)
            {
                break;
            }   

        }        
    }
    a=d;
    for (int i = 0; i < 1; i++)
    {
        
    
        
        // a=a+ 0.1;
        // cout<<a;
        while (1)
        {    
            d=a;
            if (a*a<x)
            {
                a=a+0.001;
            }
            
            if (a*a>x)
            {
                break;
            }   

        }        
    }
    cout <<d;

    return 0;
}