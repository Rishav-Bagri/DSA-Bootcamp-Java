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
    double x ,d;
    cin>>x>>d;
    double b=mySqrt(x);
    float a=b;
    for (int i = 0; i < d; i++)
    {
        double c=round(pow(10,i+1));
        double e= 1/c;
        float f;
        while (1)
        {    
            f=a;
            if (a*a<x)
            {
                a=a+ e;
            }
            if (a*a>x)
            {
                break;
            }   
        }
        a=f;  
    }
    cout <<a;

    return 0;
}