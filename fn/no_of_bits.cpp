#include <iostream>
using namespace std;
int set_bits(int a){
    int count=0;
    while (a!=0)
    {
        int b=a%2;
        a=a>>1;
        if (b==1)
        {
            count++;
        }
        
        
    }
    return count;
    
}
int main(){
    int a,b;
    cin>>a>>b;
    int c1=set_bits(a);
    int c2=set_bits(b);
    int total=c1+c2;
    cout<<total;

    return 0;
}