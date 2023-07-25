#include <iostream>
#include <cmath>

using namespace std;
int main(){
    // int n ,ans,sum=0,a;
    // cin>>n;
    // for (int i = 0; n!=0; i++)
    // {
    //     a=n%2;
    //     sum=((pow(10,i))*a)+sum;

    //     n=n/2;
    // }
    // cout<<sum;

    // //#now using op 
    // int a=0,n,i,ans=0;
    // cin>>n;
    // while (n!=0)
    // {
    //     int bit =n&1;
    //     n=n>>1;
    //     ans=((pow(10,a))*bit)+ans;
    //     a++;

    // }
    // cout<<ans;

    // // #-ve
    int a=0 ,c, b,n,i,ans=0;
    cin>>n;
    n=-n;
    while (n!=0)
    {
        int bit =n&1;
        n=n>>1;
        ans=((pow(10,a))*bit)+ans;
        a++;

    }
    
    b =~ans;
    // cout<<b;

    c=b+1;
    c=-c;
    cout<<c;

    return 0;
}