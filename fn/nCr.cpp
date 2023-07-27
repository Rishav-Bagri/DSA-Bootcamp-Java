#include <iostream>
using namespace std;
int nCr(int n, int r){
    int mis=1,bis=1,tis=1;
    for (int i = 1; i<=n; i++)
    {
        mis=mis*i;
    }
    for (int i = 1; i<=r; i++)
    {
        bis=bis*i;
    }
    for (int i = 1; i<=(n-r); i++)
    {
        tis=tis*i;
    }
    int ans = (mis/bis)/(tis);
    return ans;

     
}
int main(){
    int a,b;
    cin>>a>>b;
    int p= nCr(a,b);
    cout<<p;
    return 0;
}