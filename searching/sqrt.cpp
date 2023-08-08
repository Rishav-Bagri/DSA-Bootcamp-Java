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
    int x ,d;
    cin>>x>>d;
    int b=mySqrt(x);
    float a=b;
    for (int i = 0; i < d; i++)
    {
        
        int c=pow(10,i+1);
        float d= 1/c;
        // cout<<d;
        a=a+ d;
        while (1)
        {    
            if (a*a<x)
            {
                a=a+ 1*d;
            }
            if (a*a>x)
            {
                break;
            }   
        }        
    }
    cout <<a;

    return 0;
}