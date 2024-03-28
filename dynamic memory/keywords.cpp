#include <iostream>
using namespace std;

#define PI 3.14

inline int getmax(int& a,int& b){
    return a>b?a:b;
}

int main(){
    // int r=5;
    // float area = PI * r * r;
    // cout<<area;

    int a=1,b=3;

    cout<<getmax(a,b);
    a=a+8;
    cout<<getmax(a,b);
    



    return 0;
}