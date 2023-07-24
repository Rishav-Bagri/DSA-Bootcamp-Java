// HCF Of Two Numbers Program
#include <iostream>
using namespace std;
int main(){
    int a ,b,c,x,y;
    cin>> a;
    x=a;
    cin>> b;
    y=b;
    while (true)
    {
        if (a<b)
        {
            while (1>0)
            {   
                c=b%a;

                if (c==0)
                {
                    break;
                }
                else
                {
                    a=c;
                    b=a;               
                    continue;
                }          
            }
            
            cout<<a;
            break;
        }
        else
        {
            a=y;
            b=x;
            continue;
        }
        
    

    }
    return 0;
}