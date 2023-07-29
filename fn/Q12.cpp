// Write a function to check if a given triplet is a Pythagorean triplet or not.
#include <iostream>
using namespace std;

int check(int big,int smal,int small){
    int p=smal*smal+small*small;
    if (p==big * big)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pytha(int a , int b , int c){
    if (a>b &&a>c)
    {
        return check(a,b,c);     
    }
    if (b>a &&b>c)
    {
        return check(b,a,c);
    }
    if (c>a &&c>b)
    {
        return check(c,a,b);
    }
    if (a==b&&a==c)
    {
        return 0;
    }
    
}


int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<pytha(a,b,c);

    return 0;
}